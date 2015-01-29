
extern int netdb_category; // weak
extern int misc_category; // weak
extern int addrinfo_category; // weak
extern int native_ecat; // weak
extern int system_category; // weak

int __thiscall CDataSniffer::CDataSniffer(void *this, int a2, int a3);
int __thiscall CDataSniffer::_scalar_deleting_destructor_(void *this, char a2);
int __thiscall CDataSniffer::_CDataSniffer(void *this);
int __cdecl CDataSniffer::Execute(int a1);

CDataSniffer::CDataSniffer(IMarketDataReader & md, int commmode = Signalling)
{
  int v3; // edx@1
  char v5; // [sp+Ch] [bp-CCh]@1
  void *v6; // [sp+D0h] [bp-8h]@1
  v6 = this;
  IEventQueue::IEventQueue(this, 200);
}


    static void* Execute(void* param);	

void CDataSniffer::Execute()
{
  //this->Excute
}
