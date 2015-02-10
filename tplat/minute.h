//
//  minute.h
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__minute__
#define __tplat__minute__

#include <iostream>

#include <iostream>
#include <vector>
#include "ThostFtdcUserApiDataType.h"
struct CPeriod
{
    TThostFtdcTimeType tstart_time, tend_time;
};

struct CMinutePeriod
{
    long start_minute, end_minute;	//以00：00：00为基准的一天中的Tick点
    long start_index,tick_split;  //lStartTick对应于规划时间段的Tick点
};

class CMinuteMapping
{
public:
    CTickMapping(const CPeriod *, long ,const long);
    CTickMapping(const std::vector<CPeriod> &,long);
    CTickMapping(const CTickMapping &);
    ~CTickMapping();
    
    //根据时间值返回绝对的Tick时间（从00：00：00开始，500ms一个Tick）
	static long time2tick(const TThostFtdcTimeType _Time, long tick_split);
	
	//根据绝对的Tick时间返回当天时间字符串
    static void tick2time(long tick,long tick_split, char * _Time);
    
	//限定时间段的Tick数
    long total_tick;
    
	static const long TICK_BEFORE_START = -1;
	static const long TICK_BETWEEN_PERIODS = -2;
	static const long TICK_AFTER_END = -3;
    
	//从CTP获取的时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
    long tick_mapping(const TThostFtdcTimeType, const TThostFtdcMillisecType) const;
    
	//从绝对的TiCK时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
	long tick_mapping(long globaltick) const;
    
	//从限定的时间段的Tick数值映射到绝对的TiCK时间
    long tick_unmapping(long) const;
    
	//判断时间点是否为小节结束时间点
	bool is_period_end(long tick) const;
    
private:
    CTickPeriod * _tickperiod;
    long size;
    long tick_split;
};



#endif /* defined(__tplat__minute__) */
