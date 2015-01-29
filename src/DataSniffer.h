#pragma once

#include "Tick.h"
#include "ITimeAction.h"
#include "ThostFtdcUserApiStruct.h"
#include "InstrumentData.h"
#include "ITrader.h"
#include "IIndexCalculator.h"
#include "ITradingStrategy.h"

#include <vector>
#include <pthread.h>

using namespace std;

class ITrader;
class ITradingStrategy;

typedef vector<ITimeAction *> TimeActionVector;
typedef vector<ITrader *> TraderVector;
typedef vector<ITimeAction *> IndexVector;
typedef vector<ITradingStrategy *> StrategyVector;

class CDataSniffer: public IEventQueue
{
public:
	CDataSniffer(IMarketDataReader & md, int commmode = Signalling);
	virtual ~CDataSniffer(void);

	//接收或者监听行情更新通知以及订单更新通知。执行数据处理操作，包括指标计算和策略。
    virtual void Execute() = 0;
    
	//将Execute放置在线程中，与数据读取线程同步
	inline int ExecuteInThread(){return pthread_create(&tid, NULL, Execute, this);};
	inline int JoinInThread(){return pthread_join(tid,NULL);};
	inline int StopThread(){return pthread_cancel(tid);};

	inline void SetOver(){IsOver = true;};

    //添加指标计算动作，指标计算动作的添加需考虑依赖关系
    virtual void AddIndexCalculator(ITimeAction *) = 0;
	//添加策略动作，策略动作应添加在依赖指标计算器添加完毕后
	virtual void AddStrategy(ITradingStrategy *) = 0;
	//添加资金量/成交更新动作，对于回测需添加订单管理实例到队列，以满足成交更新和资金量更新；对于真实下单添加到队列，可以满足资金量更新。
	virtual void AddTrader(ITrader *) = 0;

	inline int GetCommunicationMode() const {return CommunicationMode;};
	static const int Shared_Memory = 0;
	static const int Signalling = 1;

protected:
	IMarketDataReader & MarketDataReader;
	
	bool IsOver;
	//供pthread使用的线程接口
    pthread_t tid;
	
	const int CommunicationMode;

    static void* Execute(void* param);	
};

extern CDataSniffer * CreateSingleInstrumentSniffer(const string & instrumentid, IMarketDataReader & md, int Mode = CDataSniffer::Signalling);
extern CDataSniffer * CreateMultipleInstrumentSniffer(IMarketDataReader & md, int Mode = CDataSniffer::Signalling);