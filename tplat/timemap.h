//
//  timemap.h
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__timemap__
#define __tplat__timemap__

#include <iostream>

#include <iostream>
#include <vector>
#include "ThostFtdcUserApiDataType.h"

/*
 time_split 的含义为，将1分钟，分为几个split. 
 如果分为120， 那么就是1秒钟2个tick.如果为 1
 
 
 */



struct CTPeriod
{
    TThostFtdcTimeType start_time, end_time;
    long is_second_day;
};

struct CTimePeriod
{
    long start_time, end_time;	//以00：00：00为基准的一天中的Tick点
    long start_index,index_split;  //lStartTick对应于规划时间段的Tick点
    
};

class CTimeMapping
{
public:
    CTimeMapping(const CTPeriod *, long ,const long);
    CTimeMapping(const std::vector<CTPeriod> &,long);
    CTimeMapping(const CTimeMapping &);
    ~CTimeMapping();
    
    //这里fix为从 开盘时间开始,或者从固定时间开始.
    //根据时间值返回绝对的time 索引时间（从00：00：00开始，500ms一个Tick）
	static long time2index(const TThostFtdcTimeType _Time, long index_split);
    
    static long time2index(const char *start_time, const char *now_time, long index_split);
	
	//根据绝对的index时间返回当天时间字符串
    static void index2time(long index,long index_split, char * _Time);
    
    static void index2time(const char * start_time, long index,long index_split, char * _Time);
    
	//限定时间段的index数
    long total_index;
    
	static const long INDEX_BEFORE_START = -1;
	static const long INDEX_BETWEEN_PERIODS = -2;
	static const long INDEX_AFTER_END = -3;
    
	//从CTP获取的时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
    long time_mapping(const TThostFtdcTimeType, const TThostFtdcMillisecType) const;
    
	//从绝对的TiCK时间映射到时间段的Tick数值：超出界限反馈负值，-1表示在合约每日交易开始前；-2表示在合约每日休市时；-3表示在合约每日交易结束后
	long time_mapping(long globalindex) const;
    
	//从限定的时间段的Tick数值映射到绝对的TiCK时间
    long time_unmapping(long) const;
    
	//判断时间点是否为小节结束时间点
	bool is_period_end(long index) const;
    
private:
    CTimePeriod * _timeperiod;
    long size;
    long index_split;
};

#endif /* defined(__tplat__timemap__) */
