int COrderStatus::COrderStatus(void *this)
{
}

signed int COrderStatus::MakeOrder(void *this, double a2, int a3, int a4, int a5, double a6)
{
}

IExecutionStrategy::IExecutionStrategy(IOrderStatusReceiver * tradingstrategy, ITrader & trader, CInstrumentData * instrumentdata, ILog & logger = DefaultLogger, int commmode = Signalling)
{

}

void IExecutionStrategy::LoadHistoryPosition(int position=0, int ydposition=0)
{
}

int CSimpleExecutionStrategy::CSimpleExecutionStrategy(void *this, int a2, int a3, int a4, int a5, int a6)
{
}

int CInstrumentData::GetLastPriceToday(int this)
{
}

void CSimpleExecutionStrategy::LoadHistoryPosition(int position=0, int ydposition=0)
{
}


int  CSimpleExecutionStrategy::SendOrder(void *this, int a2, double a3)
{
        CInstrumentData::GetInstrumentID(*((void **)v85 + 15));
        CInstrumentData::HasCloseTodayCommand(*((_DWORD *)v85 + 15))
}
int __fastcall CSimpleExecutionStrategy::DoAction(int a1, int a2, __int64 a3)
{
    if ( CExeOrderStatus::IsLong(v14) )
    {
    }
    else
    {
    }
    while ( v13 < *(_DWORD *)(v15 + 184) )
    {
      if ( *(_DWORD *)(v14 + 600) < 5 )
      {
      }
      else
      {
        if ( CExeOrderStatus::IsLong(v14) )
        {
          if ( CInstrumentData::HasCloseTodayCommand(*(_DWORD *)(v15 + 60)) && *(_BYTE *)(v14 + 86) == 49 )
        }
        else
        {
          if ( CInstrumentData::HasCloseTodayCommand(*(_DWORD *)(v15 + 60)) && *(_BYTE *)(v14 + 86) == 49 )
            *(_DWORD *)(v15 + 52) = *(_DWORD *)(v15 + 200) - *(_DWORD *)(v14 + 320);
        }
        if ( CExeOrderStatus::IsOpen(v14) )
      }
    }
  if ( !*(_DWORD *)(v15 + 184) )
  {
    if ( *(_DWORD *)(v15 + 188) == 3 )
    {
      CSimpleExecutionStrategy::SendOrder(
        *(_DWORD *)(v15 + 148) - *(_DWORD *)(v15 + 48),
        *(double *)(v15 + 136));
      if ( !*(_DWORD *)(*(_DWORD *)(v15 + 56) + 48) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 8))(v15, a3, HIDWORD(a3));
      }
    }
    else
    {
      *(_DWORD *)(v15 + 188) = 0;
      *(_DWORD *)(v15 + 128) = 0;
    }
  }
}
bool  CExeOrderStatus::IsLong(int this)
{
}

bool  CExeOrderStatus::IsOpen(int this)
{
}

double CInstrumentData::GetYdClosePrice(int this)
{
}

int CSimpleExecutionStrategy::ReqOrderInsert(double limitprice, int adj_pos, long tick, double constrainprice)
{
    /*
    a2=limitprice
    a3=adj_pos,
    a4=tick
    a5=constrainprice
    */
  unsigned __int8 v5; // al@1
  int v6; // edx@1
  int v7; // ecx@1
  int v8; // ecx@3
  int v9; // eax@3
  int v10; // eax@5
  int v11; // eax@8
  char v13; // [sp+2Ch] [bp-CCh]@1
  int v14; // [sp+F0h] [bp-8h]@1

  memset(&v13, -858993460, 0xCCu);
  v14 = (int)this;
  v5 = CTickMapping::IsPeriodEndingTick(*(_DWORD *)(*(_DWORD *)(v14 + 60) + 8), *(_DWORD *)(v14 + 4));
  v7 = v5;
  if ( !v5 )
  {
    *(_DWORD *)(v14 + 128) = 1;
    if ( *(_DWORD *)(v14 + 184) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
      _RTC_CheckEsp(v8, v6);
      v9 = CInstrumentData::GetLastPriceToday(*(_DWORD *)(v14 + 60));
      *(double *)(v14 + 216) = *(double *)(v9 + 8 * *(_DWORD *)(v14 + 4));
      COrderStatus::MakeOrder((void *)(v14 + 136), a2, *(_DWORD *)(v14 + 48), a3, a4, a5);
    }
    else
    {
      if ( a3 )
      {
        v10 = CInstrumentData::GetLastPriceToday(*(_DWORD *)(v14 + 60));
        *(double *)(v14 + 208) = *(double *)(v10 + 8 * *(_DWORD *)(v14 + 4));
        COrderStatus::MakeOrder((void *)(v14 + 136), a2, *(_DWORD *)(v14 + 48), a3, a4, a5);
        CSimpleExecutionStrategy::SendOrder((void *)v14, a3, a2);
      }
      else
      {
        *(_DWORD *)(v14 + 128) = 0;
      }
    }
    v7 = *(_DWORD *)(v14 + 56);
    if ( !*(_DWORD *)(v7 + 48) )
    {
      v11 = CInstrumentData::GetInstrumentID(*(void **)(v14 + 60));
      (*(void (__thiscall **)(int, signed int, int))(*(_DWORD *)v14 + 8))(v14, -1, v11);
      _RTC_CheckEsp(v7, v6);
    }
  }
}

void CSimpleExecutionStrategy::CancelAllOrders()
{
  unsigned __int8 v1; // al@3
  int v2; // edx@3
  int v3; // ecx@3
  int v4; // edx@10
  int v5; // ecx@10
  int v6; // eax@13
  char v8; // [sp+Ch] [bp-D8h]@1
  int i; // [sp+D0h] [bp-14h]@6
  int v10; // [sp+DCh] [bp-8h]@1

  memset(&v8, -858993460, 0xD8u);
  v10 = this;
  if ( *(_DWORD *)(this + 232) != *(_DWORD *)(this + 4) )
  {
    *(_DWORD *)(v10 + 232) = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(v10 + 104) = 0;
  }
  v1 = CTickMapping::IsPeriodEndingTick(*(_DWORD *)(*(_DWORD *)(v10 + 60) + 8), *(_DWORD *)(v10 + 4));
  v3 = v1;
  if ( !v1 )
  {
    v3 = v10;
    v2 = *(_DWORD *)(v10 + 96);
    if ( (unsigned int)v2 <= *(_DWORD *)(v10 + 100) )
    {
      *(_DWORD *)(v10 + 188) = 2;
      for ( i = *(_DWORD *)(v10 + 184) - 1; i >= 0; --i )
      {
        v2 = *(_DWORD *)(v10 + 4 * i + 168);
        if ( *(_DWORD *)(v2 + 324) )
        {
          v2 = *(_DWORD *)(v10 + 108);
          if ( (unsigned int)v2 >= *(_DWORD *)(v10 + 104) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v10 + 56) + 28))(
              *(_DWORD *)(v10 + 56),
              *(_DWORD *)(v10 + 4 * i + 168));
            _RTC_CheckEsp(v5, v4);
            ++*(_DWORD *)(v10 + 96);
            v2 = v10;
            ++*(_DWORD *)(v10 + 104);
          }
        }
      }
      v3 = *(_DWORD *)(v10 + 56);
      if ( !*(_DWORD *)(v3 + 48) )
      {
        v6 = CInstrumentData::GetInstrumentID(*(void **)(v10 + 60));
        (*(void (__thiscall **)(int, signed int, int))(*(_DWORD *)v10 + 8))(v10, -1, v6);
        _RTC_CheckEsp(v3, v2);
      }
    }
  }
  return _RTC_CheckEsp(v3, v2);
}

IExecutionStrategy * CreateSimpleExecutionStrategy(IOrderStatusReceiver * OrderStatusReceiver, ITrader & trader, CInstrumentData * instrumentdata, ILog & logger = DefaultLogger, int commmode = IOrderStatusReceiver::Signalling)
{
    v6 = CSimpleExecutionStrategy::CSimpleExecutionStrategy(v7, a1, a2, a3, a4, a5);
}


class IExecutionStrategy:public IOrderStatusReceiver
{
public:
	IExecutionStrategy(IOrderStatusReceiver * tradingstrategy, ITrader & trader, CInstrumentData * instrumentdata, ILog & logger = DefaultLogger, int commmode = Signalling);

	virtual ~IExecutionStrategy(){};
	virtual void LoadHistoryPosition(int position = 0, int ydposition = 0)
	{YdPosition = ydposition;Position = position;};
	virtual bool ReqOrderInsert(double limitprice,int adj_pos,long tick = LONG_MAX,double constrainprice = DBL_MAX) = 0;
	virtual bool CancelAllOrders() = 0;
	static const int WAITING = 0;
	static const int RUNNING = 1;
protected:
	int Position;
	int YdPosition; 
	ITrader & Trader;
	CInstrumentData * InstrumentData;
	double LastTradePrice;
	unsigned int LastTradeVolume;
	double Profit;
	double HiddenCost;
	unsigned int CancelNumber;
	unsigned int CancelNumberLimit;
	unsigned int CancelNumberPerTick;
	unsigned int CancelNumberPerTickLimit;
	unsigned int TotalOpenPosition;
	unsigned int TotalTradePosition;
	unsigned int Round;
	unsigned int WinningRound;
	int Status;
	IOrderStatusReceiver * TradingStrategy;
};


