#pragma once
#include "ITimeAction.h"
#include "ITrader.h"
#include "ThostFtdcUserApiDataType.h"
#include "InstrumentData.h"
#include <list>
#include <float.h>
#include <limits.h>

using namespace std;

//每个交易策略每个合约对应一个单独的执行策略
class IExecutionStrategy:public IOrderStatusReceiver
{
public:
	IExecutionStrategy(IOrderStatusReceiver * tradingstrategy, ITrader & trader, CInstrumentData * instrumentdata, ILog & logger = DefaultLogger, int commmode = Signalling);

	virtual ~IExecutionStrategy(){};

	//加载历史仓位
	virtual void LoadHistoryPosition(int position = 0, int ydposition = 0)
	{YdPosition = ydposition;Position = position;};

	//限价
	//调整仓位（以现有仓位为参考的仓位调整偏移：+往多头方向偏移；-往空头方向偏移。当之前的订单在撤单之前已经超过了调整仓位时，则不会发任何新订单。）、
	//订单有效时间限制（时间最长不能超过limittic）、
	//订单有效价格限制（例如：买多时，成交价迅速地超过限价，大于此参数数就撤单，此时此参数一定大于等于限价。卖空时情况类似。）
	//返回false时，表明此下单操作在小节结束时因此被拒绝
	virtual bool ReqOrderInsert(double limitprice,int adj_pos,long tick = LONG_MAX,double constrainprice = DBL_MAX) = 0;

	//取消执行策略的所有订单。返回false时，表明此下单操作在小节结束时因此被拒绝
	virtual bool CancelAllOrders() = 0;

	inline int GetStatus() const {return Status;};
	inline bool IsRunning() const {return Status == RUNNING;};
	inline bool IsFrozen() const {return Status == WAITING;};

	//等待订单状态 = 订单终止状态
	static const int WAITING = 0;
	//订单运行状态 = 下单或者撤单中
	static const int RUNNING = 1;

	//获取当前仓位：正数为多仓，负数为空仓
	inline int GetPosition() const {return Position;};
	inline int GetYdPosition() const {return YdPosition;};
	
	//获得最后一次订单成交价格
	inline double GetLastTradedPrice() const {return LastTradePrice;};
	//获得最后一次订单成交量
	inline unsigned int GetLastTradedVolume() const {return LastTradeVolume;};
	//获得当前的利润。若有隔夜持仓，则认为是以昨收盘价建立起昨日仓位；以今收盘价清空今日仓位后所得的利润。此利润没有计算手续费、隐性成本等。请在事后自行扣除交易成本
	inline double GetProfit() const {return Profit;};
	//获得平均隐形成本
	inline double GetAverageHiddenCost() const {return TotalTradePosition?HiddenCost/TotalTradePosition:0;};
	//获得今日本执行策略撤单次数
	inline unsigned int GetCancelNumber() const {return CancelNumber;};
	//获得今日开仓总手数
	inline unsigned int GetTotalOpenPosition() const {return TotalOpenPosition;};
	//获得今日交易总手数
	inline unsigned int GetTotalTradePosition() const {return TotalTradePosition;};
	//获得今日盈利的回合数
	inline unsigned int GetWinningRound() const {return WinningRound;};	
	//获得今日交易回合数，即从无仓位到有仓位再到无仓位为一个回合
	inline unsigned int GetRound() const {return Round;};

	inline void SetCancelNumberLimit(unsigned long limit){CancelNumberLimit = limit;};
	inline void SetCancelNumberPerTickLimit(unsigned long limit){CancelNumberPerTickLimit = limit;};

protected:
	
	//总仓位
	int Position;

	//昨仓(YdPosition要订单成为终止状态后才会更新，设计策略时只考虑总仓位)
	int YdPosition; 

	//交易接口
	ITrader & Trader;

	//合约行情数据
	CInstrumentData * InstrumentData;

	//最后一次订单成交价格和订单成交量
	double LastTradePrice;
	unsigned int LastTradeVolume;

	//利润(假设将昨仓以昨收盘价建仓，将今天最后的持仓以今收盘价平仓的利润值。)
	double Profit;

	//隐形成本：包括流动性成本、冲击成本等等（用于实盘统计成本）
	double HiddenCost;

	//撤单次数
	unsigned int CancelNumber;
	//每日撤单次数限制，缺省为500次
	unsigned int CancelNumberLimit;
	//Tick时间内撤单次数
	unsigned int CancelNumberPerTick;
	//每个Tick撤单次数限制，缺省为3次
	unsigned int CancelNumberPerTickLimit;
	//开仓总手数
	unsigned int TotalOpenPosition;
	//交易总手数
	unsigned int TotalTradePosition;
	//轮数，即从有持仓到持仓为零作为一轮
	unsigned int Round;
	//胜利轮数
	unsigned int WinningRound;

	//订单状态
	int Status;

	//订单回报更新实例: 交易策略（交易策略DoAction里面需先调用相关合约执行策略的DoAction）
	IOrderStatusReceiver * TradingStrategy;
};

extern IExecutionStrategy * CreateSimpleExecutionStrategy(IOrderStatusReceiver * OrderStatusReceiver, ITrader & trader, CInstrumentData * instrumentdata, ILog & logger = DefaultLogger, int commmode = IOrderStatusReceiver::Signalling);