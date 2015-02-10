//
//  timemap.cpp
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "timemap.h"



#include <assert.h>



long CTimeMapping::time2index(const char *Src, long index_split)
{
    long hour,minute,second;
    sscanf(Src, "%ld:%ld:%ld", &hour, &minute, &second);
    return (hour * 60 * 60+ minute * 60 + second ) * index_split;
}

long CTimeMapping::time2index(const char *start_time, const char *now_time, long index_split)
{
    long start_hour,start_minute,start_second;
    long hour,minute,second;
    sscanf(now_time, "%ld:%ld:%ld", &hour, &minute, &second);
    sscanf(start_time,"%ld:%ld:%ld",start_hour,start_minute,start_second);
    
    //return (hour * 60 * 60+ minute * 60 + second ) * index_split;
    /*根据起始时间，将结束时间映射到 绝对index
     */
    if(hour <= start_hour){
        /*index_split = (1, 30, 60, 120)(1分钟，30秒，1秒，500毫秒)
          60的含义是 1
         */
        return ((hour + 24 - start_hour)* 60 * 60 + (minute-start_minute)*60 + second-start_second)* (index_split) / 60;
    } else {
        return ((hour - start_hour)* 60 * 60 + (minute-start_minute)*60 + second-start_second)* (index_split) / 60;
    }
}

CTimeMapping::CTimeMapping(const CTPeriod * ctperiod, long index_split ,const long size)
{
    //CPeriod->CTickPeriod
    this->size=size;
    this->total_index=0;
    this->_timeperiod=new CTimePeriod[size];
    
    for(int i=0;i<size;i++) {
        /*
         this->_TickPeriod[i].lStartTick=
         this->_TickPeriod[i].lEndTick=
         this->_TickPeriod[i].lStartIndex=
         */
        this->_timeperiod[i].start_time=time2index(ctperiod[0].start_time,ctperiod[i].start_time,index_split) + 1;
        this->_timeperiod[i].end_time=time2index(ctperiod[0].start_time,ctperiod[i].end_time,index_split);
        this->_timeperiod[i].start_index=this->total_index;
        this->_timeperiod[i].index_split=index_split;
        this->total_index+=this->_timeperiod[i].end_time-this->_timeperiod[i].start_time;
    }
    assert(size > 0);
    this->index_split=index_split;
    return;
}


CTimeMapping::CTimeMapping(const std::vector<CTPeriod> &ctps, long index_split)
{
    this->total_index=0;
    this->size=ctps.size();
    this->_timeperiod=new CTimePeriod[this->size];
    
    for(int i=0;i<this->size;i++){
        this->_timeperiod[i].start_index=time2index(ctps[0].start_time,ctps[i].start_time,index_split) + 1;
        this->_timeperiod[i].end_time=time2index(ctps[0].start_time,ctps[i].end_time,index_split);
        this->_timeperiod[i].start_index=this->total_index;
        this->total_index +=this->_timeperiod[i].end_time - this->_timeperiod[i].start_time;
        this->_timeperiod[i].index_split=index_split;
    }
    this->index_split=index_split;
    assert(this->size>0);
    return;
}


CTimeMapping::CTimeMapping(const CTimeMapping & ctmap)
{
    this->index_split=ctmap.index_split;
    this->total_index=ctmap.total_index;
    this->size=ctmap.size;
    this->_timeperiod=new CTimePeriod[this->size];
    memcpy(_timeperiod, ctmap._timeperiod, this->size * sizeof(CTimePeriod));
    return;
}


void CTimeMapping::index2time(const char * start_time, long index,long index_split, char * _Time)
{
    
    long hour,minute,sec,msec;
    long start_hour,start_minute,start_second;
    //sscanf(start_time, "%ld:%ld:%ld", &hour, &minute, &second);
    sscanf(start_time,"%ld:%ld:%ld",start_hour,start_minute,start_second);
    
    long total_time = ((index * 60 / index_split)+start_hour*60*60 + start_minute*60 + start_second);
    
    if ( (total_time /60) > (24 * 60)) {
        total_time=total_time - 24*60*60;
    }
    
    if ( index_split > 60 ){
        msec = (index % (index_split / 60))* (1000 /(index_split / 60));
    }
    sec= total_time %60;
    minute=( total_time / 60) %60;
    hour  =(total_time / (60 * 60));
    /*
     v6 = 500 * (a1 & 1);
     v10 = a1 >> 1;
     v7 = v10 % 60;
     v10 /= 60;
     v8 = v10 % 60;
     v9 = v10 / 60;
     sprintf(_Time, "%02ld:%02ld:%02ld.%ld", v10 / 60, v10 % 60, v7, v6);
     */
    sprintf(_Time, "%02ld:%02ld:%02ld.%ld", hour, minute, sec, msec);
}

long CTimeMapping::time_mapping(const TThostFtdcTimeType ctp_time, const TThostFtdcMillisecType  msec) const
{
    long index_split=this->index_split;
    long index=CTimeMapping::time2index(ctp_time,index_split);
    
    
    for(int i=0;i<this->size;i++) {
        if (index >= this->_timeperiod[i].start_time && index <= this->_timeperiod[i].end_time) {
            //
            return index+ this->_timeperiod[i].start_index - this->_timeperiod[i].start_time;
        }
    }
    
    if (index < this->_timeperiod[0].start_index) {
        return INDEX_BEFORE_START;
    } else if (index > this->_timeperiod[this->size-1].end_time){
        return INDEX_AFTER_END;
    } else {
        return INDEX_BETWEEN_PERIODS;
    }
}

long CTimeMapping::time_mapping(long globalindex) const
{
    for(int i=0;i<this->size;i++) {
        if (globalindex >= this->_timeperiod[i].start_time && globalindex <= this->_timeperiod[i].end_time) {
            //
            
            return globalindex+ this->_timeperiod[i].start_index - this->_timeperiod[i].start_time;
        }
    }
    
    if (globalindex < this->_timeperiod[0].start_time) {
        return INDEX_BEFORE_START;
    } else if (globalindex > this->_timeperiod[this->size-1].end_time){
        return INDEX_AFTER_END;
    } else {
        return INDEX_BETWEEN_PERIODS;
    }
}


long CTimeMapping::time_unmapping(long index) const
{
    long pid;
    if(index < 0 || index > this->total_index){
        return -1;
    } else {
        for(pid=0; pid<this->size && pid >= this->_timeperiod[pid].start_index; pid++);
        pid--;
        return index + this->_timeperiod[pid].start_index - this->_timeperiod[pid].start_time;
    }
}

bool CTimeMapping::is_period_end(long index) const
{
    
    for ( int i = 0; i < this->size; i++ )
    {
        if(index == this->_timeperiod[i].end_time-1) {
            return 1;
        }
    }
    return 0;
}