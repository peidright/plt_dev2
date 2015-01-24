
static long CTickMapping::TimeToTick(const char *Src)
{
  sscanf(Src, "%ld:%ld:%ld", &v8, &v7, &v6);
  return 0;
}

CTickMapping::CTickMapping(const CPeriod *, const long size)
{
    //CPeriod->CTickPeriod
    this->size=size;
    this->_TickPeriod=new CTickPeriod[size];
    for(int i=0;i<size;i++) {
        /*
        this->_TickPeriod[i].lStartTick=
        this->_TickPeriod[i].lEndTick=
        this->_TickPeriod[i].lStartIndex=
        */
    }
    return;
}


CTickMapping::CTickMapping(const vector<CPeriod> &cps)
{
    return;
}

CTickMapping::CTickMapping(const CTickMapping & ctmap)
{
    return;
}

static long CTickMapping::TimeToTick(const char *Src)
{
    sscanf(Src, "%ld:%ld:%ld", &v8, &v7, &v6);
    return 0;
}

static void CTickMapping::TickToTime(long Tick, char * _Time);
{
    /*
    v6 = 500 * (a1 & 1);
    v10 = a1 >> 1;
    v7 = v10 % 60;
    v10 /= 60;
    v8 = v10 % 60;
    v9 = v10 / 60;
    sprintf(Dest, "%02ld:%02ld:%02ld.%ld", v10 / 60, v10 % 60, v7, v6);
    */
    return 0;
}

long CTickMapping::TickMapping(const TThostFtdcTimeType ctp_time, const TThostFtdcMillisecType)
{
    int v8=CTickMapping::TimeToTick(ctp_time);
    /*
    v9 = this;
    if ( a3 >= 500 )
        ++v8;
    for ( i = 0; i < *((_DWORD *)v9 + 2); ++i )
    {
        if ( v8 >= *(_DWORD *)(12 * i + *((_DWORD *)v9 + 1)) && v8 <= *(_DWORD *)(*((_DWORD *)v9 + 1) + 12 * i + 4) )
        {
            v3 = 12 * i;
            v4 = *(_DWORD *)(*((_DWORD *)v9 + 1) + 12 * i + 8) + v8 - *(_DWORD *)(*((_DWORD *)v9 + 1) + 12 * i);
            return _RTC_CheckEsp(v4, v3);
        }
    }
    v4 = *((_DWORD *)v9 + 1);
    v3 = v8;
    if ( v8 >= *(_DWORD *)v4 )
    {
        v4 = 12 * (*((_DWORD *)v9 + 2) - 1);
        v3 = v8;
    }
    */
    for(int i=0;i<this->size;i++) {
        if (v8 > this->_TickPeriod[i] && v8 < this->_TickPeriod[i].) {
            //
            return 0;
        }
    }
    return 0;
}


long CTickMapping::TickMapping(long globaltick)
{
    int result; // eax@5
    /*
    char v3; // [sp+Ch] [bp-D8h]@1
    int i; // [sp+D0h] [bp-14h]@1
    void *v5; // [sp+DCh] [bp-8h]@1

    v5 = this;
    for ( i = 0; i < *((_DWORD *)v5 + 2); ++i )
    {
        if ( a2 >= *(_DWORD *)(12 * i + *((_DWORD *)v5 + 1)) && a2 <= *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i + 4) )
            return *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i + 8) + a2 - *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i);
    }
    if ( a2 >= **((_DWORD **)v5 + 1) )
    {
        if ( a2 <= *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * (*((_DWORD *)v5 + 2) - 1) + 4) )
            result = -2;
        else
            result = -3;
    }
    else
    {
        result = -1;
    }
    */
    return result;
}

long CTickMapping::TickUnmapping(long idx)
{
    {
        for ( i = 0; i < *((_DWORD *)v5 + 2) && a2 >= *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i + 8); ++i )
            ;
        --i;
        result = a2 + *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i) - *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i + 8);
    }

    if(idx < 0 || idx > this->nTotalTick) {
        return -1;
    } else {
        for(int i=0;i< this->size;i++) {
            //result= idx + firstxx-xx;
        }
    }
    return result;
}

bool CTickMapping::IsPeriodEndingTick(long Tick)
{
  for ( int i = 0; i < this->size; i++ )
  {
    /*if( Tick == *(_DWORD *)(*((_DWORD *)v5 + 1) + 12 * i + 8) - 1 )
      return 1;
     */
  }
  return 0;
}
