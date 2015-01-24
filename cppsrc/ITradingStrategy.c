	ITradingStrategy(IMarketDataReader & md, ITrader & trader, const TThostFtdcDateType tradingday, const CTickMapping &tradingtime, const CTickMapping & opentime, 
		const string & name, ILog & logger = DefaultLogger,int commmode = Signalling);

ITradingStrategy::ITradingStrategy(IMarketDataReader & md, ITrader & trader, const TThostFtdcDateType tradingday, const CTickMapping &tradingtime, const CTickMapping & opentime, const string & name, ILog & logger = DefaultLogger,int commmode = Signalling)
{
    /*
    a2=md
    a3=trader
    a4=tradingday
    a5=tradingtime
    a6=opentime
    a7=name,
    a8=logger,
    a9=commode
    */
    IOrderStatusReceiver::IOrderStatusReceiver(this, a8, a9);
  }


int __thiscall IOrderStatusReceiver::IOrderStatusReceiver(void *this, int a2, int a3)
{
  int v3; // edx@1
  char v5; // [sp+Ch] [bp-CCh]@1
  void *v6; // [sp+D0h] [bp-8h]@1
  v6 = this;
  ITimeAction::ITimeAction(this);
  *(_DWORD *)v6 = &IOrderStatusReceiver::_vftable_;
}

