#pragma once
#include "ITimeAction.h"
#include "ITrader.h"
#include "InstrumentData.h"
#include "IIndexCalculator.h"
#include "Tick.h"
#include "ThostFtdcUserApiDataType.h"
#include "ITradingStrategy.h"
#include "IExecutionStrategy.h"
#include "Performance.h"
#include "ILog.h"
#include <cstddef>

class CStrategyTest :
    public ITradingStrategy
{
	//在这里定义你在策略中需要的成员变量或者函数
public:

    CStrategyTest(const TThostFtdcDateType TradingDay,
                  const TThostFtdcInstrumentIDType InstrumentID,
                  TThostFtdcPriceType pricetick,
                  char closelabel,
                  const CTickMapping &tm, CTickMapping & opentime,
                  IMarketDataReader & md,
				  IIndexCalculator<double> & avg1,
				  IIndexCalculator<double> & avg2,
                  ITrader & oi,CSingleInstrumentStrategyPerformance & perf,
				  ILog & logger = DefaultLogger);

    virtual ~CStrategyTest(void);

    int FormatParameterString(const string &);

	void SetStopOffset(int);
	void SetExpectGainOffset(int, int);
	void SetThresHold(int);

    virtual void DoAction(long Tick, const char * Instrument = NULL);

private:
	int status;
	static const int UNTRADABLE = 0;
	static const int TRADABLE = 1;
	static const int EXITING = 2;
	static const int STOPPINGLOSS = 3;

	static const int insertorderoffset = 0;
	static const int chaseorderoffset = 1;

	int stopoffset;
	long EndTick;

	bool IsExiting;
	bool IsStoppingLoss;

	static const long openwaittime = 6;
	static const long closewaittime = 2;
	static const int fctimes = 3;

	static const int openvolume = 2;

    TThostFtdcInstrumentIDType InstrumentID;

	CInstrumentData * InstrumentData;
	const double * LastPrice;
	const double * AskPrice;
	const double * BidPrice;

	double expectprice, stopprice;
	static const long forceclosetime = 8;
	int forceclosetimes;
	long orderinserttime;

	IIndexCalculator<double> & Avg1;
	IIndexCalculator<double> & Avg2;

	int PriceDifferenceStatus; //0：表示一直相等；-1：表示 Avg1 < Avg2；1：表示 Avg1 > Avg2

    TThostFtdcPriceType orderprice;
	TThostFtdcPriceType	PriceTick;	//合约价格变动最小单位

	IExecutionStrategy * es;
	
	CSingleInstrumentStrategyPerformance & Performance;
	//策略日志参数
    //const char *perffile;
    //char *logfile;
    //void savelog(const TThostFtdcInstrumentIDType INSTRUMENT_ID, TThostFtdcPriceType LIMIT_PRICE, TThostFtdcDirectionType DIRECTION, char OPENCLOSE, TThostFtdcVolumeType VOLUME, const char* TTIME,float up,float dn);//
};
