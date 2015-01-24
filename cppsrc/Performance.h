#pragma once

#include "ThostFtdcUserApiDataType.h"
//#include <string.h>
#include <string>
#include <pthread.h>

using namespace std;

class CPerformance
{
public:
	CPerformance(long bufsize);
	virtual ~CPerformance(void);

	void AddPerformanceItem(const TThostFtdcDateType tradingday,double profit);

	void Sort();

	//计算除Kelly杠杆系数外的评估指标，请先调用Sort
	virtual void Evaluate();
	
	//计算Kelly杠杆系数，请先调用Evaluate
	void GetKellyLeverage(double MaxValue);

	//将日期、收益存入文件
	virtual void SavePerformance(const char * filename) const;

	string * TradingDay;
	double * DailyProfit;

	//MAR比率：年化收益比上最大回测
	double MAR;
	//平均日收益
	double AverageProfit;
	//年化收益 = 日均收益 * 244
	double AnnualProfit;
	//盈利天数占比
	double WinningDayRatio;
	//最大回撤
	double MaxDrawdown;
	//最大回撤天数
	double MaxDrawdownDuration;
	//Sharpe比率
	double SharpeRatio;
	//最大连续盈亏
	double MaxContinuousWinningProfit;
	double MaxContinuousLosingProfit;
	//最大日内盈亏
	double MaxDailyWinningProfit;
	double MaxDailyLosingProfit;
	//最大连续盈亏天数
	unsigned int MaxContinuousWinningDay;
	unsigned int MaxContinuousLosingDay;
	//Kelly杠杆系数
	double KellyLeverage;

	static const unsigned int TradingDaysPerYear = 244;

protected:
	long Size;
	long Counter;

	//交换元素i和元素j的所有参数
	virtual void Swap(long i,long j);

	pthread_spinlock_t spinlock;
};

class CSingleInstrumentStrategyPerformance:public CPerformance
{
public:
	CSingleInstrumentStrategyPerformance(long bufsize);
	virtual ~CSingleInstrumentStrategyPerformance(void);

	void AddPerformanceItem(const TThostFtdcDateType tradingday,double profit,unsigned int totaltradeposition,
		unsigned int totalopenposition, unsigned int round,unsigned int winninground);

	//基于总开仓数量的绩效校准: Profit -= totalopenposition * factor
	void Calibrate(double factor);

	//计算除Kelly杠杆系数外的评估指标
	virtual void Evaluate();

	//将日期、收益、总交易次数、总开仓次数、回合数、胜利回合数存入文件
	virtual void SavePerformance(const char * filename) const;

	unsigned int * DailyTotalTradePosition;
	unsigned int * DailyTotalOpenPosition;
	unsigned int * DailyRound;
	unsigned int * DailyWinningRound;

	//每日平均交易回合数，每日平均交易次数
	double RoundPerDay, TradePositionPerDay;
	//每日最大交易次数，每日最小交易次数
	unsigned int MaxTotalTradePositionPerDay, MinTotalTradePositionPerDay;
	//盈利回合占比
	double WinningRoundRatio;

protected:
	virtual void Swap(long i,long j);
};