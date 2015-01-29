#pragma once
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
#include <pthread.h>
#include "ThostFtdcUserApiDataType.h"
#include "Tick.h"

using namespace std;


class ITickValidator
{
public:
	//判断Tick是否是设定的该进行计算的时间
	virtual bool IsTickValid(long Tick,long currentTick) const {return Tick>currentTick;};

	virtual long GetNextValidTick(long Tick) const {return ++Tick;};
};

extern ITickValidator AlwaysTrueTickValidator;

class CRecidualTickValidator: public ITickValidator
{
public:
	virtual bool IsTickValid(long Tick,long currentTick) const {return Tick >= GetNextValidTick(currentTick);};
	//设置该进行计算的Tick模板，目前是模ValidTickStep余ValidTickOffset为进行计算的Tick时间点
	virtual long GetNextValidTick(long Tick) const {return (Tick+ValidTickStep-ValidTickOffset)/ValidTickStep*ValidTickStep+ValidTickOffset;};

	inline void SetValidTick(long step = 1, long offset = 0){ValidTickStep=step;ValidTickOffset=offset;};
protected:
	long ValidTickStep;
	long ValidTickOffset;
};

class ITimeAction
{
public:
    ITimeAction(void);
    virtual ~ITimeAction(void);

	//重新初始化 (设置currentTick = -1)
    virtual void ReInit();

	inline long GetCurrentTick() const{return currentTick;};

	//判断Tick是否是设定的该进行计算的时间
	inline bool IsTickValid(long Tick) const {return TickValidator.IsTickValid(Tick,currentTick);};
	
    //执行的操作：Tick 在时间段里面的相对Tick；Instrument 合约名
	//设置currentTick = 最新的Tick
    virtual void DoAction(long Tick, const char * Instrument = NULL) = 0;
    
	//只关联一个合约的TimeAction使用，不考虑Tick信息到来的真实顺序
	void Run(long MaxTick);
	
	//只关联一个合约的TimeAction使用，按照Tick数据到达顺序执行计算。
	void Run(const long * TickQueue,long TickQueueMaxIndex, const CTickMapping & TradeTime);
	
	//关联多个合约的TimeAction使用，按照Tick数据到达顺序执行计算。vector参数里面的顺序和InstrumentIDs的顺序（字母大小写顺序）一致，数量相等。
	void Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const CTickMapping & TradeTime);
	void Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const vector<const CTickMapping *> & VectorTradeTime);

	//注册相关的合约名。后续可多次注册不同的合约名，来满足多合约策略。
	void RegisterRelatedInstrument(const char * InstrumentID);
	//获取相关合约名，供DS添加TimeAction按照合约归类使用
	inline const vector<string> & GetRelatedInstrument() const{return InstrumentIDs;};

	inline void DoActionWithLock(long Tick, const char * Instrument = NULL)
	{
		pthread_spin_lock(&lock);
		DoAction(Tick,Instrument);
		pthread_spin_unlock(&lock);		
	};

	void SetTickValidator(ITickValidator & tickvalidator){TickValidator = tickvalidator;};

protected:
    //已经对currentTick的数据进行了处理
    long currentTick;
	vector<string> InstrumentIDs;

	ITickValidator & TickValidator;

	pthread_spinlock_t lock;
};
