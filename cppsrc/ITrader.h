#pragma once

//账户级别的订单管理系统（非策略级别）
#include "ThostFtdcUserApiDataType.h"
#include "ThostFtdcUserApiStruct.h"
#include "ILog.h"
#include "ITimeAction.h"
#include "IEvent.h"
#include <string>

using namespace std;

//用于交易策略类或者执行策略类的订单状态更新过程
class IOrderStatusReceiver:public ITimeAction
{
public:
	IOrderStatusReceiver(ILog & logger = DefaultLogger, int commmode = Signalling):Logger(logger),CommunicationMode(commmode){};
	virtual ~IOrderStatusReceiver(){};

	virtual void DoAction(long Tick, const char * Instrument = NULL) = 0;

	inline void SetCommunicationMode(int mode){CommunicationMode = mode;};
	inline int GetCommunicationMode() const {return CommunicationMode;};
	inline void SetEventQueue(IEventQueue * eventqueue){EventQueue = eventqueue;};
	inline void SendOrderStatusUpdateEvent(const char* instrument){EventQueue->SendEvent(-1,instrument,this);};

	static const int Shared_Memory = 0; //与DataSniffer中的SHARED_MEM模式对应
	static const int Signalling = 1; //与DataSniffer中的SIGNALLING模式对应
	static const int Mutex_Handling = 2; //与DataSniffer中的SIGNALLING模式对应

	ILog & Logger;

protected:
	int CommunicationMode;
	IEventQueue * EventQueue; 

};

///未知
#define ORDER_STATUS_Unknown 0
///队列中
#define ORDER_STATUS_Queueing 1
///未在队列中
#define ORDER_STATUS_NotQueueing 2
///撤单
#define ORDER_STATUS_Canceled 3
///全部成交
#define ORDER_STATUS_AllTraded 4
///出错
#define ORDER_STATUS_Error 5
///撤单并有完全的成交回报
#define ORDER_STATUS_CanceledwFullRtnTrade 6
///全部成交并有完全的成交回报
#define ORDER_STATUS_AllTradedwFullRtnTrade 7



class CExeOrderStatus
{
public:
	CExeOrderStatus();

	//获取订单方向，多头返回false，空头返回true
	inline bool IsShort() const
	{return OrderRtn.Direction!=THOST_FTDC_D_Buy;};

	inline bool IsLong() const
	{return OrderRtn.Direction==THOST_FTDC_D_Buy;};

	inline bool IsOpen() const
	{return OrderRtn.CombOffsetFlag[0] == THOST_FTDC_OF_Open;};

	inline bool IsClose() const
	{return OrderRtn.CombOffsetFlag[0] != THOST_FTDC_OF_Open;};

	CThostFtdcOrderField OrderRtn;
	
	//成交回报（接收时间晚于订单回报）
	//已经有明确成交回报的成交总价
	TThostFtdcPriceType TradeTotalPrice;
	//已经有明确成交回报的成交均价
	TThostFtdcPriceType TradeAvgPrice;
	//最近一次成交回报的价格
	TThostFtdcPriceType TradeLastPrice;
	//最近一次成交回报的量
	TThostFtdcVolumeType TradeLastVolume;
	//已经有明确成交回报的成交手数
	TThostFtdcVolumeType TradeVolume;

	int Status;
	int ErrID;

	//订单更新的动作：可以设置成交易策略（复杂状态机模式）或者执行策略（简化模式）
	IOrderStatusReceiver * OrderUpdateAction;
};

class ITrader: public ITimeAction	//用于自动根据行情来设置成交情况（测试模式），以及更新资金情况
{
public:
	ITrader(int category);	//设置Trader类型
	virtual ~ITrader(){};
	
	//执行交易实例
	virtual void Execute(){};

	//等待交易线程退出
	virtual void Join(){};

	//释放交易实例
	virtual void Release(){};

	//目前对于回测，均认为下单后直接就会成交；对于实际交易则依赖交易回报反馈的OrderStatus
	virtual int ReqOrderInsert(const TThostFtdcInstrumentIDType INSTRUMENT_ID, TThostFtdcPriceType LIMIT_PRICE,
		TThostFtdcDirectionType DIRECTION, char OPENCLOSE, TThostFtdcVolumeType VOLUME, CExeOrderStatus * & pOrderStatus, IOrderStatusReceiver * TS,
		TThostFtdcLongTimeType Time=NULL, const string & comments="") = 0;

	virtual int ReqOrderCancel(CExeOrderStatus * pOrder) = 0;

	TThostFtdcMoneyType AvailableMoney;

	inline void DisableOrderLog(){OrderLog = false;};
	inline void EnableOrderLog(){OrderLog = true;};

	//Trader类型
	const int Category;
	static const int FILETRADER = 0;
	static const int REALTRADER = 1;

protected:
	bool OrderLog;
};

extern ITrader * CreateBackTestTraderInstance(const char * filename);

extern ITrader * CreateRealTraderInstance(const TThostFtdcInvestorIDType INVESTOR_ID,const TThostFtdcPasswordType PASSWORD, bool TestServer, ILog & Logger = DefaultLogger);
extern ITrader * CreateRealTraderInstance(const string & Param, bool TestServer, ILog & Logger = DefaultLogger);