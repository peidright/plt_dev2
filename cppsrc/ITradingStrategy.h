#pragma once
#include "ILog.h"
#include "ITimeAction.h"
#include "ITrader.h"
#include "InstrumentData.h"
#include <map>

using namespace std;

class ITradingStrategy:public IOrderStatusReceiver
{
public:
	ITradingStrategy(IMarketDataReader & md, ITrader & trader, const TThostFtdcDateType tradingday, const CTickMapping &tradingtime, const CTickMapping & opentime, 
		const string & name, ILog & logger = DefaultLogger,int commmode = Signalling);
	virtual ~ITradingStrategy();

	inline const string & GetStrategyName() const {return StrategyName;};
	inline const string & GetTradingDay() const {return TradingDay;};
	inline const CTickMapping & GetTradeTime() const {return TradeTime;};
	inline const CTickMapping & GetOpenTime() const {return OpenTime;};

protected:
	IMarketDataReader & MarketDataReader;
	ITrader & Trader;

	string TradingDay;
	string StrategyName;

	//合约日内交易时间段
	const CTickMapping & TradeTime;
	//策略可开仓时间段
	const CTickMapping & OpenTime;
};
