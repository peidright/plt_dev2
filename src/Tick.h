#ifndef TICK_H
#define TICK_H

#include <string>
#include <vector>
#include "ThostFtdcUserApiDataType.h"

using namespace std;

struct CPeriod
{
    TThostFtdcTimeType tStartTime, tEndTime;
};

struct CTickPeriod
{
    long lStartTick, lEndTick;	//以00：00：00为基准的一天中的Tick点
    long lStartIndex;		//lStartTick对应于规划时间段的Tick点
};

class CTickMapping
{
public:
    CTickMapping(const CPeriod *, const long);
    CTickMapping(const vector<CPeriod> &);
    CTickMapping(const CTickMapping &);
    ~CTickMapping();

    //根据时间值返回绝对的Tick时间（从00：00：00开始，500ms一个Tick）
	static long TimeToTick(const TThostFtdcTimeType _Time);
	
	//根据绝对的Tick时间返回当天时间字符串
    static void TickToTime(long Tick, char * _Time);

	//限定时间段的Tick数
    long nTotalTick;

	static const long TICK_BEFORE_START = -1;
	static const long TICK_BETWEEN_PERIODS = -2;
	static const long TICK_AFTER_END = -3;

	//从CTP获取的时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
    long TickMapping(const TThostFtdcTimeType, const TThostFtdcMillisecType) const;

	//从绝对的TiCK时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
	long TickMapping(long globaltick) const;

	//从限定的时间段的Tick数值映射到绝对的TiCK时间
    long TickUnmapping(long) const;

	//判断时间点是否为小节结束时间点
	bool IsPeriodEndingTick(long Tick) const;

private:
    CTickPeriod * _TickPeriod;
    long size;
};

#endif
