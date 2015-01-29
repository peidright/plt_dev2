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
  int v9; // edx@1
  char v11; // [sp+Ch] [bp-D8h]@1
  void *v12; // [sp+D0h] [bp-14h]@1
  int v13; // [sp+E0h] [bp-4h]@1
  int v14; // [sp+E4h] [bp+0h]@1

  memset(&v11, -858993460, 0xCCu);
  v12 = this;
  IOrderStatusReceiver::IOrderStatusReceiver(this, a8, a9);
  v13 = 0;
  *(_DWORD *)v12 = &ITradingStrategy::_vftable_;
  *((_DWORD *)v12 + 12) = a2;
  *((_DWORD *)v12 + 13) = a3;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    (char *)v12 + 56,
    Src);
  LOBYTE(v13) = 1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    (char *)v12 + 88,
    a7);
  *((_DWORD *)v12 + 30) = a5;
  *((_DWORD *)v12 + 31) = a6;
  return _RTC_CheckEsp((unsigned int)&v14 ^ __security_cookie, v9);
}


int __thiscall IOrderStatusReceiver::IOrderStatusReceiver(void *this, int a2, int a3)
{
  int v3; // edx@1
  char v5; // [sp+Ch] [bp-CCh]@1
  void *v6; // [sp+D0h] [bp-8h]@1

  memset(&v5, -858993460, 0xCCu);
  v6 = this;
  ITimeAction::ITimeAction(this);
  *(_DWORD *)v6 = &IOrderStatusReceiver::_vftable_;
  *((_DWORD *)v6 + 9) = a2;
  *((_DWORD *)v6 + 10) = a3;
  return _RTC_CheckEsp(a3, v3);
}

