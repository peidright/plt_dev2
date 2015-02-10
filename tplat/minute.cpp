//
//  minute.cpp
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "minute.h"

#include "tick.h"
#include <assert.h>

long CTickMapping::time2tick(const char *Src, long tick_split)
{
    long hour,minute,second;
    sscanf(Src, "%ld:%ld:%ld", &hour, &minute, &second);
    return (hour * 60 * 60+ minute * 60 + second ) * tick_split;
}

CTickMapping::CTickMapping(const CPeriod * cperiod, long tick_split ,const long size)
{
    //CPeriod->CTickPeriod
    this->size=size;
    this->total_tick=0;
    this->_tickperiod=new CTickPeriod[size];
    for(int i=0;i<size;i++) {
        /*
         this->_TickPeriod[i].lStartTick=
         this->_TickPeriod[i].lEndTick=
         this->_TickPeriod[i].lStartIndex=
         */
        this->_tickperiod[i].start_tick=time2tick(cperiod[i].tstart_time,tick_split) + 1;
        this->_tickperiod[i].end_tick=time2tick(cperiod[i].tend_time,tick_split);
        this->_tickperiod[i].start_index=this->total_tick;
        this->_tickperiod[i].tick_split=tick_split;
    }
    assert(size > 0);
    this->tick_split=tick_split;
    return;
}


CTickMapping::CTickMapping(const std::vector<CPeriod> &cps, long tick_split)
{
    this->total_tick=0;
    this->size=cps.size();
    this->_tickperiod=new CTickPeriod[this->size];
    
    for(int i=0;i<this->size;i++){
        this->_tickperiod[i].start_tick=time2tick(cps[i].tstart_time,tick_split) + 1;
        this->_tickperiod[i].end_tick=time2tick(cps[i].tend_time,tick_split);
        this->_tickperiod[i].start_index=this->total_tick;
        this->total_tick +=(this->_tickperiod[i].end_tick - this->_tickperiod[i].start_tick);
        this->_tickperiod[i].tick_split=tick_split;
    }
    this->tick_split=tick_split;
    assert(this->size>0);
    return;
}


CTickMapping::CTickMapping(const CTickMapping & ctmap)
{
    this->tick_split=ctmap.tick_split;
    this->total_tick=ctmap.total_tick;
    this->size=ctmap.size;
    this->_tickperiod=new CTickPeriod[this->size];
    memcpy(_tickperiod, ctmap._tickperiod, this->size * sizeof(CTickPeriod));
    return;
}


void CTickMapping::tick2time(long tick,long tick_split, char * _Time)
{
    long hour,minute,sec,msec;
    msec=(1000 / tick_split) * (tick % tick_split);
    sec=(tick  / tick_split) % 60;
    minute=((tick / tick_split) / 60) %60;
    hour  =(tick / tick_split) / (60 * 60);
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

long CTickMapping::tick_mapping(const TThostFtdcTimeType ctp_time, const TThostFtdcMillisecType  msec) const
{
    long tick_split=this->tick_split;
    long tick=CTickMapping::time2tick(ctp_time,tick_split);
    
    
    for(int i=0;i<this->size;i++) {
        if (tick >= this->_tickperiod[i].start_tick && tick <= this->_tickperiod[i].end_tick) {
            //
            
            return tick+ this->_tickperiod[i].start_index - this->_tickperiod[i].start_tick;
        }
    }
    
    if (tick < this->_tickperiod[0].start_tick) {
        return TICK_BEFORE_START;
    } else if (tick > this->_tickperiod[this->size-1].end_tick){
        return TICK_AFTER_END;
    } else {
        return TICK_BETWEEN_PERIODS;
    }
}

long CTickMapping::tick_mapping(long globaltick) const
{
    for(int i=0;i<this->size;i++) {
        if (globaltick >= this->_tickperiod[i].start_tick && globaltick <= this->_tickperiod[i].end_tick) {
            //
            
            return globaltick+ this->_tickperiod[i].start_index - this->_tickperiod[i].start_tick;
        }
    }
    
    if (globaltick < this->_tickperiod[0].start_tick) {
        return TICK_BEFORE_START;
    } else if (globaltick > this->_tickperiod[this->size-1].end_tick){
        return TICK_AFTER_END;
    } else {
        return TICK_BETWEEN_PERIODS;
    }
}


long CTickMapping::tick_unmapping(long tick) const
{
    long pid;
    if(tick < 0 || tick > this->total_tick){
        return -1;
    } else {
        for(pid=0; pid<this->size && pid >= this->_tickperiod[pid].start_index; pid++);
        pid--;
        return tick + this->_tickperiod[pid].start_index - this->_tickperiod[pid].start_tick;
    }
}

bool CTickMapping::is_period_end(long tick) const
{
    
    for ( int i = 0; i < this->size; i++ )
    {
        if(tick == this->_tickperiod[i].end_tick-1) {
            return 1;
        }
    }
    return 0;
}