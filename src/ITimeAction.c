
int __thiscall ITimeAction::ITimeAction(void *this);
int __thiscall ITimeAction::_scalar_deleting_destructor_(void *this, char a2);
int __thiscall ITimeAction::_ITimeAction(void *this);
int __thiscall ITimeAction::DoAction(int this, int a2, int a3);
int __thiscall ITimeAction::ReInit(int this);
int __thiscall ITimeAction::Run(void *this, int a2);
int __fastcall ITimeAction::Run(void *a1, int a2, int a3, int a4, int a5);
int __thiscall ITimeAction::IsTickValid(void *this, int a2);
int __thiscall ITimeAction::Run(void *this, int a2, int a3, int a4);
int __thiscall ITimeAction::Run(void *this, int a2, int a3, int a4);
int __thiscall ITimeAction::RegisterRelatedInstrument(void *this, const char *Src);


ITimeAction::ITimeAction()
{
    v5 = this;

    this->currentTick=-1;
    pthread_spin_init(this->lock, 0);
	//vector<string> InstrumentIDs; ????
	ITickValidator & TickValidator;
    this->TickValidator=&AlwaysTrueTickValidator;
    return;
}

ITimeAction::~ITimeAction()
{
  pthread_spin_destroy(this->lock);
}

void ITimeAction::DoAction(long Tick, const char *Instrument)
{
    if(this->currentTick < Tick) {
        this->currentTick=Tick;
    }
    return;
}

void ITimeAction::ReInit()
{
    this->currentTick=-1;
    return;
}

	inline long GetCurrentTick() const{return currentTick;};
	inline bool IsTickValid(long Tick) const {return TickValidator.IsTickValid(Tick,currentTick);};
	void Run(long MaxTick);
	void Run(const long * TickQueue,long TickQueueMaxIndex, const CTickMapping & TradeTime);
	void Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const CTickMapping & TradeTime);
	void Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const vector<const CTickMapping *> & VectorTradeTime);
	void RegisterRelatedInstrument(const char * InstrumentID);
	inline const vector<string> & GetRelatedInstrument() const{return InstrumentIDs;};
	inline void DoActionWithLock(long Tick, const char * Instrument = NULL)
	void SetTickValidator(ITickValidator & tickvalidator){TickValidator = tickvalidator;};

//----- (000002EC) --------------------------------------------------------
void ITimeAction::Run(long MaxTick)
{
  //a2=MaxTick;
  int v2; // edx@1
  int v3; // ecx@1
  char v5; // [sp+Ch] [bp-D8h]@1
  int i; // [sp+D0h] [bp-14h]@1
  void *v7; // [sp+DCh] [bp-8h]@1

  memset(&v5, -858993460, 0xD8u);
  v7 = this;
  i = -1;
  (*(void (__thiscall **)(_DWORD, signed int))(**((_DWORD **)v7 + 7) + 4))(*((_DWORD *)v7 + 7), -1);
  for ( i = _RTC_CheckEsp(v3, v2); i < a2; i = _RTC_CheckEsp(v3, v2) )
  {
    (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, i, 0);
    _RTC_CheckEsp(v3, v2);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v7 + 7) + 4))(*((_DWORD *)v7 + 7), i);
  }
  return _RTC_CheckEsp(v3, v2);
}

//----- (0000039C) --------------------------------------------------------
void ITimeAction::Run(const long * TickQueue, long TickQueueMaxIndex,
        const CTickMapping &TradeTime)
{
    /*
       a3=TickQueue;
       a4=TickQueueMaxIndex;
       a5=TradeTime;
       int v5; // eax@3
       unsigned __int8 v6; // al@3
       char v8; // [sp+Ch] [bp-E4h]@1
       int v9; // [sp+D0h] [bp-20h]@3
       int i; // [sp+DCh] [bp-14h]@1
       void *v11; // [sp+E8h] [bp-8h]@1
       v11 = a1;

       for(int i=0;i<=TickQueueMaxIndex;++i){
       v5=CTickMapping::TickMapping(TradeTime,TickQueue[i]);
       v6=ITimeAction::IsTickValid(v5);
       if(v6) {
    //call some thing (v11,v9,0);
    }
    }
    */
}
//----- (00000438) --------------------------------------------------------
int __thiscall ITimeAction::IsTickValid(void *this, int a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  int v4; // edx@1
  int v5; // ecx@1
  char v7; // [sp+Ch] [bp-CCh]@1
  void *v8; // [sp+D0h] [bp-8h]@1

  memset(&v7, -858993460, 0xCCu);
  v8 = this;
  (***((void (__thiscall ****)(_DWORD, _DWORD, _DWORD))v8 + 7))(*((_DWORD *)v8 + 7), a2, *((_DWORD *)v8 + 1));
  _RTC_CheckEsp(v3, v2);
  return _RTC_CheckEsp(v5, v4);
}
// 7E64: using guessed type int __fastcall _RTC_CheckEsp(_DWORD, _DWORD);

void ITimeAction::Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const CTickMapping & TradeTime)
{
    int v23=VectorTickQueue.size();
    int v20=0;
    int *v15=new (4*v23);
    int v17=0;
    /*
    while(v20<v23){
    }*/
    memset(v15,0x0,v23);

    while(1){
        //
        while(v17<v23){
        }

        v8 = CTickMapping::TickMapping(a4, v18);
        //call something
    }
}

void ITimeAction::Run(const vector<const long *> & VectorTickQueue, const vector<long>  & VectorTickQueueMaxIndex, const vector<const CTickMapping *> & VectorTradeTime)
{
    int v23=VectorTickQueue.size();
    int v20=0;
    int *v15=new (4*v23);
    int v17=0;
    /*
       while(v20<v23){
       }*/
    memset(v15,0x0,v23);

    while(1){
        //
        while(v17<v23){
        }
        v10 = CTickMapping::TickMapping(*(_DWORD *)v9, v8);
        //call something
    }
}

void ITimeAction::RegisterRelatedInstrument(const char *Src)
{
    while(1){
        //alloc
    }
}


