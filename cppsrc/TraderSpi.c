signed int __cdecl ITrader::Execute();
signed int __cdecl ITrader::Join();
signed int __cdecl ITrader::Release();
int __thiscall CTraderSpi::Init(int this, const char *a2, const char *a3, const char *Str, const char *Source);
int __thiscall CTraderSpi::Execute(int this);
int __fastcall CTraderSpi::Release(int a1, int a2);
int __thiscall CTraderSpi::OnFrontConnected(int this);
int __thiscall CTraderSpi::ReqUserLogin(void *this);
int __thiscall CTraderSpi::ReqUserLogin(void *this, const char *Source, const char *a3);
int __thiscall CTraderSpi::ReqUserLogout(void *this);
int __fastcall CTraderSpi::OnRspUserLogin(CTraderSpi *this, int a2, struct CThostFtdcRspUserLoginField *a3, char *a4, int a5, bool a6);
int __fastcall CTraderSpi::UpdateOrderStatus(int this, int a2, struct CExeOrderStatus *a3);
int __thiscall ITimeAction::DoActionWithLock(char *this, __int32 a2, const char *a3);
int __thiscall IOrderStatusReceiver::GetCommunicationMode(int this);
int __thiscall IOrderStatusReceiver::SendOrderStatusUpdateEvent(IOrderStatusReceiver *this, const char *a2);

int __thiscall CTraderSpi::ReqOrderCancel(void *this, struct CExeOrderStatus *a2);
int __fastcall CTraderSpi::OnRspOrderAction(void *this, int a2, struct CThostFtdcInputOrderActionField *a3, char *a4, int a5, bool a6);
int __thiscall CTraderSpi::OnRtnOrder(CTraderSpi *this, struct CThostFtdcOrderField *a2);
int __thiscall CTraderSpi::OnRtnTrade(CTraderSpi *this, struct CThostFtdcTradeField *a2);
int __thiscall CTraderSpi::OnFrontDisconnected(int this, int a2);
signed int __stdcall CTraderSpi::OnHeartBeatWarning(int a2);
int __fastcall CTraderSpi::OnRspError(void *this, int a2, char *a3, int a4, bool a5);
int __fastcall CTraderSpi::IsErrorRspInfo(void *this, int edx0, char *a2);
bool __thiscall CTraderSpi::IsMyOrder(int this, struct CThostFtdcOrderField *a2);
bool __thiscall CTraderSpi::IsTradingOrder(void *this, struct CThostFtdcOrderField *a2);
int __thiscall CTraderSpi::Closeable(void *this, const char *Str, char a3, int a4);
int __thiscall CTraderSpi::AddTrackingOrder(void *this, struct CExeOrderStatus *a2);
int __thiscall CTraderSpi::UpdateTrackingOrder(void *this, struct CThostFtdcOrderField *Src);
int __thiscall CTraderSpi::UpdateTrackingOrder(void *this, struct CThostFtdcTradeField *a2);
int __cdecl CreateRealTraderInstance(const char *Str, const char *Source, bool a3, int a4);
int __cdecl CreateRealTraderInstance(int a1, char a2, int a3);
int __thiscall CExeOrderStatus::CExeOrderStatus(_DWORD); // weak
nt __thiscall IEventQueue::SendEvent(_DWORD, _DWORD, _DWORD, _DWORD); // weak
bool __cdecl IsFlowControl(int a1)
{
  int v2; // [sp+Ch] [bp-C4h]@1

  memset(&v2, -858993460, 0xC4u);
  return a1 == -2 || a1 == -3;
}

int __thiscall CTraderSpi::CTraderSpi(void *this, int a2)
{
  int v2; // edx@1
  char v4; // [sp+Ch] [bp-D8h]@1
  void *v5; // [sp+D0h] [bp-14h]@1
  int v6; // [sp+E0h] [bp-4h]@1
  int v7; // [sp+E4h] [bp+0h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = this;
  CThostFtdcTraderSpi::CThostFtdcTraderSpi(this);
  ITrader::ITrader((char *)v5 + 8, 1);
  v6 = 0;
  *(_DWORD *)v5 = &CTraderSpi::_vftable_;
  *((_DWORD *)v5 + 2) = &CTraderSpi::_vftable_;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>((char *)v5 + 64);
  LOBYTE(v6) = 1;
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>((char *)v5 + 192);
  LOBYTE(v6) = 2;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>((char *)v5 + 216);
  *((_DWORD *)v5 + 62) = a2;
  *((_DWORD *)v5 + 45) = 0;
  *((_DWORD *)v5 + 24) = 0;
  *((_DWORD *)v5 + 46) = 0;
  *((_DWORD *)v5 + 44) = 0;
  pthread_spin_init((char *)v5 + 188, 0);
  return _RTC_CheckEsp((unsigned int)&v7 ^ __security_cookie, v2);
}

signed int __stdcall CThostFtdcTraderSpi::OnRspUserLogout(struct CThostFtdcUserLogoutField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspUserPasswordUpdate(struct CThostFtdcUserPasswordUpdateField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspTradingAccountPasswordUpdate(struct CThostFtdcTradingAccountPasswordUpdateField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspParkedOrderInsert(struct CThostFtdcParkedOrderField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspParkedOrderAction(struct CThostFtdcParkedOrderActionField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQueryMaxOrderVolume(struct CThostFtdcQueryMaxOrderVolumeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspRemoveParkedOrder(struct CThostFtdcRemoveParkedOrderField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspRemoveParkedOrderAction(struct CThostFtdcRemoveParkedOrderActionField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryOrder(struct CThostFtdcOrderField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryTrade(struct CThostFtdcTradeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryInvestor(struct CThostFtdcInvestorField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryTradingCode(struct CThostFtdcTradingCodeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryInstrumentMarginRate(struct CThostFtdcInstrumentMarginRateField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryInstrumentCommissionRate(struct CThostFtdcInstrumentCommissionRateField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryExchange(struct CThostFtdcExchangeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001ABC) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryDepthMarketData(struct CThostFtdcDepthMarketDataField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001AE8) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQrySettlementInfo(struct CThostFtdcSettlementInfoField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001B14) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryTransferBank(struct CThostFtdcTransferBankField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryInvestorPositionDetail(struct CThostFtdcInvestorPositionDetailField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001B6C) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryNotice(struct CThostFtdcNoticeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQrySettlementInfoConfirm(struct CThostFtdcSettlementInfoConfirmField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryInvestorPositionCombineDetail(struct CThostFtdcInvestorPositionCombineDetailField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
  return -858993460;
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryCFMMCTradingAccountKey(struct CThostFtdcCFMMCTradingAccountKeyField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001C1C) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryEWarrantOffset(struct CThostFtdcEWarrantOffsetField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001C48) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryTransferSerial(struct CThostFtdcTransferSerialField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnErrRtnOrderInsert(struct CThostFtdcInputOrderField *a2, struct CThostFtdcRspInfoField *a3)
{
}

//----- (00001CA0) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnOrderAction(struct CThostFtdcOrderActionField *a2, struct CThostFtdcRspInfoField *a3)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRtnInstrumentStatus(struct CThostFtdcInstrumentStatusField *a2)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRtnTradingNotice(struct CThostFtdcTradingNoticeInfoField *a2)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRtnErrorConditionalOrder(struct CThostFtdcErrorConditionalOrderField *a2)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryContractBank(struct CThostFtdcContractBankField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryParkedOrder(struct CThostFtdcParkedOrderField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryParkedOrderAction(struct CThostFtdcParkedOrderActionField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

signed int __stdcall CThostFtdcTraderSpi::OnRspQryTradingNotice(struct CThostFtdcTradingNoticeField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

//----- (00001E00) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryBrokerTradingParams(struct CThostFtdcBrokerTradingParamsField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
  return -858993460;
}

//----- (00001E2C) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspQryBrokerTradingAlgos(struct CThostFtdcBrokerTradingAlgosField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
  return -858993460;
}

//----- (00001E58) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnFromBankToFutureByBank(struct CThostFtdcRspTransferField *a2)
{
  return -858993460;
}

//----- (00001E84) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnFromFutureToBankByBank(struct CThostFtdcRspTransferField *a2)
{
  return -858993460;
}

//----- (00001EB0) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByBank(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (00001EDC) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByBank(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (00001F08) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnFromBankToFutureByFuture(struct CThostFtdcRspTransferField *a2)
{
  return -858993460;
}

//----- (00001F34) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnFromFutureToBankByFuture(struct CThostFtdcRspTransferField *a2)
{
  return -858993460;
}

//----- (00001F60) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (00001F8C) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (00001FB8) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnQueryBankBalanceByFuture(struct CThostFtdcNotifyQueryAccountField *a2)
{
  return -858993460;
}

//----- (00001FE4) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnBankToFutureByFuture(struct CThostFtdcReqTransferField *a2, struct CThostFtdcRspInfoField *a3)
{
  return -858993460;
}

//----- (00002010) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnFutureToBankByFuture(struct CThostFtdcReqTransferField *a2, struct CThostFtdcRspInfoField *a3)
{
  return -858993460;
}

//----- (0000203C) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(struct CThostFtdcReqRepealField *a2, struct CThostFtdcRspInfoField *a3)
{
  return -858993460;
}

//----- (00002068) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(struct CThostFtdcReqRepealField *a2, struct CThostFtdcRspInfoField *a3)
{
  return -858993460;
}

//----- (00002094) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnErrRtnQueryBankBalanceByFuture(struct CThostFtdcReqQueryAccountField *a2, struct CThostFtdcRspInfoField *a3)
{
  return -858993460;
}

//----- (000020C0) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromBankToFutureByFuture(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (000020EC) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRtnRepealFromFutureToBankByFuture(struct CThostFtdcRspRepealField *a2)
{
  return -858993460;
}

//----- (00002118) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspFromBankToFutureByFuture(struct CThostFtdcReqTransferField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
  return -858993460;
}

//----- (00002144) --------------------------------------------------------
signed int __stdcall CThostFtdcTraderSpi::OnRspFromFutureToBankByFuture(struct CThostFtdcReqTransferField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
  return -858993460;
}


int __thiscall CTraderSpi::CTraderSpi(void *this, const char *a2, const char *a3, const char *Str, const char *Source, char a6, int a7)
{
  size_t v7; // eax@1
  void *v8; // eax@1
  int v9; // edx@1
  char v11; // [sp+Ch] [bp-E4h]@1
  void *v12; // [sp+10h] [bp-E0h]@1
  void *v13; // [sp+DCh] [bp-14h]@1
  int v14; // [sp+ECh] [bp-4h]@1
  int v15; // [sp+F0h] [bp+0h]@1

  memset(&v11, -858993460, 0xD8u);
  v13 = this;
  CThostFtdcTraderSpi::CThostFtdcTraderSpi(this);
  ITrader::ITrader((char *)v13 + 8, 1);
  v14 = 0;
  *(_DWORD *)v13 = &CTraderSpi::_vftable_;
  *((_DWORD *)v13 + 2) = &CTraderSpi::_vftable_;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>((char *)v13 + 64);
  LOBYTE(v14) = 1;
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>((char *)v13 + 192);
  LOBYTE(v14) = 2;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>((char *)v13 + 216);
  LOBYTE(v14) = 3;
  *((_BYTE *)v13 + 244) = a6;
  *((_DWORD *)v13 + 62) = a7;
  v7 = strlen(Str);
  v8 = operator new__(v7 + 1);
  v12 = v8;
  *((_DWORD *)v13 + 24) = v8;
  strcpy(*((char **)v13 + 24), Str);
  strcpy((char *)v13 + 100, Source);
  strcpy((char *)v13 + 111, a2);
  strcpy((char *)v13 + 124, a3);
  *((_DWORD *)v13 + 45) = 0;
  *((_DWORD *)v13 + 46) = 0;
  *((_DWORD *)v13 + 44) = 0;
  *((_DWORD *)v13 + 42) = 0;
  *((_DWORD *)v13 + 43) = 0;
  pthread_spin_init((char *)v13 + 188, 0);
  return _RTC_CheckEsp((unsigned int)&v15 ^ __security_cookie, v9);
}

int __thiscall CTraderSpi::_CTraderSpi(void *this)
{
  int v1; // edx@15
  int v2; // ST04_4@15
  int v4; // [sp+Ch] [bp-23Ch]@1
  int v5; // [sp+10h] [bp-238h]@2
  char v6; // [sp+18h] [bp-230h]@3
  char v7; // [sp+2Fh] [bp-219h]@2
  char v8; // [sp+38h] [bp-210h]@2
  void *v9; // [sp+4Ch] [bp-1FCh]@3
  void *v10; // [sp+58h] [bp-1F0h]@5
  char v11; // [sp+64h] [bp-1E4h]@8
  char v12; // [sp+7Bh] [bp-1CDh]@7
  char v13; // [sp+84h] [bp-1C4h]@7
  void *v14; // [sp+98h] [bp-1B0h]@8
  char v15; // [sp+A4h] [bp-1A4h]@14
  char v16; // [sp+BBh] [bp-18Dh]@10
  char v17; // [sp+C4h] [bp-184h]@10
  char v18; // [sp+D8h] [bp-170h]@13
  char v19; // [sp+EFh] [bp-159h]@12
  char v20; // [sp+F8h] [bp-150h]@12
  void *v21; // [sp+10Ch] [bp-13Ch]@13
  char v22; // [sp+1D8h] [bp-70h]@11
  int v23; // [sp+1ECh] [bp-5Ch]@11
  char v24; // [sp+1F8h] [bp-50h]@9
  char v25; // [sp+20Ch] [bp-3Ch]@6
  char v26; // [sp+220h] [bp-28h]@1
  void *v27; // [sp+234h] [bp-14h]@1
  int v28; // [sp+244h] [bp-4h]@1
  int v29; // [sp+248h] [bp+0h]@15

  memset(&v4, -858993460, 0x230u);
  v27 = this;
  *(_DWORD *)this = &CTraderSpi::_vftable_;
  *((_DWORD *)v27 + 2) = &CTraderSpi::_vftable_;
  v28 = 3;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::begin(
    (int)((char *)v27 + 64),
    (std::_Iterator_base *)&v26);
  LOBYTE(v28) = 4;
  while ( 1 )
  {
    v5 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::end(
           (int)((char *)v27 + 64),
           (std::_Iterator_base *)&v8);
    v4 = v5;
    LOBYTE(v28) = 5;
    v7 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::const_iterator::operator__(
           &v26,
           v5);
    LOBYTE(v28) = 4;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v8);
    if ( !v7 )
      break;
    v9 = *(void **)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::operator_>(&v26)
                  + 32);
    operator delete__(v9);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::operator__(
      (struct std::_Iterator_base *)&v26,
      &v6,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v6);
  }
  LOBYTE(v28) = 3;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v26);
  if ( *((_DWORD *)v27 + 24) )
  {
    v10 = (void *)*((_DWORD *)v27 + 24);
    operator delete__(v10);
  }
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::begin(
    (int)((char *)v27 + 192),
    (std::_Iterator_base *)&v25);
  LOBYTE(v28) = 6;
  while ( 1 )
  {
    v5 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::end(
           (int)((char *)v27 + 192),
           (std::_Iterator_base *)&v13);
    v4 = v5;
    LOBYTE(v28) = 7;
    v12 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::operator__(&v25, v5);
    LOBYTE(v28) = 6;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v13);
    if ( !v12 )
      break;
    v14 = *(void **)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v25);
    operator delete(v14);
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator__(
      (struct std::_Iterator_base *)&v25,
      &v11,
      0);
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v11);
  }
  LOBYTE(v28) = 3;
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v25);
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::begin(
    (int)((char *)v27 + 216),
    (std::_Iterator_base *)&v24);
  LOBYTE(v28) = 8;
  while ( 1 )
  {
    v5 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::end(
           (int)((char *)v27 + 216),
           (std::_Iterator_base *)&v17);
    v4 = v5;
    LOBYTE(v28) = 9;
    v16 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::const_iterator::operator__(
            &v24,
            v5);
    LOBYTE(v28) = 8;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::iterator::_iterator((std::_Iterator_base *)&v17);
    if ( !v16 )
      break;
    v23 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::iterator::operator_>(&v24)
        + 32;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::begin(v23, (std::_Iterator_base *)&v22);
    LOBYTE(v28) = 10;
    while ( 1 )
    {
      v5 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::end(v23, (std::_Iterator_base *)&v20);
      v4 = v5;
      LOBYTE(v28) = 11;
      v19 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::operator__(&v22, v5);
      LOBYTE(v28) = 10;
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v20);
      if ( !v19 )
        break;
      v21 = *(void **)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v22);
      operator delete(v21);
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator__(
        (struct std::_Iterator_base *)&v22,
        &v18,
        0);
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v18);
    }
    LOBYTE(v28) = 8;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v22);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::iterator::operator__(
      (struct std::_Iterator_base *)&v24,
      &v15,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::iterator::_iterator((std::_Iterator_base *)&v15);
  }
  LOBYTE(v28) = 3;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>_0>>::iterator::_iterator((std::_Iterator_base *)&v24);
  pthread_spin_destroy((char *)v27 + 188);
  LOBYTE(v28) = 2;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::_map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>((int)((char *)v27 + 216));
  LOBYTE(v28) = 1;
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>((char *)v27 + 192);
  LOBYTE(v28) = 0;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>::_map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>((int)((char *)v27 + 64));
  v28 = -1;
  ITrader::_ITrader((ITimeAction *)((char *)v27 + 8));
  v2 = v1;
  _RTC_CheckStackVars(&v29, &_LN38);
  return _RTC_CheckEsp((unsigned int)&v29 ^ __security_cookie, v2);
}
int __cdecl CTraderSpi::FormatString(int a1, char a2, int a3)
{
  int v3; // eax@4
  int v4; // eax@6
  int v5; // eax@10
  int v6; // eax@14
  char *v7; // ST0C_4@17
  char *v8; // ST08_4@17
  int v9; // ST04_4@17
  int v10; // eax@17
  int v11; // edx@20
  int v12; // ecx@20
  int v14; // [sp+Ch] [bp-1D4h]@1
  char v15; // [sp+14h] [bp-1CCh]@1
  int v16; // [sp+3Ch] [bp-1A4h]@3
  int v17; // [sp+48h] [bp-198h]@5
  int v18; // [sp+54h] [bp-18Ch]@7
  int v19; // [sp+60h] [bp-180h]@19
  int v20; // [sp+6Ch] [bp-174h]@19
  void *v21; // [sp+78h] [bp-168h]@16
  char v22; // [sp+144h] [bp-9Ch]@6
  char v23; // [sp+16Ch] [bp-74h]@4
  char *Str; // [sp+194h] [bp-4Ch]@12
  char *Source; // [sp+1A0h] [bp-40h]@10
  int v26; // [sp+1ACh] [bp-34h]@1
  char v27; // [sp+1B8h] [bp-28h]@1
  unsigned int v28; // [sp+1D0h] [bp-10h]@1
  int v29; // [sp+1DCh] [bp-4h]@1
  int v30; // [sp+1E0h] [bp+0h]@1

  memset(&v14, -858993460, 0x1C8u);
  v28 = (unsigned int)&v30 ^ __security_cookie;
  std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v27);
  v29 = 0;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v15,
    ",;=");
  LOBYTE(v29) = 1;
  SplitString(a1, &v15, &v27);
  LOBYTE(v29) = 0;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v15);
  v26 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::size((int)&v27);
  if ( v26 >= 3 || v26 <= 5 )
  {
    v3 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
           (int)&v27,
           1u);
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
      (std::_String_base *)&v23,
      v3);
    LOBYTE(v29) = 2;
    if ( (unsigned int)std::basic_string<char_std::char_traits<char>_std::allocator<char>>::length((int)&v23) < 0xD )
    {
      v4 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
             (int)&v27,
             2u);
      std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
        (std::_String_base *)&v22,
        v4);
      LOBYTE(v29) = 3;
      if ( (unsigned int)std::basic_string<char_std::char_traits<char>_std::allocator<char>>::length((int)&v22) < 0x29 )
      {
        if ( a2 )
        {
          if ( v26 <= 4 )
          {
            Source = "3090";
          }
          else
          {
            v5 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
                   (int)&v27,
                   4u);
            Source = (char *)std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v5);
          }
          Str = "tcp://asp-sim2-front1.financial-trading-platform.com:26205";
        }
        else
        {
          Source = "16333";
          if ( v26 == 3 )
          {
            v6 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
                   (int)&v27,
                   3u);
            Str = (char *)std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v6);
          }
          else
          {
            Str = "tcp://cdtelecom1.hxqh168.com:41205";
          }
        }
        v21 = operator new(0x100u);
        LOBYTE(v29) = 4;
        if ( v21 )
        {
          v7 = Source;
          v8 = Str;
          v9 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)&v22);
          v10 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)&v23);
          v14 = CTraderSpi::CTraderSpi(v21, (const char *)v10, (const char *)v9, v8, v7, a2, a3);
        }
        else
        {
          v14 = 0;
        }
        v20 = v14;
        v19 = v14;
        LOBYTE(v29) = 2;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v22);
        LOBYTE(v29) = 0;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v23);
        v29 = -1;
        std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::_vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>((int)&v27);
      }
      else
      {
        v18 = 0;
        LOBYTE(v29) = 2;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v22);
        LOBYTE(v29) = 0;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v23);
        v29 = -1;
        std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::_vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>((int)&v27);
      }
    }
    else
    {
      v17 = 0;
      LOBYTE(v29) = 0;
      std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v23);
      v29 = -1;
      std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::_vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>((int)&v27);
    }
  }
  else
  {
    v16 = 0;
    v29 = -1;
    std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::_vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>((int)&v27);
  }
}

int __thiscall CTraderSpi::Init(int this, const char *a2, const char *a3, const char *Str, const char *Source)
{
  size_t v5; // eax@3
  void *v6; // eax@3
  int v7; // edx@3
  int v8; // ecx@3
  char v10; // [sp+Ch] [bp-E4h]@1
  void *v11; // [sp+10h] [bp-E0h]@2
  void *v12; // [sp+1Ch] [bp-D4h]@3
  int v13; // [sp+E8h] [bp-8h]@1

  memset(&v10, -858993460, 0xE4u);
  v13 = this;
  if ( *(_DWORD *)(this + 96) )
  {
    v11 = *(void **)(v13 + 96);
    operator delete__(v11);
  }
  v5 = strlen(Str);
  v6 = operator new__(v5 + 1);
  v12 = v6;
  *(_DWORD *)(v13 + 96) = v6;
  strcpy(*(char **)(v13 + 96), Str);
  strcpy((char *)(v13 + 100), Source);
  strcpy((char *)(v13 + 111), a2);
  strcpy((char *)(v13 + 124), a3);
  *(_DWORD *)(v13 + 180) = 0;
  *(_DWORD *)(v13 + 184) = 0;
  *(_DWORD *)(v13 + 176) = 0;
  *(_DWORD *)(v13 + 168) = 0;
  *(_DWORD *)(v13 + 172) = 0;
  return _RTC_CheckEsp(v8, v7);
}

int __thiscall CTraderSpi::Execute(int this)
{
  int v1; // edx@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // edx@1
  int v6; // ecx@1
  int v7; // edx@1
  int v8; // ecx@1
  int v9; // edx@1
  int v10; // ecx@1
  int v11; // edx@1
  int v12; // ecx@1
  char v14; // [sp+Ch] [bp-CCh]@1
  int v15; // [sp+D0h] [bp-8h]@1

  memset(&v14, -858993460, 0xCCu);
  v15 = this;
  *(_DWORD *)(this + 176) = 1;
  *(_DWORD *)(v15 + 84) = CThostFtdcTraderApi::CreateFtdcTraderApi((const char *)(v15 + 103), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v15 + 84) + 20))(*(_DWORD *)(v15 + 84), v15 - 8);
  _RTC_CheckEsp(v2, v1);
  (*(void (__thiscall **)(_DWORD, signed int))(**(_DWORD **)(v15 + 84) + 28))(*(_DWORD *)(v15 + 84), 2);
  _RTC_CheckEsp(v4, v3);
  (*(void (__thiscall **)(_DWORD, signed int))(**(_DWORD **)(v15 + 84) + 24))(*(_DWORD *)(v15 + 84), 2);
  _RTC_CheckEsp(v6, v5);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v15 + 84) + 16))(*(_DWORD *)(v15 + 84), *(_DWORD *)(v15 + 88));
  _RTC_CheckEsp(v8, v7);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v15 + 84) + 4))(*(_DWORD *)(v15 + 84));
  _RTC_CheckEsp(v10, v9);
  return _RTC_CheckEsp(v12, v11);
}
// 28DC0: using guessed type int __fastcall _RTC_CheckEsp(_DWORD, _DWORD);

//----- (00003B44) --------------------------------------------------------
int __fastcall CTraderSpi::Release(int a1, int a2)
{
  char v3; // [sp+Ch] [bp-CCh]@1
  int v4; // [sp+D0h] [bp-8h]@1

  memset(&v3, -858993460, 0xCCu);
  v4 = a1;
  if ( *(_DWORD *)(a1 + 84) && *(_DWORD *)(v4 + 176) )
  {
    CTraderSpi::ReqUserLogout((void *)(v4 - 8));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 84) + 20))(*(_DWORD *)(v4 + 84), 0);
    (***(void (__thiscall ****)(_DWORD))(v4 + 84))(*(_DWORD *)(v4 + 84));
  }
}

int __thiscall CTraderSpi::OnFrontConnected(int this)
{
  int v1; // edx@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-CCh]@1
  CTraderSpi *v7; // [sp+D0h] [bp-8h]@1

  memset(&v6, -858993460, 0xCCu);
  v7 = (CTraderSpi *)this;
  *(_DWORD *)(this + 184) = 3;
  CTraderSpi::ReqUserLogin((void *)v7);
  (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v7 + 62) + 4))(
    *((_DWORD *)v7 + 62),
    "(N)%s交易线程连接成功!\n",
    (char *)v7 + 111);
}

int __thiscall CTraderSpi::ReqUserLogin(void *this)
{
  int v1; // edx@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-1A0h]@1
  int v7; // [sp+D0h] [bp-DCh]@1
  char Dst; // [sp+DCh] [bp-D0h]@1
  char Dest; // [sp+E5h] [bp-C7h]@1
  char v10; // [sp+F0h] [bp-BCh]@1
  char v11; // [sp+100h] [bp-ACh]@1
  char v12; // [sp+129h] [bp-83h]@1
  void *v13; // [sp+1A0h] [bp-Ch]@1
  unsigned int v14; // [sp+1A8h] [bp-4h]@1
  int v15; // [sp+1ACh] [bp+0h]@1

  memset(&v6, -858993460, 0x1A0u);
  v14 = (unsigned int)&v15 ^ __security_cookie;
  v13 = this;
  memset(&Dst, 0, 0xBCu);
  strcpy(&Dest, (const char *)v13 + 100);
  strcpy(&v10, (const char *)v13 + 111);
  strcpy(&v11, (const char *)v13 + 124);
  strcpy(&v12, "FMSP1111HX");
  ++*((_DWORD *)v13 + 45);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v13 + 23) + 32))(
    *((_DWORD *)v13 + 23),
    &Dst,
    *((_DWORD *)v13 + 45));
  v7 = _RTC_CheckEsp(v2, v1);
}

int __thiscall CTraderSpi::ReqUserLogin(void *this, const char *Source, const char *a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // edx@1
  int v6; // ecx@1
  char v8; // [sp+Ch] [bp-1A0h]@1
  int v9; // [sp+D0h] [bp-DCh]@1
  char Dst; // [sp+DCh] [bp-D0h]@1
  char Dest; // [sp+E5h] [bp-C7h]@1
  char v12; // [sp+F0h] [bp-BCh]@1
  char v13; // [sp+100h] [bp-ACh]@1
  char v14; // [sp+129h] [bp-83h]@1
  void *v15; // [sp+1A0h] [bp-Ch]@1
  unsigned int v16; // [sp+1A8h] [bp-4h]@1
  int v17; // [sp+1ACh] [bp+0h]@1

  memset(&v8, -858993460, 0x1A0u);
  v16 = (unsigned int)&v17 ^ __security_cookie;
  v15 = this;
  memset(&Dst, 0, 0xBCu);
  strcpy((char *)v15 + 111, Source);
  strcpy((char *)v15 + 124, a3);
  strcpy(&Dest, (const char *)v15 + 100);
  strcpy(&v12, (const char *)v15 + 111);
  strcpy(&v13, (const char *)v15 + 124);
  strcpy(&v14, "FMSP1111HX");
  ++*((_DWORD *)v15 + 45);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v15 + 23) + 32))(
    *((_DWORD *)v15 + 23),
    &Dst,
    *((_DWORD *)v15 + 45));
  v9 = _RTC_CheckEsp(v4, v3);
}
int __thiscall CTraderSpi::ReqUserLogout(void *this)
{
  int v1; // edx@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-100h]@1
  int v7; // [sp+D0h] [bp-3Ch]@1
  char Dst; // [sp+DCh] [bp-30h]@1
  char Dest; // [sp+E7h] [bp-25h]@1
  void *v10; // [sp+100h] [bp-Ch]@1
  unsigned int v11; // [sp+108h] [bp-4h]@1
  int v12; // [sp+10Ch] [bp+0h]@1

  memset(&v6, -858993460, 0x100u);
  v11 = (unsigned int)&v12 ^ __security_cookie;
  v10 = this;
  memset(&Dst, 0, 0x1Bu);
  strcpy(&Dst, (const char *)v10 + 100);
  strcpy(&Dest, (const char *)v10 + 111);
  ++*((_DWORD *)v10 + 45);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v10 + 23) + 36))(
    *((_DWORD *)v10 + 23),
    &Dst,
    *((_DWORD *)v10 + 45));
}

int __fastcall CTraderSpi::OnRspUserLogin(CTraderSpi *this, int a2, struct CThostFtdcRspUserLoginField *a3, char *a4, int a5, bool a6)
{
  int v6; // edx@3
  int v7; // ecx@3
  int v8; // edx@4
  int v9; // ecx@4
  int v10; // edx@5
  int v11; // ecx@5
  const char *v12; // eax@5
  int v13; // edx@6
  int v14; // ecx@6
  int v15; // edx@10
  int v16; // ecx@10
  int v17; // edx@13
  int v18; // ecx@13
  unsigned int v20; // [sp-4h] [bp-13Ch]@1
  char v21; // [sp+Ch] [bp-12Ch]@1
  char v22; // [sp+D0h] [bp-68h]@8
  char v23; // [sp+F8h] [bp-40h]@5
  CTraderSpi *v24; // [sp+120h] [bp-18h]@1
  unsigned int v25; // [sp+128h] [bp-10h]@1
  int v26; // [sp+134h] [bp-4h]@5
  int v27; // [sp+138h] [bp+0h]@1

  memset(&v21, -858993460, 0x120u);
  v25 = (unsigned int)&v27 ^ __security_cookie;
  v20 = (unsigned int)&v27 ^ __security_cookie;
  v24 = this;
  if ( a6 && !(unsigned __int8)CTraderSpi::IsErrorRspInfo((void *)v24, a2, a4) )
  {
    *((_DWORD *)v24 + 42) = *((_DWORD *)a3 + 22);
    *((_DWORD *)v24 + 43) = *((_DWORD *)a3 + 23);
    *((_DWORD *)v24 + 44) = atoi((const char *)a3 + 96);
    ++*((_DWORD *)v24 + 44);
    (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v24 + 62) + 4))(
      *((_DWORD *)v24 + 62),
      "(N)%s交易线程登录成功！\n",
      (char *)v24 + 111);
    _RTC_CheckEsp(v7, v6);
    *((_DWORD *)v24 + 46) = 4;
    if ( !_CTraderSpi::OnRspUserLogin_::_2_::hasQryInstrument )
    {
      _CTraderSpi::OnRspUserLogin_::_2_::hasQryInstrument = 1;
      CTraderSpi::ReqQryInstrument((void *)v24, &_string_);
      Sleep(0x5DCu);
      _RTC_CheckEsp(v9, v8);
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v24 + 23) + 12))(*((_DWORD *)v24 + 23));
    v12 = (const char *)_RTC_CheckEsp(v11, v10);
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
      &v23,
      v12);
    v26 = 0;
    if ( (unsigned __int8)std::operator>_<char_std::char_traits<char>_std::allocator<char>>(&v23, (int)&ExpireDay) )
    {
      (*(void (__cdecl **)(_DWORD, _UNKNOWN *))(**((_DWORD **)v24 + 62) + 4))(*((_DWORD *)v24 + 62), &_string_);
      _RTC_CheckEsp(v14, v13);
      exit(1);
    }
    GetToday(&v22);
    LOBYTE(v26) = 1;
    if ( !*((_BYTE *)v24 + 244)
      && (unsigned __int8)std::operator__<char_std::char_traits<char>_std::allocator<char>>(&v22, (int)&v23) )
    {
      (*(void (__cdecl **)(_DWORD, _UNKNOWN *))(**((_DWORD **)v24 + 62) + 4))(*((_DWORD *)v24 + 62), &_string_);
      _RTC_CheckEsp(v16, v15);
      exit(1);
    }
    CTraderSpi::ReqSettlementInfoConfirm((void *)v24);
    LOBYTE(v26) = 0;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v22);
    v26 = -1;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v23);
  }
}


int __thiscall CTraderSpi::ReqSettlementInfoConfirm(void *this)
{
  int v1; // edx@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-110h]@1
  int v7; // [sp+D0h] [bp-4Ch]@1
  char Dst; // [sp+DCh] [bp-40h]@1
  char Dest; // [sp+E7h] [bp-35h]@1
  void *v10; // [sp+110h] [bp-Ch]@1
  unsigned int v11; // [sp+118h] [bp-4h]@1
  int v12; // [sp+11Ch] [bp+0h]@1

  memset(&v6, -858993460, 0x110u);
  v11 = (unsigned int)&v12 ^ __security_cookie;
  v10 = this;
  memset(&Dst, 0, 0x2Au);
  strcpy(&Dst, (const char *)v10 + 100);
  strcpy(&Dest, (const char *)v10 + 111);
  ++*((_DWORD *)v10 + 45);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v10 + 23) + 68))(
    *((_DWORD *)v10 + 23),
    &Dst,
    *((_DWORD *)v10 + 45));
}
signed int __stdcall CTraderSpi::OnRspSettlementInfoConfirm(struct CThostFtdcSettlementInfoConfirmField *a2, struct CThostFtdcRspInfoField *a3, int a4, bool a5)
{
}

int __thiscall CTraderSpi::ReqQryInstrument(void *this, const char *Source)
{
  int v2; // edx@4
  int v3; // ecx@4
  int v4; // edx@6
  int v5; // ecx@6
  int v6; // edx@6
  int v7; // ecx@6
  int v8; // edx@5
  int v9; // ecx@5
  char v11; // [sp+Ch] [bp-14Ch]@1
  int v12; // [sp+D0h] [bp-88h]@4
  char Dst; // [sp+DCh] [bp-7Ch]@1
  void *v14; // [sp+14Ch] [bp-Ch]@1
  unsigned int v15; // [sp+154h] [bp-4h]@1
  int v16; // [sp+158h] [bp+0h]@1

  memset(&v11, -858993460, 0x14Cu);
  v15 = (unsigned int)&v16 ^ __security_cookie;
  v14 = this;
  memset(&Dst, 0, 0x66u);
  if ( Source )
    strcpy(&Dst, Source);
  else
    Dst = 0;
  while ( 1 )
  {
    ++*((_DWORD *)v14 + 45);
    (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v14 + 23) + 116))(
      *((_DWORD *)v14 + 23),
      &Dst,
      *((_DWORD *)v14 + 45));
    v12 = _RTC_CheckEsp(v3, v2);
    if ( !IsFlowControl(v12) )
      break;
    (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v14 + 62) + 4))(
      *((_DWORD *)v14 + 62),
      (const char *)&_string_,
      (char *)v14 + 111);
    Sleep(0x3E8u);
  }
}

int __thiscall CTraderSpi::AddInstrument(CTraderSpi *this, const char *Str)
{
  int v2; // edx@1
  int v3; // eax@2
  int v5; // [sp+Ch] [bp-154h]@1
  int v6; // [sp+10h] [bp-150h]@2
  bool v7; // [sp+1Bh] [bp-145h]@1
  char v8; // [sp+24h] [bp-13Ch]@1
  void *v9; // [sp+4Ch] [bp-114h]@2
  char v10; // [sp+58h] [bp-108h]@2
  void *Dst; // [sp+140h] [bp-20h]@2
  CTraderSpi *v12; // [sp+14Ch] [bp-14h]@1
  int v13; // [sp+15Ch] [bp-4h]@1
  int v14; // [sp+160h] [bp+0h]@4

  memset(&v5, -858993460, 0x148u);
  v12 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v8,
    Str);
  v13 = 0;
  v7 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::count(
         (int)&InstrumentInfo,
         (int)&v8) == 0;
  v13 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v8);
  v2 = v7;
  if ( v7 )
  {
    v9 = operator new(0xE8u);
    Dst = v9;
    memset(v9, 0, 0xE8u);
    v6 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
           &v10,
           Str);
    v5 = v6;
    v13 = 1;
    v3 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>>::operator__(
           (int)&InstrumentInfo,
           v6);
    *(_DWORD *)v3 = Dst;
    v13 = -1;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v10);
    if ( *((_DWORD *)v12 + 46) == 4 )
      CTraderSpi::ReqQryInstrument((void *)v12, Str);
  }
  return _RTC_CheckEsp((unsigned int)&v14 ^ __security_cookie, v2);
}

int __cdecl CTraderSpi::GetInstrumentInfo(char a1)
{
  int v1; // edx@2
  int v2; // ST04_4@4
  int v4; // [sp+Ch] [bp-12Ch]@1
  int v5; // [sp+10h] [bp-128h]@1
  char v6; // [sp+1Bh] [bp-11Dh]@1
  char v7; // [sp+24h] [bp-114h]@1
  int v8; // [sp+38h] [bp-100h]@2
  int v9; // [sp+44h] [bp-F4h]@3
  char v10; // [sp+11Ch] [bp-1Ch]@1
  int v11; // [sp+134h] [bp-4h]@1
  int v12; // [sp+138h] [bp+0h]@4

  memset(&v4, -858993460, 0x120u);
  v11 = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::find(
    (int)&InstrumentInfo,
    &v10,
    (int)&a1);
  LOBYTE(v11) = 1;
  v5 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::end(
         (int)&InstrumentInfo,
         (std::_Iterator_base *)&v7);
  v4 = v5;
  LOBYTE(v11) = 2;
  v6 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::const_iterator::operator__(
         &v10,
         v5);
  LOBYTE(v11) = 1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v7);
  if ( v6 )
  {
    v8 = *(_DWORD *)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::operator_>(&v10)
                   + 32);
    LOBYTE(v11) = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v10);
    v11 = -1;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&a1);
  }
  else
  {
    v9 = 0;
    LOBYTE(v11) = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v10);
    v11 = -1;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&a1);
  }
  v2 = v1;
  _RTC_CheckStackVars(&v12, &_LN12_0);
  return _RTC_CheckEsp((unsigned int)&v12 ^ __security_cookie, v2);
}

int __fastcall CTraderSpi::OnRspQryInstrument(CTraderSpi *this, int a2, const char *Src, char *a4, int a5, bool a6)
{
  int v6; // edx@1
  int v7; // eax@4
  int v8; // ST08_4@6
  int v10; // [sp+Ch] [bp-17Ch]@1
  int v11; // [sp+10h] [bp-178h]@2
  char v12; // [sp+18h] [bp-170h]@2
  char v13; // [sp+43h] [bp-145h]@2
  char v14; // [sp+4Ch] [bp-13Ch]@2
  void *v15; // [sp+60h] [bp-128h]@4
  char v16; // [sp+6Ch] [bp-11Ch]@4
  char v17; // [sp+154h] [bp-34h]@2
  void *Dst; // [sp+168h] [bp-20h]@3
  CTraderSpi *v19; // [sp+174h] [bp-14h]@1
  int v20; // [sp+184h] [bp-4h]@2
  int v21; // [sp+188h] [bp+0h]@6

  memset(&v10, -858993460, 0x170u);
  v19 = this;
  if ( !(unsigned __int8)CTraderSpi::IsErrorRspInfo((void *)this, a2, a4) )
  {
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
      &v12,
      Src);
    v20 = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::find(
      (int)&InstrumentInfo,
      &v17,
      (int)&v12);
    LOBYTE(v20) = 2;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v12);
    v11 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::end(
            (int)&InstrumentInfo,
            (std::_Iterator_base *)&v14);
    v10 = v11;
    LOBYTE(v20) = 3;
    v13 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::const_iterator::operator__(
            &v17,
            v11);
    LOBYTE(v20) = 2;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v14);
    if ( v13 )
    {
      Dst = *(void **)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::operator_>(&v17)
                     + 32);
    }
    else
    {
      v15 = operator new(0xE8u);
      Dst = v15;
      v11 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
              &v16,
              Src);
      v10 = v11;
      LOBYTE(v20) = 4;
      v7 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>>::operator__(
             (int)&InstrumentInfo,
             v11);
      *(_DWORD *)v7 = Dst;
      LOBYTE(v20) = 2;
      std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v16);
    }
    memcpy(Dst, Src, 0xE8u);
    v20 = -1;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v17);
  }
  v8 = v6;
}

int __thiscall CTraderSpi::ReqQryTradingAccount(void *this)
{
  int v1; // edx@2
  int v2; // ecx@2
  int v3; // edx@4
  int v4; // ecx@4
  int v5; // edx@4
  int v6; // ecx@4
  int v7; // edx@3
  int v8; // ecx@3
  char v10; // [sp+Ch] [bp-FCh]@1
  int v11; // [sp+D0h] [bp-38h]@2
  char Dst; // [sp+DCh] [bp-2Ch]@1
  char Dest; // [sp+E7h] [bp-21h]@1
  void *v14; // [sp+FCh] [bp-Ch]@1
  unsigned int v15; // [sp+104h] [bp-4h]@1
  int v16; // [sp+108h] [bp+0h]@1

  memset(&v10, -858993460, 0xFCu);
  v15 = (unsigned int)&v16 ^ __security_cookie;
  v14 = this;
  memset(&Dst, 0, 0x18u);
  strcpy(&Dst, (const char *)v14 + 100);
  strcpy(&Dest, (const char *)v14 + 111);
  while ( 1 )
  {
    ++*((_DWORD *)v14 + 45);
    (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v14 + 23) + 92))(
      *((_DWORD *)v14 + 23),
      &Dst,
      *((_DWORD *)v14 + 45));
    v11 = _RTC_CheckEsp(v2, v1);
    if ( !IsFlowControl(v11) )
      break;
    (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v14 + 62) + 4))(
      *((_DWORD *)v14 + 62),
      (const char *)&_string_,
      (char *)v14 + 111);
    _RTC_CheckEsp(v4, v3);
    Sleep(0x3E8u);
    _RTC_CheckEsp(v6, v5);
  }
}

int __fastcall CTraderSpi::OnRspQryTradingAccount(CTraderSpi *this, int a2, struct CThostFtdcTradingAccountField *a3, char *a4, int a5, bool a6)
{
  char v7; // [sp+Ch] [bp-CCh]@1
  CTraderSpi *v8; // [sp+D0h] [bp-8h]@1

  memset(&v7, -858993460, 0xCCu);
  v8 = this;
  if ( a6 )
    CTraderSpi::IsErrorRspInfo((void *)v8, a2, a4);
  return _RTC_CheckEsp(this, a2);
}

int __thiscall CTraderSpi::ReqQryInvestorPosition(void *this, const char *Source)
{
  int v2; // edx@3
  int v3; // ecx@3
  int v4; // edx@5
  int v5; // ecx@5
  int v6; // edx@5
  int v7; // ecx@5
  int v8; // edx@4
  int v9; // ecx@4
  char v11; // [sp+Ch] [bp-11Ch]@1
  int v12; // [sp+D0h] [bp-58h]@3
  char Dst; // [sp+DCh] [bp-4Ch]@1
  char Dest; // [sp+E7h] [bp-41h]@1
  char v15; // [sp+F4h] [bp-34h]@2
  void *v16; // [sp+11Ch] [bp-Ch]@1
  unsigned int v17; // [sp+124h] [bp-4h]@1
  int v18; // [sp+128h] [bp+0h]@1

  memset(&v11, -858993460, 0x11Cu);
  v17 = (unsigned int)&v18 ^ __security_cookie;
  v16 = this;
  memset(&Dst, 0, 0x37u);
  strcpy(&Dst, (const char *)v16 + 100);
  strcpy(&Dest, (const char *)v16 + 111);
  if ( Source )
    strcpy(&v15, Source);
  while ( 1 )
  {
    ++*((_DWORD *)v16 + 45);
    (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v16 + 23) + 88))(
      *((_DWORD *)v16 + 23),
      &Dst,
      *((_DWORD *)v16 + 45));
    v12 = _RTC_CheckEsp(v3, v2);
    if ( !IsFlowControl(v12) )
      break;
    (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v16 + 62) + 4))(
      *((_DWORD *)v16 + 62),
      (const char *)&_string_,
      (char *)v16 + 111);
    _RTC_CheckEsp(v5, v4);
    Sleep(0x3E8u);
    _RTC_CheckEsp(v7, v6);
  }
}

int __thiscall CTraderSpi::UpdatePosition(void *this, const char *Src)
{
  int v2; // eax@3
  int v3; // edx@12
  int v4; // ST08_4@12
  int v6; // [sp+Ch] [bp-194h]@1
  int v7; // [sp+10h] [bp-190h]@1
  char v8; // [sp+18h] [bp-188h]@1
  char v9; // [sp+43h] [bp-15Dh]@1
  char v10; // [sp+4Ch] [bp-154h]@1
  void *v11; // [sp+60h] [bp-140h]@3
  char v12; // [sp+6Ch] [bp-134h]@3
  int v13; // [sp+94h] [bp-10Ch]@12
  char v14; // [sp+160h] [bp-40h]@1
  void *Dst; // [sp+174h] [bp-2Ch]@2
  int v16; // [sp+180h] [bp-20h]@1
  void *v17; // [sp+18Ch] [bp-14h]@1
  int v18; // [sp+19Ch] [bp-4h]@1
  int v19; // [sp+1A0h] [bp+0h]@12

  memset(&v6, -858993460, 0x188u);
  v17 = this;
  v16 = 0;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v8,
    Src);
  v18 = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::find(
    (int)((char *)v17 + 64),
    &v14,
    (int)&v8);
  LOBYTE(v18) = 2;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v8);
  v7 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::end(
         (int)((char *)v17 + 64),
         (std::_Iterator_base *)&v10);
  v6 = v7;
  LOBYTE(v18) = 3;
  v9 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::const_iterator::operator__(
         &v14,
         v7);
  LOBYTE(v18) = 2;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v10);
  if ( v9 )
  {
    Dst = *(void **)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::operator_>(&v14)
                   + 32);
  }
  else
  {
    v11 = operator new__(0x260u);
    Dst = v11;
    memset(v11, 0, 0x260u);
    v7 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
           &v12,
           Src);
    v6 = v7;
    LOBYTE(v18) = 4;
    v2 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>>::operator__(
           (int)((char *)v17 + 64),
           v7);
    *(_DWORD *)v2 = Dst;
    LOBYTE(v18) = 2;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v12);
    v16 = 1;
  }
  if ( Src[55] == 50 )
  {
    memcpy(Dst, Src, 0x130u);
    if ( v16 )
    {
      Dst = (char *)Dst + 304;
      memcpy(Dst, Src, 0x130u);
      *((_BYTE *)Dst + 55) = 51;
    }
  }
  if ( Src[55] == 51 )
  {
    Dst = (char *)Dst + 304;
    memcpy(Dst, Src, 0x130u);
    if ( v16 )
    {
      Dst = (char *)Dst - 304;
      memcpy(Dst, Src, 0x130u);
      *((_BYTE *)Dst + 55) = 50;
    }
  }
  if ( v16 )
  {
    *((_DWORD *)Dst + 15) = 0;
    *((_DWORD *)Dst + 70) = 0;
    *((_DWORD *)Dst + 16) = 0;
    *((double *)Dst + 15) = 0.0;
    *((double *)Dst + 24) = 0.0;
    *((double *)Dst + 17) = 0.0;
  }
  v13 = v16;
  v18 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v14);
  v4 = v3;
  _RTC_CheckStackVars(&v19, &_LN17_0);
  return _RTC_CheckEsp((unsigned int)&v19 ^ __security_cookie, v4);
}


int __thiscall CTraderSpi::UpdatePosition(CTraderSpi *this, struct CThostFtdcTradeField *a2)
{
  int v2; // edx@2
  int v3; // ST04_4@26
  int v5; // [sp+Ch] [bp-1D4h]@1
  int v6; // [sp+10h] [bp-1D0h]@1
  char v7; // [sp+18h] [bp-1C8h]@1
  char v8; // [sp+43h] [bp-19Dh]@1
  char v9; // [sp+4Ch] [bp-194h]@1
  int v10; // [sp+60h] [bp-180h]@2
  char v11; // [sp+6Ch] [bp-174h]@3
  int v12; // [sp+94h] [bp-14Ch]@4
  char v13; // [sp+A3h] [bp-13Dh]@9
  char v14; // [sp+ACh] [bp-134h]@9
  int v15; // [sp+D4h] [bp-10Ch]@25
  int v16; // [sp+1A0h] [bp-40h]@3
  int v17; // [sp+1ACh] [bp-34h]@3
  char v18; // [sp+1B8h] [bp-28h]@1
  CTraderSpi *v19; // [sp+1CCh] [bp-14h]@1
  int v20; // [sp+1DCh] [bp-4h]@1
  int v21; // [sp+1E0h] [bp+0h]@26

  memset(&v5, -858993460, 0x1C8u);
  v19 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v7,
    (const char *)a2 + 24);
  v20 = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::find(
    (int)((char *)v19 + 64),
    &v18,
    (int)&v7);
  LOBYTE(v20) = 2;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v7);
  v6 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::end(
         (int)((char *)v19 + 64),
         (std::_Iterator_base *)&v9);
  v5 = v6;
  LOBYTE(v20) = 3;
  v8 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::const_iterator::operator__(
         &v18,
         v6);
  LOBYTE(v20) = 2;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v9);
  if ( v8 )
  {
    CTraderSpi::ReqQryInvestorPosition((void *)v19, (const char *)a2 + 24);
    v10 = 0;
    v20 = -1;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
  }
  else
  {
    v17 = *(_DWORD *)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::operator_>(&v18)
                    + 32);
    v6 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
           &v11,
           (const char *)a2 + 24);
    v5 = v6;
    LOBYTE(v20) = 4;
    v16 = *(_DWORD *)std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInstrumentField__>>>::operator__(
                       (int)&InstrumentInfo,
                       v6);
    LOBYTE(v20) = 2;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v11);
    if ( v16 )
    {
      v6 = *((_BYTE *)a2 + 190);
      v6 -= 48;
      switch ( v6 )
      {
        case 0:
          if ( *((_BYTE *)a2 + 114) == 49 )
            v17 += 304;
          *(_DWORD *)(v17 + 64) += *((_DWORD *)a2 + 50);
          *(_DWORD *)(v17 + 280) += *((_DWORD *)a2 + 50);
          *(double *)(v17 + 120) = (double)*((signed int *)a2 + 50)
                                 * *((double *)a2 + 24)
                                 * (double)*(signed int *)(v16 + 148)
                                 + *(double *)(v17 + 120);
          break;
        case 1:
          v6 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
                 &v14,
                 (const char *)(v16 + 31));
          v5 = v6;
          LOBYTE(v20) = 5;
          v13 = std::operator__<char_std::char_traits<char>_std::allocator<char>>(v6, v6, v6, "SHFE");
          LOBYTE(v20) = 2;
          std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v14);
          if ( !v13 )
            goto $LN10_4;
          if ( *((_BYTE *)a2 + 114) == 48 )
            v17 += 304;
          *(_DWORD *)(v17 + 64) -= *((_DWORD *)a2 + 50);
          *(_DWORD *)(v17 + 280) -= *((_DWORD *)a2 + 50);
          *(double *)(v17 + 120) = *(double *)(v17 + 120)
                                 - (double)*((signed int *)a2 + 50)
                                 * *((double *)a2 + 24)
                                 * (double)*(signed int *)(v16 + 148);
          break;
        case 2:
$LN10_4:
          if ( *((_BYTE *)a2 + 114) == 48 )
            v17 += 304;
          *(_DWORD *)(v17 + 64) -= *((_DWORD *)a2 + 50);
          if ( *(_DWORD *)(v17 + 280) < *((_DWORD *)a2 + 50) )
          {
            *(_DWORD *)(v17 + 60) -= *((_DWORD *)a2 + 50) - *(_DWORD *)(v17 + 280);
            *(_DWORD *)(v17 + 280) = 0;
          }
          else
          {
            *(_DWORD *)(v17 + 280) -= *((_DWORD *)a2 + 50);
          }
          *(double *)(v17 + 120) = *(double *)(v17 + 120)
                                 - (double)*((signed int *)a2 + 50)
                                 * *((double *)a2 + 24)
                                 * (double)*(signed int *)(v16 + 148);
          break;
        case 3:
          if ( *((_BYTE *)a2 + 114) == 48 )
            v17 += 304;
          *(_DWORD *)(v17 + 64) -= *((_DWORD *)a2 + 50);
          *(_DWORD *)(v17 + 280) -= *((_DWORD *)a2 + 50);
          *(double *)(v17 + 120) = *(double *)(v17 + 120)
                                 - (double)*((signed int *)a2 + 50)
                                 * *((double *)a2 + 24)
                                 * (double)*(signed int *)(v16 + 148);
          break;
        case 4:
          if ( *((_BYTE *)a2 + 114) == 48 )
            v17 += 304;
          *(_DWORD *)(v17 + 64) -= *((_DWORD *)a2 + 50);
          *(_DWORD *)(v17 + 60) -= *((_DWORD *)a2 + 50);
          *(double *)(v17 + 120) = *(double *)(v17 + 120)
                                 - (double)*((signed int *)a2 + 50)
                                 * *((double *)a2 + 24)
                                 * (double)*(signed int *)(v16 + 148);
          break;
        default:
          break;
      }
      *(double *)(v17 + 192) = 1.797693134862316e308;
      v15 = v17;
      v20 = -1;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
    }
    else
    {
      CTraderSpi::ReqQryInvestorPosition((void *)v19, (const char *)a2 + 24);
      CTraderSpi::ReqQryInstrument((void *)v19, (const char *)a2 + 24);
      v12 = 0;
      v20 = -1;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
    }
  }
  v3 = v2;
  _RTC_CheckStackVars(&v21, &_LN29);
  return _RTC_CheckEsp((unsigned int)&v21 ^ __security_cookie, v3);
}

int __fastcall CTraderSpi::OnRspQryInvestorPosition(CTraderSpi *this, int a2, const char *a3, char *a4, int a5, bool a6)
{
  unsigned __int8 v6; // al@1
  int v7; // edx@1
  int v8; // ecx@1
  char v10; // [sp+Ch] [bp-CCh]@1
  CTraderSpi *v11; // [sp+D0h] [bp-8h]@1

  memset(&v10, -858993460, 0xCCu);
  v11 = this;
  v6 = CTraderSpi::IsErrorRspInfo((void *)this, a2, a4);
  v8 = v6;
  if ( !v6 )
    CTraderSpi::UpdatePosition((void *)v11, a3);
  return _RTC_CheckEsp(v8, v7);
}

int __thiscall CTraderSpi::ReqOrderInsert(void *this, const char *Source, double a3, char a4, char a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // edx@1
  int v11; // ecx@1
  int v12; // edx@4
  int v13; // ecx@4
  int v14; // edx@7
  int v15; // ecx@7
  unsigned int v17; // [sp+10h] [bp-1D8h]@1
  int v18; // [sp+20h] [bp-1C8h]@1
  int v19; // [sp+28h] [bp-1C0h]@7
  CExeOrderStatus *v20; // [sp+34h] [bp-1B4h]@4
  struct CExeOrderStatus *v21; // [sp+100h] [bp-E8h]@7
  int v22; // [sp+10Ch] [bp-DCh]@1
  char Dst; // [sp+118h] [bp-D0h]@1
  char Dest; // [sp+123h] [bp-C5h]@1
  char v25; // [sp+130h] [bp-B8h]@1
  char v26; // [sp+14Fh] [bp-99h]@1
  char v27; // [sp+15Ch] [bp-8Ch]@1
  char v28; // [sp+16Ch] [bp-7Ch]@1
  char v29; // [sp+16Dh] [bp-7Bh]@1
  char v30; // [sp+16Eh] [bp-7Ah]@1
  char v31; // [sp+173h] [bp-75h]@1
  double v32; // [sp+178h] [bp-70h]@1
  int v33; // [sp+180h] [bp-68h]@1
  char v34; // [sp+184h] [bp-64h]@1
  char v35; // [sp+18Eh] [bp-5Ah]@1
  int v36; // [sp+190h] [bp-58h]@1
  char v37; // [sp+194h] [bp-54h]@1
  double v38; // [sp+198h] [bp-50h]@1
  char v39; // [sp+1A0h] [bp-48h]@1
  int v40; // [sp+1A4h] [bp-44h]@1
  int v41; // [sp+1C4h] [bp-24h]@1
  void *v42; // [sp+1D0h] [bp-18h]@1
  unsigned int v43; // [sp+1D8h] [bp-10h]@1
  int v44; // [sp+1E4h] [bp-4h]@4
  int v45; // [sp+1E8h] [bp+0h]@1

  memset(&v18, -858993460, 0x1BCu);
  v43 = (unsigned int)&v45 ^ __security_cookie;
  v17 = (unsigned int)&v45 ^ __security_cookie;
  v42 = this;
  memset(&Dst, 0, 0xB0u);
  strcpy(&Dst, (const char *)v42 + 92);
  strcpy(&Dest, (const char *)v42 + 103);
  strcpy(&v25, Source);
  v18 = (*((_DWORD *)v42 + 42))++;
  sprintf(&v26, "%ld", v18);
  strcpy(&v27, (const char *)v42 + 103);
  v28 = 50;
  v29 = a4;
  v30 = a5;
  v31 = 49;
  v32 = a3;
  v33 = a6;
  v34 = 51;
  v35 = 49;
  v36 = 1;
  v37 = 49;
  v38 = 0.0;
  v39 = 48;
  v40 = 0;
  v41 = 0;
  ++*((_DWORD *)v42 + 43);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v42 + 21) + 48))(
    *((_DWORD *)v42 + 21),
    &Dst,
    *((_DWORD *)v42 + 43));
  v22 = _RTC_CheckEsp(v11, v10);
  if ( v22 )
    v18 = (int)"失败";
  else
    v18 = (int)"成功";
  (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(a8 + 36) + 4))(
    *(_DWORD *)(a8 + 36),
    (const char *)&_string_,
    (char *)v42 + 103,
    Source,
    v18,
    &v26,
    a4,
    a5,
    a6,
    *(_QWORD *)&a3);
  _RTC_CheckEsp(v13, v12);
  v20 = (CExeOrderStatus *)operator new(0x268u);
  v44 = 0;
  if ( v20 )
    v18 = CExeOrderStatus::CExeOrderStatus(v20);
  else
    v18 = 0;
  v19 = v18;
  v44 = -1;
  v21 = (struct CExeOrderStatus *)v18;
  strcpy((char *)(v18 + 24), Source);
  strcpy((char *)v21 + 55, &v26);
  *((_QWORD *)v21 + 12) = *(_QWORD *)&a3;
  *((_BYTE *)v21 + 85) = a4;
  *((_BYTE *)v21 + 86) = a5;
  *((_DWORD *)v21 + 26) = a6;
  *((_DWORD *)v21 + 81) = a6;
  *((_DWORD *)v21 + 105) = *((_DWORD *)v42 + 40);
  *((_DWORD *)v21 + 106) = *((_DWORD *)v42 + 41);
  *((_QWORD *)v21 + 72) = *(_QWORD *)&a3;
  *((_DWORD *)v21 + 152) = a8;
  CTraderSpi::AddTrackingOrder((char *)v42 - 8, v21);
  *(_DWORD *)a7 = v21;
  _RTC_CheckStackVars(&v45, &_LN11_2);
  __security_check_cookie((unsigned int)&v45 ^ v43);
  return _RTC_CheckEsp(v15, v14);
}

//----- (00005ED4) --------------------------------------------------------
int __thiscall CTraderSpi::OnRspOrderInsert(CTraderSpi *this, struct CThostFtdcInputOrderField *a2, char *a3, int a4, bool a5)
{
  int v5; // eax@1
  int v6; // edx@1
  int v7; // eax@4
  int v8; // eax@7
  int v9; // eax@7
  int v10; // ecx@7
  void *v12; // [sp-10h] [bp-1E0h]@7
  int v13; // [sp-Ch] [bp-1DCh]@7
  int v14; // [sp-8h] [bp-1D8h]@7
  unsigned int v15; // [sp-4h] [bp-1D4h]@1
  int v16; // [sp+Ch] [bp-1C4h]@1
  int v17; // [sp+10h] [bp-1C0h]@7
  struct std::_Iterator_base *v18; // [sp+14h] [bp-1BCh]@3
  int v19; // [sp+18h] [bp-1B8h]@3
  char v20; // [sp+20h] [bp-1B0h]@1
  char v21; // [sp+4Bh] [bp-185h]@3
  char v22; // [sp+54h] [bp-17Ch]@3
  char v23; // [sp+68h] [bp-168h]@5
  char v24; // [sp+7Fh] [bp-151h]@6
  char v25; // [sp+88h] [bp-148h]@6
  void **v26; // [sp+9Ch] [bp-134h]@7
  char v27; // [sp+A8h] [bp-128h]@7
  char v28; // [sp+BCh] [bp-114h]@7
  struct CExeOrderStatus *v29; // [sp+190h] [bp-40h]@7
  char v30; // [sp+19Ch] [bp-34h]@2
  int v31; // [sp+1B0h] [bp-20h]@1
  CTraderSpi *v32; // [sp+1BCh] [bp-14h]@1
  int v33; // [sp+1CCh] [bp-4h]@1
  int v34; // [sp+1D0h] [bp+0h]@1

  memset(&v16, -858993460, 0x1B8u);
  v15 = (unsigned int)&v34 ^ __security_cookie;
  v32 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v20,
    (const char *)a2 + 24);
  v33 = 0;
  v31 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
          (int)((char *)v32 + 216),
          (int)&v20);
  v33 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v20);
  v5 = CTraderSpi::IsErrorRspInfo((void *)v32, v6, a3);
  if ( (_BYTE)v5 )
  {
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rbegin(v31, &v30);
    v33 = 1;
    while ( 1 )
    {
      v19 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v31, &v22);
      v18 = (struct std::_Iterator_base *)v19;
      LOBYTE(v33) = 2;
      v21 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
              &v30,
              (const struct std::_Container_base_secure **)v19);
      LOBYTE(v33) = 1;
      std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v22);
      if ( !v21 )
        break;
      v7 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v30);
      if ( !strcmp((const char *)a2 + 55, (const char *)(*(_DWORD *)v7 + 55)) )
        break;
      std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(
        (struct std::_Iterator_base *)&v30,
        &v23,
        0);
      std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v23);
    }
    v19 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v31, &v25);
    v18 = (struct std::_Iterator_base *)v19;
    LOBYTE(v33) = 3;
    v24 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
            &v30,
            (const struct std::_Container_base_secure **)v19);
    LOBYTE(v33) = 1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v25);
    if ( v24 )
    {
      v29 = *(struct CExeOrderStatus **)std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v30);
      v6 = *(_DWORD *)a3;
      *((_DWORD *)v29 + 151) = *(_DWORD *)a3;
      *((_DWORD *)v29 + 150) = 5;
      CTraderSpi::UpdateOrderStatus((int)v32, v6, v29);
      pthread_spin_lock((char *)v32 + 188);
      v8 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(&v30);
      v9 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::base(
             (const struct std::_Container_base_secure **)v8,
             &v27);
      v19 = v9;
      v18 = (struct std::_Iterator_base *)v9;
      LOBYTE(v33) = 4;
      v26 = &v12;
      v17 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
              &v12,
              (const struct std::_Container_base_secure **)v9);
      v16 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase(
              (void *)v31,
              (std::_Iterator_base *)&v28,
              v12,
              v13,
              v14);
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v28);
      LOBYTE(v33) = 1;
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v27);
      pthread_spin_unlock((char *)v32 + 188);
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back((int)((char *)v32 + 192), (int)&v29);
      (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(*((_DWORD *)v29 + 152) + 36) + 4))(
        *(_DWORD *)(*((_DWORD *)v29 + 152) + 36),
        (const char *)&_string_,
        (char *)v32 + 111,
        (char *)a2 + 24,
        (char *)a2 + 55,
        *((_BYTE *)a2 + 85),
        *((_BYTE *)a2 + 86),
        *((_DWORD *)a2 + 26));
      _RTC_CheckEsp(v10, v6);
      v33 = -1;
      v5 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v30);
    }
    else
    {
      v33 = -1;
      v5 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v30);
    }
  }
  v14 = v6;
  v13 = v5;
  _RTC_CheckStackVars(&v34, &_LN20_0);
  return _RTC_CheckEsp(v15, v14);
}

int __fastcall CTraderSpi::UpdateOrderStatus(int this, int a2, struct CExeOrderStatus *a3)
{
  char v4; // [sp+Ch] [bp-CCh]@1
  int v5; // [sp+D0h] [bp-8h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = this;
  if ( a3 && *((_DWORD *)a3 + 152) )
  {
    if ( IOrderStatusReceiver::GetCommunicationMode(*((_DWORD *)a3 + 152)) == 1 )
    {
      IOrderStatusReceiver::SendOrderStatusUpdateEvent(*((IOrderStatusReceiver **)a3 + 152), (const char *)a3 + 24);
    }
    else
    {
      if ( IOrderStatusReceiver::GetCommunicationMode(*((_DWORD *)a3 + 152)) == 2 )
        ITimeAction::DoActionWithLock(*((char **)a3 + 152), -1, (const char *)a3 + 24);
    }
  }
  return _RTC_CheckEsp(this, a2);
}

int __thiscall ITimeAction::DoActionWithLock(char *this, __int32 a2, const char *a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // edx@1
  int v6; // ecx@1
  char v8; // [sp+Ch] [bp-CCh]@1
  char *v9; // [sp+D0h] [bp-8h]@1

  memset(&v8, -858993460, 0xCCu);
  v9 = this;
  pthread_spin_lock(this + 32);
  (*(void (__thiscall **)(char *, __int32, const char *))(*(_DWORD *)v9 + 8))(v9, a2, a3);
  _RTC_CheckEsp(v4, v3);
  pthread_spin_unlock(v9 + 32);
  return _RTC_CheckEsp(v6, v5);
}

int __thiscall IOrderStatusReceiver::SendOrderStatusUpdateEvent(IOrderStatusReceiver *this, const char *a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  char v5; // [sp+Ch] [bp-CCh]@1

  memset(&v5, -858993460, 0xCCu);
  IEventQueue::SendEvent(*((_DWORD *)this + 11), -1, a2, this);
  return _RTC_CheckEsp(v3, v2);
}

int __thiscall CTraderSpi::ReqOrderCancel(void *this, struct CExeOrderStatus *a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  int v4; // edx@4
  int v5; // ecx@4
  int v6; // edx@4
  int v7; // ecx@4
  int v9; // [sp+Ch] [bp-180h]@1
  int v10; // [sp+D4h] [bp-B8h]@1
  char Dst; // [sp+E0h] [bp-ACh]@1
  char Dest; // [sp+EBh] [bp-A1h]@1
  char v13; // [sp+FCh] [bp-90h]@1
  int v14; // [sp+110h] [bp-7Ch]@1
  int v15; // [sp+114h] [bp-78h]@1
  char v16; // [sp+118h] [bp-74h]@1
  char v17; // [sp+121h] [bp-6Bh]@1
  char v18; // [sp+136h] [bp-56h]@1
  char v19; // [sp+154h] [bp-38h]@1
  void *v20; // [sp+180h] [bp-Ch]@1
  unsigned int v21; // [sp+188h] [bp-4h]@1
  int v22; // [sp+18Ch] [bp+0h]@1

  memset(&v9, -858993460, 0x180u);
  v21 = (unsigned int)&v22 ^ __security_cookie;
  v20 = this;
  memset(&Dst, 0, 0x98u);
  strcpy(&Dst, (const char *)v20 + 92);
  strcpy(&Dest, (const char *)v20 + 103);
  strcpy(&v13, (const char *)a2 + 55);
  v14 = *((_DWORD *)a2 + 105);
  v15 = *((_DWORD *)a2 + 106);
  strcpy(&v16, (const char *)a2 + 185);
  strcpy(&v17, (const char *)a2 + 296);
  v18 = 48;
  strcpy(&v19, (const char *)a2 + 24);
  ++*((_DWORD *)v20 + 43);
  (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)v20 + 21) + 60))(
    *((_DWORD *)v20 + 21),
    &Dst,
    *((_DWORD *)v20 + 43));
  v10 = _RTC_CheckEsp(v3, v2);
  if ( v10 )
    v9 = (int)"失败";
  else
    v9 = (int)"成功";
  (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(*((_DWORD *)a2 + 152) + 36) + 4))(
    *(_DWORD *)(*((_DWORD *)a2 + 152) + 36),
    (const char *)&_string_,
    (char *)v20 + 103,
    (char *)a2 + 24,
    v9,
    (char *)a2 + 55,
    *((_BYTE *)a2 + 85),
    *((_BYTE *)a2 + 86),
    *((_DWORD *)a2 + 26));
  _RTC_CheckEsp(v5, v4);
  _RTC_CheckStackVars(&v22, &_LN7_3);
  __security_check_cookie((unsigned int)&v22 ^ v21);
  return _RTC_CheckEsp(v7, v6);
}

int __fastcall CTraderSpi::OnRspOrderAction(void *this, int a2, struct CThostFtdcInputOrderActionField *a3, char *a4, int a5, bool a6)
{
  int v6; // edx@1
  int v7; // ecx@1
  char v9; // [sp+Ch] [bp-CCh]@1

  memset(&v9, -858993460, 0xCCu);
  CTraderSpi::IsErrorRspInfo(this, a2, a4);
  return _RTC_CheckEsp(v7, v6);
}

int __thiscall CTraderSpi::OnRtnOrder(CTraderSpi *this, struct CThostFtdcOrderField *a2)
{
  bool v2; // al@1
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // edx@2
  char v7; // [sp+Ch] [bp-D8h]@1
  struct CExeOrderStatus *v8; // [sp+D0h] [bp-14h]@2
  CTraderSpi *v9; // [sp+DCh] [bp-8h]@1

  memset(&v7, -858993460, 0xD8u);
  v9 = this;
  v2 = CTraderSpi::IsMyOrder((int)this, a2);
  v4 = v2;
  if ( v2 )
  {
    v8 = (struct CExeOrderStatus *)CTraderSpi::UpdateTrackingOrder((void *)v9, a2);
    if ( *((_BYTE *)a2 + 318) != 97 )
      CTraderSpi::UpdateOrderStatus((int)v9, v5, v8);
    (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(*((_DWORD *)v8 + 152) + 36) + 4))(
      *(_DWORD *)(*((_DWORD *)v8 + 152) + 36),
      (const char *)&_string_,
      (char *)v9 + 111,
      (char *)a2 + 24,
      (char *)a2 + 55,
      *((_BYTE *)a2 + 85),
      *((_BYTE *)a2 + 86),
      *((_DWORD *)a2 + 80),
      *((_DWORD *)a2 + 26),
      *((_BYTE *)a2 + 318));
    _RTC_CheckEsp(v4, v3);
  }
  return _RTC_CheckEsp(v4, v3);
}

int __thiscall CTraderSpi::OnRtnTrade(CTraderSpi *this, struct CThostFtdcTradeField *a2)
{
  int v2; // eax@1
  int v3; // edx@1
  int v4; // edx@1
  int v5; // ecx@1
  char v7; // [sp+Ch] [bp-CCh]@1
  CTraderSpi *v8; // [sp+D0h] [bp-8h]@1

  memset(&v7, -858993460, 0xCCu);
  v8 = this;
  v2 = CTraderSpi::UpdateTrackingOrder((void *)this, a2);
  CTraderSpi::UpdateOrderStatus((int)v8, v3, (struct CExeOrderStatus *)v2);
  return _RTC_CheckEsp(v5, v4);
}

int __thiscall CTraderSpi::OnFrontDisconnected(int this, int a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  int v4; // edx@1
  int v5; // ecx@1
  char v7; // [sp+Ch] [bp-CCh]@1
  int v8; // [sp+D0h] [bp-8h]@1

  memset(&v7, -858993460, 0xCCu);
  v8 = this;
  *(_DWORD *)(this + 184) = 2;
  (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(v8 + 248) + 4))(
    *(_DWORD *)(v8 + 248),
    "（N)%s连接断线(%d)!\n",
    v8 + 111,
    a2);
  _RTC_CheckEsp(v3, v2);
  return _RTC_CheckEsp(v5, v4);
}

int __fastcall CTraderSpi::IsErrorRspInfo(void *this, int edx0, char *a2)
{
  int v4; // [sp+Ch] [bp-DCh]@1
  char v5; // [sp+D7h] [bp-11h]@5
  void *v6; // [sp+E0h] [bp-8h]@1

  memset(&v4, -858993460, 0xDCu);
  v6 = this;
  v4 = a2 && *(_DWORD *)a2;
  LOBYTE(this) = v4;
  v5 = v4;
  if ( (_BYTE)v4 )
  {
    (*(void (**)(_DWORD, const char *, ...))(**((_DWORD **)v6 + 62) + 4))(
      *((_DWORD *)v6 + 62),
      (const char *)&_string_,
      (char *)v6 + 111,
      *(_DWORD *)a2,
      a2 + 4);
    _RTC_CheckEsp(this, edx0);
  }
  return _RTC_CheckEsp(this, edx0);
}

bool __thiscall CTraderSpi::IsMyOrder(int this, struct CThostFtdcOrderField *a2)
{
  int v3; // [sp+Ch] [bp-D0h]@1
  int v4; // [sp+D4h] [bp-8h]@1

  memset(&v3, -858993460, 0xD0u);
  v4 = this;
  return *((_DWORD *)a2 + 105) == *(_DWORD *)(this + 168) && *((_DWORD *)a2 + 106) == *(_DWORD *)(v4 + 172);
}

bool __thiscall CTraderSpi::IsTradingOrder(void *this, struct CThostFtdcOrderField *a2)
{
  int v3; // [sp+Ch] [bp-D0h]@1
  void *v4; // [sp+D4h] [bp-8h]@1

  memset(&v3, -858993460, 0xD0u);
  v4 = this;
  return *((_BYTE *)a2 + 318) != 50 && *((_BYTE *)a2 + 318) != 53 && *((_BYTE *)a2 + 318) != 48 && *((_BYTE *)a2 + 296);
}

int __thiscall CTraderSpi::Closeable(void *this, const char *Str, char a3, int a4)
{
  int v4; // edx@2
  int v5; // ST04_4@10
  int v7; // [sp+Ch] [bp-184h]@1
  int v8; // [sp+10h] [bp-180h]@1
  char v9; // [sp+18h] [bp-178h]@1
  char v10; // [sp+43h] [bp-14Dh]@1
  char v11; // [sp+4Ch] [bp-144h]@1
  int v12; // [sp+60h] [bp-130h]@2
  int v13; // [sp+6Ch] [bp-124h]@4
  int v14; // [sp+78h] [bp-118h]@6
  int v15; // [sp+84h] [bp-10Ch]@8
  int v16; // [sp+90h] [bp-100h]@9
  int v17; // [sp+15Ch] [bp-34h]@3
  char v18; // [sp+168h] [bp-28h]@1
  void *v19; // [sp+17Ch] [bp-14h]@1
  int v20; // [sp+18Ch] [bp-4h]@1
  int v21; // [sp+190h] [bp+0h]@10

  memset(&v7, -858993460, 0x178u);
  v19 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v9,
    Str);
  v20 = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::find(
    (int)((char *)v19 + 64),
    &v18,
    (int)&v9);
  LOBYTE(v20) = 2;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v9);
  v8 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::end(
         (int)((char *)v19 + 64),
         (std::_Iterator_base *)&v11);
  v7 = v8;
  LOBYTE(v20) = 3;
  v10 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::const_iterator::operator__(
          &v18,
          v8);
  LOBYTE(v20) = 2;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v11);
  if ( v10 )
  {
    v12 = -1;
    v20 = -1;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
  }
  else
  {
    v17 = *(_DWORD *)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::operator_>(&v18)
                    + 32);
    if ( *(_DWORD *)(v17 + 64) )
    {
      if ( *(_BYTE *)(v17 + 55) == a3 )
      {
        v14 = -3;
        v20 = -1;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
      }
      else
      {
        if ( *(_DWORD *)(v17 + 64) >= a4 )
        {
          v16 = 0;
          v20 = -1;
          std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
        }
        else
        {
          v15 = *(_DWORD *)(v17 + 64);
          v20 = -1;
          std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
        }
      }
    }
    else
    {
      v13 = -2;
      v20 = -1;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField___std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_CThostFtdcInvestorPositionField__>>_0>>::iterator::_iterator((std::_Iterator_base *)&v18);
    }
  }
  v5 = v4;
  _RTC_CheckStackVars(&v21, &_LN14_1);
  return _RTC_CheckEsp((unsigned int)&v21 ^ __security_cookie, v5);
}

int __thiscall CTraderSpi::AddTrackingOrder(void *this, struct CExeOrderStatus *a2)
{
  int v2; // edx@1
  char v4; // [sp+Ch] [bp-10Ch]@1
  char v5; // [sp+10h] [bp-108h]@1
  int v6; // [sp+F8h] [bp-20h]@1
  void *v7; // [sp+104h] [bp-14h]@1
  int v8; // [sp+114h] [bp-4h]@1
  int v9; // [sp+118h] [bp+0h]@1

  memset(&v4, -858993460, 0x100u);
  v7 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v5,
    (const char *)a2 + 24);
  v8 = 0;
  v6 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
         (int)((char *)v7 + 216),
         (int)&v5);
  v8 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v5);
  pthread_spin_lock((char *)v7 + 188);
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back(v6, (int)&a2);
  pthread_spin_unlock((char *)v7 + 188);
  return _RTC_CheckEsp((unsigned int)&v9 ^ __security_cookie, v2);
}
int __thiscall CTraderSpi::UpdateTrackingOrder(void *this, struct CThostFtdcOrderField *Src)
{
  int v2; // eax@13
  int v3; // edx@21
  int v4; // eax@21
  void *v6; // [sp-10h] [bp-204h]@13
  int v7; // [sp-Ch] [bp-200h]@13
  int v8; // [sp-8h] [bp-1FCh]@13
  unsigned int v9; // [sp-4h] [bp-1F8h]@1
  int v10; // [sp+Ch] [bp-1E8h]@1
  int v11; // [sp+10h] [bp-1E4h]@13
  struct std::_Iterator_base *v12; // [sp+14h] [bp-1E0h]@2
  int v13; // [sp+18h] [bp-1DCh]@2
  char v14; // [sp+20h] [bp-1D4h]@1
  char v15; // [sp+4Bh] [bp-1A9h]@2
  char v16; // [sp+54h] [bp-1A0h]@2
  char v17; // [sp+68h] [bp-18Ch]@6
  char v18; // [sp+7Fh] [bp-175h]@7
  char v19; // [sp+88h] [bp-16Ch]@7
  void **v20; // [sp+9Ch] [bp-158h]@13
  char v21; // [sp+A8h] [bp-14Ch]@13
  char v22; // [sp+BCh] [bp-138h]@13
  void *v23; // [sp+D0h] [bp-124h]@21
  int v24; // [sp+DCh] [bp-118h]@22
  void *Dst; // [sp+1A8h] [bp-4Ch]@8
  int v26; // [sp+1B4h] [bp-40h]@3
  char v27; // [sp+1C0h] [bp-34h]@1
  int v28; // [sp+1D4h] [bp-20h]@1
  void *v29; // [sp+1E0h] [bp-14h]@1
  int v30; // [sp+1F0h] [bp-4h]@1
  int v31; // [sp+1F4h] [bp+0h]@1

  memset(&v10, -858993460, 0x1DCu);
  v9 = (unsigned int)&v31 ^ __security_cookie;
  v29 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v14,
    (const char *)Src + 24);
  v30 = 0;
  v28 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
          (int)((char *)v29 + 216),
          (int)&v14);
  v30 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v14);
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rbegin(v28, &v27);
  v30 = 1;
  while ( 1 )
  {
    v13 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v28, &v16);
    v12 = (struct std::_Iterator_base *)v13;
    LOBYTE(v30) = 2;
    v15 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
            &v27,
            (const struct std::_Container_base_secure **)v13);
    LOBYTE(v30) = 1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v16);
    if ( !v15 )
      break;
    v26 = *(_DWORD *)std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v27);
    if ( !strcmp((const char *)Src + 55, (const char *)(v26 + 55)) )
    {
      if ( *((_DWORD *)Src + 105) == *(_DWORD *)(v26 + 420) && *((_DWORD *)Src + 106) == *(_DWORD *)(v26 + 424) )
        break;
    }
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(
      (struct std::_Iterator_base *)&v27,
      &v17,
      0);
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v17);
  }
  v13 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v28, &v19);
  v12 = (struct std::_Iterator_base *)v13;
  LOBYTE(v30) = 3;
  v18 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
          &v27,
          (const struct std::_Container_base_secure **)v13);
  LOBYTE(v30) = 1;
  std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v19);
  if ( v18 )
  {
    Dst = *(void **)std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v27);
    memcpy(Dst, (const void *)Src, 0x238u);
    v13 = *((_BYTE *)Src + 318);
    v13 -= 48;
    switch ( v13 )
    {
      case 0:
        if ( *((_DWORD *)Dst + 150) != 7 )
          *((_DWORD *)Dst + 150) = 4;
        break;
      case 5:
        if ( *((_DWORD *)Dst + 149) == *((_DWORD *)Dst + 80) )
        {
          *((_DWORD *)Dst + 150) = 6;
          pthread_spin_lock((char *)v29 + 188);
          v2 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(&v27);
          v13 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::base(
                  (const struct std::_Container_base_secure **)v2,
                  &v21);
          v12 = (struct std::_Iterator_base *)v13;
          LOBYTE(v30) = 4;
          v20 = &v6;
          v11 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
                  &v6,
                  (const struct std::_Container_base_secure **)v13);
          v10 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase(
                  (void *)v28,
                  (std::_Iterator_base *)&v22,
                  v6,
                  v7,
                  v8);
          std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v22);
          LOBYTE(v30) = 1;
          std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v21);
          pthread_spin_unlock((char *)v29 + 188);
          std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back((int)((char *)v29 + 192), (int)&Dst);
        }
        else
        {
          *((_DWORD *)Dst + 150) = 3;
        }
        break;
      case 1:
      case 3:
        *((_DWORD *)Dst + 150) = 1;
        break;
      case 2:
      case 4:
        *((_DWORD *)Dst + 150) = 2;
        break;
      default:
        if ( !*((_DWORD *)Src + 81) && *((_DWORD *)Dst + 150) != 7 )
          *((_DWORD *)Dst + 150) = 4;
        break;
    }
    v23 = Dst;
    v30 = -1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v27);
    v4 = (int)v23;
  }
  else
  {
    v24 = 0;
    v30 = -1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v27);
    v4 = v24;
  }
  v8 = v3;
  v7 = v4;
  _RTC_CheckStackVars(&v31, &_LN31);
  return _RTC_CheckEsp(v9, v8);
}

int __thiscall CTraderSpi::UpdateTrackingOrder(void *this, struct CThostFtdcTradeField *a2)
{
  int v2; // eax@3
  int v3; // eax@4
  int v4; // eax@8
  int v5; // eax@11
  unsigned __int64 v6; // st7@12
  int v7; // edx@12
  int v8; // ecx@12
  unsigned __int64 v9; // qax@12
  void *v11; // [sp-4h] [bp-22Ch]@8
  unsigned __int64 v12; // [sp+0h] [bp-228h]@8
  unsigned int v13; // [sp+8h] [bp-220h]@1
  int v14; // [sp+18h] [bp-210h]@1
  int v15; // [sp+1Ch] [bp-20Ch]@8
  struct std::_Iterator_base *v16; // [sp+20h] [bp-208h]@2
  int v17; // [sp+24h] [bp-204h]@2
  char v18; // [sp+2Ch] [bp-1FCh]@1
  char v19; // [sp+57h] [bp-1D1h]@2
  char v20; // [sp+60h] [bp-1C8h]@2
  char v21; // [sp+74h] [bp-1B4h]@5
  char v22; // [sp+8Bh] [bp-19Dh]@6
  char v23; // [sp+94h] [bp-194h]@6
  void **v24; // [sp+A8h] [bp-180h]@8
  char v25; // [sp+B4h] [bp-174h]@8
  char v26; // [sp+C8h] [bp-160h]@8
  void **v27; // [sp+DCh] [bp-14Ch]@11
  char v28; // [sp+E8h] [bp-140h]@11
  char v29; // [sp+FCh] [bp-12Ch]@11
  int v30; // [sp+110h] [bp-118h]@12
  int v31; // [sp+11Ch] [bp-10Ch]@13
  int v32; // [sp+1E8h] [bp-40h]@7
  char v33; // [sp+1F4h] [bp-34h]@1
  int v34; // [sp+208h] [bp-20h]@1
  void *v35; // [sp+214h] [bp-14h]@1
  int v36; // [sp+224h] [bp-4h]@1
  int v37; // [sp+228h] [bp+0h]@1

  memset(&v14, -858993460, 0x204u);
  v13 = (unsigned int)&v37 ^ __security_cookie;
  v35 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v18,
    (const char *)a2 + 24);
  v36 = 0;
  v34 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
          (int)((char *)v35 + 216),
          (int)&v18);
  v36 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v18);
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rbegin(v34, &v33);
  v36 = 1;
  while ( 1 )
  {
    v17 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v34, &v20);
    v16 = (struct std::_Iterator_base *)v17;
    LOBYTE(v36) = 2;
    v19 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
            &v33,
            (const struct std::_Container_base_secure **)v17);
    LOBYTE(v36) = 1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v20);
    if ( !v19 )
      break;
    v2 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v33);
    if ( !strcmp((const char *)a2 + 84, (const char *)(*(_DWORD *)v2 + 185)) )
    {
      v3 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v33);
      if ( !strcmp((const char *)a2 + 115, (const char *)(*(_DWORD *)v3 + 296)) )
        break;
    }
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(
      (struct std::_Iterator_base *)&v33,
      &v21,
      0);
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v21);
  }
  v17 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v34, &v23);
  v16 = (struct std::_Iterator_base *)v17;
  LOBYTE(v36) = 3;
  v22 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
          &v33,
          (const struct std::_Container_base_secure **)v17);
  LOBYTE(v36) = 1;
  std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v23);
  if ( v22 )
  {
    v32 = *(_DWORD *)std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((struct std::_Iterator_base *)&v33);
    *(double *)(v32 + 568) = (double)*((signed int *)a2 + 50) * *((double *)a2 + 24) + *(double *)(v32 + 568);
    *(_DWORD *)(v32 + 596) += *((_DWORD *)a2 + 50);
    *(double *)(v32 + 576) = *(double *)(v32 + 568) / (double)*(signed int *)(v32 + 596);
    *(double *)(v32 + 584) = *((double *)a2 + 24);
    *(_DWORD *)(v32 + 592) = *((_DWORD *)a2 + 50);
    if ( *(_DWORD *)(v32 + 596) == *(_DWORD *)(v32 + 104) )
    {
      *(_DWORD *)(v32 + 600) = 7;
      pthread_spin_lock((char *)v35 + 188);
      v4 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(&v33);
      v17 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::base(
              (const struct std::_Container_base_secure **)v4,
              &v25);
      v16 = (struct std::_Iterator_base *)v17;
      LOBYTE(v36) = 4;
      v24 = &v11;
      v15 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
              &v11,
              (const struct std::_Container_base_secure **)v17);
      v14 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase(
              (void *)v34,
              (std::_Iterator_base *)&v26,
              v11,
              v12,
              SHIDWORD(v12));
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v26);
      LOBYTE(v36) = 1;
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v25);
      pthread_spin_unlock((char *)v35 + 188);
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back((int)((char *)v35 + 192), (int)&v32);
    }
    else
    {
      if ( *(_DWORD *)(v32 + 600) == 3 && *(_DWORD *)(v32 + 596) == *(_DWORD *)(v32 + 320) )
      {
        *(_DWORD *)(v32 + 600) = 6;
        pthread_spin_lock((char *)v35 + 188);
        v5 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(&v33);
        v17 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::base(
                (const struct std::_Container_base_secure **)v5,
                &v28);
        v16 = (struct std::_Iterator_base *)v17;
        LOBYTE(v36) = 5;
        v27 = &v11;
        v15 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
                &v11,
                (const struct std::_Container_base_secure **)v17);
        v14 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase(
                (void *)v34,
                (std::_Iterator_base *)&v29,
                v11,
                v12,
                SHIDWORD(v12));
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v29);
        LOBYTE(v36) = 1;
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>((std::_Iterator_base *)&v28);
        pthread_spin_unlock((char *)v35 + 188);
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back((int)((char *)v35 + 192), (int)&v32);
      }
    }
    *(double *)&v6 = *((double *)a2 + 24);
    v12 = v6;
    v11 = (void *)*((_DWORD *)a2 + 50);
    (*(void (**)(_DWORD, const char *, ...))(**(_DWORD **)(*(_DWORD *)(v32 + 608) + 36) + 4))(
      *(_DWORD *)(*(_DWORD *)(v32 + 608) + 36),
      (const char *)&_string_,
      (char *)v35 + 111,
      (char *)a2 + 24,
      v32 + 55,
      *((_BYTE *)a2 + 114),
      *((_BYTE *)a2 + 190),
      v11,
      v6,
      v6 >> 32);
    _RTC_CheckEsp(v8, v7);
    v30 = v32;
    v36 = -1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v33);
    LODWORD(v9) = v30;
  }
  else
  {
    v31 = 0;
    v36 = -1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>((std::_Iterator_base *)&v33);
    LODWORD(v9) = v31;
  }
  v12 = v9;
  _RTC_CheckStackVars(&v37, &_LN25);
  return _RTC_CheckEsp(v13, HIDWORD(v12));
}

int __cdecl CreateRealTraderInstance(const char *Str, const char *Source, bool a3, int a4)
{
  int v4; // edx@2
  int v6; // [sp+Ch] [bp-104h]@1
  int v7; // [sp+10h] [bp-100h]@3
  int v8; // [sp+18h] [bp-F8h]@5
  void *v9; // [sp+24h] [bp-ECh]@2
  int v10; // [sp+30h] [bp-E0h]@12
  void *v11; // [sp+3Ch] [bp-D4h]@9
  int v12; // [sp+10Ch] [bp-4h]@2
  int v13; // [sp+110h] [bp+0h]@15

  memset(&v6, -858993460, 0xF8u);
  if ( a3 )
  {
    v9 = operator new(0x100u);
    v12 = 0;
    if ( v9 )
      v7 = CTraderSpi::CTraderSpi(
             v9,
             "tcp://asp-sim2-front1.financial-trading-platform.com:26205",
             "3090",
             Str,
             Source,
             1,
             a4);
    else
      v7 = 0;
    v8 = v7;
    v12 = -1;
    if ( v7 )
      v6 = v8 + 8;
    else
      v6 = 0;
  }
  else
  {
    v11 = operator new(0x100u);
    v12 = 1;
    if ( v11 )
      v7 = CTraderSpi::CTraderSpi(v11, "tcp://cdtelecom1.hxqh168.com:41205", "16333", Str, Source, 0, a4);
    else
      v7 = 0;
    v10 = v7;
    v12 = -1;
    if ( v7 )
      v6 = v10 + 8;
    else
      v6 = 0;
  }
  return _RTC_CheckEsp((unsigned int)&v13 ^ __security_cookie, v4);
}

int __cdecl CreateRealTraderInstance(int a1, char a2, int a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  int v6; // [sp+Ch] [bp-C8h]@1
  int v7; // [sp+10h] [bp-C4h]@1

  memset(&v6, -858993460, 0xC8u);
  v7 = CTraderSpi::FormatString(a1, a2, a3);
  if ( v7 )
    v6 = v7 + 8;
  else
    v6 = 0;
  return _RTC_CheckEsp(v4, v3);
}




