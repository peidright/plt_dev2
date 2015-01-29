int __thiscall CMdSpi::Execute(int this);
int __thiscall CMdSpi::IsErrorRspInfo(void *this, int a2);
int __thiscall CMdSpi::OnFrontDisconnected(int this, int a2);
signed int __stdcall CMdSpi::OnHeartBeatWarning(int a1);
int __thiscall CMdSpi::ReqUserLogin(_DWORD); // weak
int __thiscall CMdSpi::ReqUserLogout(_DWORD); // weak
int __thiscall CMdSpi::SubscribeMarketData(_DWORD); // weak

int __thiscall CMdSpi::CMdSpi(void *this, const char *a2, const char *a3, const char *Source, const char *a5, int a6)
{
  CThostFtdcMdSpi::CThostFtdcMdSpi(this);
  IMarketDataReader::IMarketDataReader((char *)v8 + 4, 1);
}

int __thiscall CInstrumentData::SetDataOver(int this)
{
  int result; // eax@1

  result = this;
  *(_BYTE *)(this + 112) = 1;
  return result;
}


