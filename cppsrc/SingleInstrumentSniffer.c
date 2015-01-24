int __thiscall CSingleInstrumentSniffer::CSingleInstrumentSniffer(void *this, int a2, int a3, int a4)
{
  int v4; // edx@1
  char v6; // [sp+Ch] [bp-D8h]@1
  void *v7; // [sp+D0h] [bp-14h]@1
  int v8; // [sp+E0h] [bp-4h]@1
  int v9; // [sp+E4h] [bp+0h]@1

  memset(&v6, -858993460, 0xCCu);
  v7 = this;
  CDataSniffer::CDataSniffer(a3, a4);
  v8 = 0;
  *(_DWORD *)v7 = &CSingleInstrumentSniffer::_vftable_;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    (char *)v7 + 60,
    a2);
  LOBYTE(v8) = 1;
  std::vector<ITimeAction___std::allocator<ITimeAction__>>::vector<ITimeAction___std::allocator<ITimeAction__>>((char *)v7 + 92);
  LOBYTE(v8) = 2;
  std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>((char *)v7 + 112);
  LOBYTE(v8) = 3;
  std::vector<ITrader___std::allocator<ITrader__>>::vector<ITrader___std::allocator<ITrader__>>((char *)v7 + 132);
  return _RTC_CheckEsp((unsigned int)&v9 ^ __security_cookie, v4);
}

int __thiscall CSingleInstrumentSniffer::ReInit(int this)
{
  int v1; // edx@3
  int v2; // ecx@3
  int v3; // edx@6
  int v4; // ecx@6
  int v5; // edx@7
  int v6; // ST04_4@7
  unsigned int v8; // [sp-4h] [bp-180h]@1
  int v9; // [sp+Ch] [bp-170h]@1
  int v10; // [sp+10h] [bp-16Ch]@2
  char v11; // [sp+18h] [bp-164h]@3
  char v12; // [sp+2Fh] [bp-14Dh]@2
  char v13; // [sp+38h] [bp-144h]@2
  char v14; // [sp+4Ch] [bp-130h]@6
  char v15; // [sp+63h] [bp-119h]@5
  char v16; // [sp+6Ch] [bp-110h]@5
  char v17; // [sp+140h] [bp-3Ch]@4
  char v18; // [sp+154h] [bp-28h]@1
  int v19; // [sp+168h] [bp-14h]@1
  int v20; // [sp+178h] [bp-4h]@1
  int v21; // [sp+17Ch] [bp+0h]@1

  memset(&v9, -858993460, 0x164u);
  v8 = (unsigned int)&v21 ^ __security_cookie;
  v19 = this;
  *(_BYTE *)(this + 44) = 0;
  IEventQueue::ReInit(v19);
  std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin(v19 + 92, &v18);
  v20 = 0;
  while ( 1 )
  {
    v10 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end(v19 + 92, &v13);
    v9 = v10;
    LOBYTE(v20) = 1;
    v12 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v18, v10);
    LOBYTE(v20) = 0;
    std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v13);
    if ( !v12 )
      break;
    v10 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v18);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
    _RTC_CheckEsp(v2, v1);
    std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v18, &v11, 0);
    std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v11);
  }
  v20 = -1;
  std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v18);
  std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin(v19 + 112, &v17);
  v20 = 2;
  while ( 1 )
  {
    v10 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end(v19 + 112, &v16);
    v9 = v10;
    LOBYTE(v20) = 3;
    v15 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(&v17, v10);
    LOBYTE(v20) = 2;
    std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v16);
    if ( !v15 )
      break;
    v10 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v17);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
    _RTC_CheckEsp(v4, v3);
    std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v17, &v14, 0);
    std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v14);
  }
  v20 = -1;
  std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v17);
  v6 = v5;
  _RTC_CheckStackVars(&v21, &_LN19);
  return _RTC_CheckEsp(v8, v6);
}

int __fastcall CSingleInstrumentSniffer::AddIndexCalculator(int a1, int a2, int a3)
{
  char v4; // [sp+Ch] [bp-CCh]@1
  int v5; // [sp+D0h] [bp-8h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = a1;
  if ( a3 )
    std::vector<ITimeAction___std::allocator<ITimeAction__>>::push_back(v5 + 92, (int)&a3);
  return _RTC_CheckEsp(a1, a2);
}

int __fastcall CSingleInstrumentSniffer::AddStrategy(int a1, int a2, int a3)
{
  int v3; // eax@7
  int v4; // eax@7
  int v5; // edx@7
  int v6; // ecx@7
  int v7; // eax@9
  int v8; // eax@10
  int v9; // ST04_4@16
  int v11; // [sp+Ch] [bp-114h]@1
  int v12; // [sp+10h] [bp-110h]@7
  char v13; // [sp+1Bh] [bp-105h]@7
  char v14; // [sp+24h] [bp-FCh]@7
  char v15; // [sp+F8h] [bp-28h]@7
  int v16; // [sp+10Ch] [bp-14h]@1
  int v17; // [sp+11Ch] [bp-4h]@7
  int v18; // [sp+120h] [bp+0h]@16

  memset(&v11, -858993460, 0x108u);
  v16 = a1;
  if ( a3 )
  {
    if ( CDataSniffer::GetCommunicationMode(v16) == 1 )
    {
      if ( IOrderStatusReceiver::GetCommunicationMode(a3) == 1 )
        IOrderStatusReceiver::SetEventQueue(a3, v16);
    }
    else
    {
      IOrderStatusReceiver::SetCommunicationMode(a3, 0);
    }
    v3 = ITimeAction::GetRelatedInstrument((void *)a3);
    std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::begin(
      v3,
      &v15);
    v17 = 0;
    v4 = ITimeAction::GetRelatedInstrument((void *)a3);
    v12 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::end(
            v4,
            &v14);
    v11 = v12;
    LOBYTE(v17) = 1;
    v13 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
            &v15,
            v12);
    LOBYTE(v17) = 0;
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v14);
    if ( v13 )
    {
      if ( (unsigned __int8)std::operator__<char_std::char_traits<char>_std::allocator<char>>(
                              v6,
                              v5,
                              v16 + 60,
                              &_string_) )
      {
        v7 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::operator_((void *)(v16 + 60), v7);
        std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::push_back(v16 + 112, (int)&a3);
      }
      else
      {
        v8 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
        if ( (unsigned __int8)std::operator__<char_std::char_traits<char>_std::allocator<char>>((void *)(v16 + 60), v8) )
          std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::push_back(v16 + 112, (int)&a3);
        else
          printf("The related instrument of adding strategy is not consistent with the former one.\n");
      }
    }
    else
    {
      printf("Please Register the related instrument with the strategy!\n");
    }
    v17 = -1;
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v15);
  }
  v9 = a2;
  _RTC_CheckStackVars(&v18, &_LN18_0);
  return _RTC_CheckEsp((unsigned int)&v18 ^ __security_cookie, v9);
}

int __thiscall ITimeAction::GetRelatedInstrument(void *this)
{
  return (int)((char *)this + 8);
}

int __thiscall IOrderStatusReceiver::SetCommunicationMode(int this, int a2)
{
  int result; // eax@1

  result = this;
  *(_DWORD *)(this + 40) = a2;
  return result;
}

int __thiscall IOrderStatusReceiver::GetCommunicationMode(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 40);
}

int __thiscall IOrderStatusReceiver::SetEventQueue(int this, int a2)
{
  int result; // eax@1

  result = this;
  *(_DWORD *)(this + 44) = a2;
  return result;
}

int __thiscall CDataSniffer::GetCommunicationMode(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 56);
}

int __fastcall CSingleInstrumentSniffer::AddTrader(int a1, int a2, int a3)
{
  char v4; // [sp+Ch] [bp-CCh]@1
  int v5; // [sp+D0h] [bp-8h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = a1;
  if ( a3 )
    std::vector<ITrader___std::allocator<ITrader__>>::push_back(v5 + 132, (int)&a3);
  return _RTC_CheckEsp(a1, a2);
}

int __thiscall CSingleInstrumentSniffer::Execute(void *this)
{
  int v1; // eax@1
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // eax@5
  int v5; // edx@8
  int v6; // ecx@8
  int v7; // eax@14
  int v8; // ST04_4@14
  int v9; // eax@14
  int v10; // edx@15
  int v11; // ecx@15
  int v12; // eax@20
  int v13; // eax@21
  int v14; // ST04_4@21
  int v15; // eax@21
  int v16; // edx@22
  int v17; // ecx@22
  int v18; // ST04_4@26
  unsigned int v20; // [sp-4h] [bp-228h]@1
  int v21; // [sp+Ch] [bp-218h]@1
  int v22; // [sp+10h] [bp-214h]@7
  char v23; // [sp+18h] [bp-20Ch]@8
  char v24; // [sp+2Fh] [bp-1F5h]@7
  char v25; // [sp+38h] [bp-1ECh]@7
  char v26; // [sp+4Ch] [bp-1D8h]@17
  char v27; // [sp+63h] [bp-1C1h]@11
  char v28; // [sp+6Ch] [bp-1B8h]@11
  char v29; // [sp+80h] [bp-1A4h]@23
  char v30; // [sp+97h] [bp-18Dh]@19
  char v31; // [sp+A0h] [bp-184h]@19
  int v32; // [sp+174h] [bp-B0h]@21
  int v33; // [sp+180h] [bp-A4h]@21
  char v34; // [sp+18Ch] [bp-98h]@18
  int v35; // [sp+1A0h] [bp-84h]@14
  int v36; // [sp+1ACh] [bp-78h]@14
  int v37; // [sp+1B8h] [bp-6Ch]@12
  char v38; // [sp+1C4h] [bp-60h]@10
  int v39; // [sp+1D8h] [bp-4Ch]@10
  char v40; // [sp+1E4h] [bp-40h]@6
  int v41; // [sp+1F8h] [bp-2Ch]@3
  int v42; // [sp+204h] [bp-20h]@1
  void *v43; // [sp+210h] [bp-14h]@1
  int v44; // [sp+220h] [bp-4h]@6
  int v45; // [sp+224h] [bp+0h]@1

  memset(&v21, -858993460, 0x20Cu);
  v20 = (unsigned int)&v45 ^ __security_cookie;
  v43 = this;
  v1 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)this + 60));
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v43 + 10) + 20))(*((_DWORD *)v43 + 10), v1);
  v42 = _RTC_CheckEsp(v2, v3);
  if ( v42 )
  {
    v41 = v42;
    while ( !*((_BYTE *)v43 + 44) )
    {
      v4 = CInstrumentData::GetCurrentIndex(v41);
      if ( *((_DWORD *)v43 + 9) == v4 )
      {
        std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin((int)((char *)v43 + 112), &v40);
        v44 = 0;
        while ( 1 )
        {
          v22 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end((int)((char *)v43 + 112), &v25);
          v21 = v22;
          LOBYTE(v44) = 1;
          v24 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(
                  &v40,
                  v22);
          LOBYTE(v44) = 0;
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v25);
          if ( !v24 )
            break;
          v22 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v40);
          (*(void (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v22 + 8))(v22, -1, 0);
          _RTC_CheckEsp(v6, v5);
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v40, &v23, 0);
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v23);
        }
        v44 = -1;
        std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v40);
      }
      else
      {
        v39 = CInstrumentData::GetCurrentIndex(v41);
        std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin((int)((char *)v43 + 92), &v38);
        v44 = 2;
        while ( 1 )
        {
          v22 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end((int)((char *)v43 + 92), &v28);
          v21 = v22;
          LOBYTE(v44) = 3;
          v27 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v38, v22);
          LOBYTE(v44) = 2;
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v28);
          if ( !v27 )
            break;
          v37 = *((_DWORD *)v43 + 9);
          while ( v37 != v39 )
          {
            ++v37;
            v7 = CInstrumentData::GetTickQueue(v41);
            v36 = *(_DWORD *)(v7 + 4 * v37);
            v35 = CTickMapping::TickMapping(*(_DWORD *)(v41 + 8), v36);
            v8 = v35;
            v9 = std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v38);
            if ( (unsigned __int8)ITimeAction::IsTickValid(*(void **)v9, v8) )
            {
              v22 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v38);
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v22 + 8))(v22, v35, 0);
              _RTC_CheckEsp(v11, v10);
            }
          }
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v38, &v26, 0);
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v26);
        }
        v44 = -1;
        std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v38);
        std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin((int)((char *)v43 + 112), &v34);
        v44 = 4;
        while ( 1 )
        {
          v22 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end((int)((char *)v43 + 112), &v31);
          v21 = v22;
          LOBYTE(v44) = 5;
          v30 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(
                  &v34,
                  v22);
          LOBYTE(v44) = 4;
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v31);
          if ( !v30 )
            break;
          v12 = CInstrumentData::GetCurrentIndex(v41);
          if ( v39 == v12 )
          {
            v13 = CInstrumentData::GetTickQueue(v41);
            v33 = *(_DWORD *)(v13 + 4 * v39);
            v32 = CTickMapping::TickMapping(*(_DWORD *)(v41 + 8), v33);
            v14 = v32;
            v15 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v34);
            if ( (unsigned __int8)ITimeAction::IsTickValid(*(void **)v15, v14) )
            {
              v22 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v34);
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v22 + 8))(v22, v32, 0);
              _RTC_CheckEsp(v17, v16);
            }
          }
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v34, &v29, 0);
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v29);
        }
        v44 = -1;
        std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v34);
        *((_DWORD *)v43 + 9) = v39;
      }
    }
  }
  else
  {
    printf("Market Data is not initialized!\n");
  }
  v18 = v3;
  _RTC_CheckStackVars(&v45, &_LN36);
  return _RTC_CheckEsp(v20, v18);
}

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

int __thiscall CInstrumentData::GetTickQueue(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 116);
}

int __thiscall CInstrumentData::GetCurrentIndex(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 120);
}

int __thiscall CSingleInstrumentSniffer2::CSingleInstrumentSniffer2(void *this, int a2, int a3)
{
  int v3; // eax@1
  int v4; // edx@1
  int v5; // ecx@1
  int v6; // eax@3
  int v7; // edx@2
  unsigned int v9; // [sp-4h] [bp-F4h]@1
  char v10; // [sp+Ch] [bp-E4h]@1
  void *v11; // [sp+D0h] [bp-20h]@1
  void *v12; // [sp+DCh] [bp-14h]@1
  int v13; // [sp+ECh] [bp-4h]@1
  int v14; // [sp+F0h] [bp+0h]@1

  memset(&v10, -858993460, 0xD8u);
  v9 = (unsigned int)&v14 ^ __security_cookie;
  v12 = this;
  CSingleInstrumentSniffer::CSingleInstrumentSniffer(this, a2, a3, 1);
  v13 = 0;
  *(_DWORD *)v12 = &CSingleInstrumentSniffer2::_vftable_;
  v3 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 20))(a3, v3);
  v11 = (void *)_RTC_CheckEsp(v5, v4);
  if ( !v11 )
  {
    v6 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)v12 + 60));
    printf("Çë³", v6);
    exit(1);
  }
  CInstrumentData::AddUpdateReceiver(v11, (char)v12);
  pthread_mutex_init((char *)v12 + 4, 0);
  pthread_cond_init((char *)v12 + 8, 0);
  v13 = -1;
  return _RTC_CheckEsp(v9, v7);
}


int __thiscall CInstrumentData::AddUpdateReceiver(void *this, char a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  char v5; // [sp+Ch] [bp-E4h]@1
  char v6; // [sp+10h] [bp-E0h]@1
  void *v7; // [sp+E8h] [bp-8h]@1

  memset(&v5, -858993460, 0xE4u);
  v7 = this;
  std::_Tree<std::_Tset_traits<IEventQueue___std::less<IEventQueue__>_std::allocator<IEventQueue__>_0>>::insert(
    (int)((char *)this + 128),
    &v6,
    (int)&a2);
  std::pair<std::_Tree<std::_Tset_traits<IEventQueue___std::less<IEventQueue__>_std::allocator<IEventQueue__>_0>>::iterator_bool>::_pair<std::_Tree<std::_Tset_traits<IEventQueue___std::less<IEventQueue__>_std::allocator<IEventQueue__>_0>>::iterator_bool>(&v6);
  return _RTC_CheckEsp(v3, v2);
}

int __thiscall CSingleInstrumentSniffer2::SetOver(int this)
{
  int v1; // edx@1
  int v2; // ecx@1
  char v4; // [sp+Ch] [bp-CCh]@1
  int v5; // [sp+D0h] [bp-8h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = this;
  *(_BYTE *)(this + 44) = 1;
  pthread_cond_signal(v5 + 8);
  return _RTC_CheckEsp(v2, v1);
}
int __thiscall CSingleInstrumentSniffer2::Execute(void *this)
{
  int v1; // eax@1
  int v2; // edx@1
  int v3; // ecx@1
  int v4; // edx@2
  int v5; // eax@9
  int v6; // edx@9
  int v7; // ecx@9
  int v8; // ST04_4@12
  int v9; // eax@12
  int v10; // eax@13
  int v11; // edx@13
  int v12; // ecx@13
  int v13; // ST04_4@17
  int v14; // eax@17
  int v15; // eax@18
  int v16; // eax@19
  int v17; // edx@19
  int v18; // ecx@19
  int v19; // ST04_4@20
  int v20; // ST00_4@20
  int v21; // eax@20
  int v22; // edx@25
  int v23; // ecx@25
  int v24; // ST04_4@29
  unsigned int v26; // [sp-4h] [bp-1A4h]@1
  int v27; // [sp+Ch] [bp-194h]@1
  int v28; // [sp+10h] [bp-190h]@11
  char v29; // [sp+18h] [bp-188h]@14
  char v30; // [sp+2Fh] [bp-171h]@11
  char v31; // [sp+38h] [bp-168h]@11
  char v32; // [sp+4Ch] [bp-154h]@21
  char v33; // [sp+63h] [bp-13Dh]@16
  char v34; // [sp+6Ch] [bp-134h]@16
  char v35; // [sp+140h] [bp-60h]@15
  char v36; // [sp+154h] [bp-4Ch]@10
  int v37; // [sp+168h] [bp-38h]@10
  int v38; // [sp+174h] [bp-2Ch]@3
  int v39; // [sp+180h] [bp-20h]@1
  void *v40; // [sp+18Ch] [bp-14h]@1
  int v41; // [sp+19Ch] [bp-4h]@10
  int v42; // [sp+1A0h] [bp+0h]@1

  memset(&v27, -858993460, 0x188u);
  v26 = (unsigned int)&v42 ^ __security_cookie;
  v40 = this;
  v1 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)this + 60));
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v40 + 10) + 20))(*((_DWORD *)v40 + 10), v1);
  v39 = _RTC_CheckEsp(v3, v2);
  if ( v39 )
  {
    v38 = v39;
    pthread_mutex_lock((char *)v40 + 4);
    while ( !*((_BYTE *)v40 + 44) )
    {
      if ( *((_DWORD *)v40 + 9) == *((_DWORD *)v40 + 8) )
      {
        if ( (unsigned __int8)CInstrumentData::IsDataOver(v26) )
        {
          (*(void (__thiscall **)(void *))(*(_DWORD *)v40 + 28))(v40);
          _RTC_CheckEsp(v23, v22);
        }
        else
        {
          pthread_cond_wait((char *)v40 + 8, (char *)v40 + 4);
        }
      }
      else
      {
        ++*((_DWORD *)v40 + 9);
        if ( *((_DWORD *)v40 + 9) == *((_DWORD *)v40 + 4) )
          *((_DWORD *)v40 + 9) = 0;
        if ( *(_DWORD *)(*((_DWORD *)v40 + 7) + 4 * *((_DWORD *)v40 + 9)) )
        {
          v5 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)v40 + 60));
          (*(void (__thiscall **)(_DWORD, signed int, int))(**(_DWORD **)(*((_DWORD *)v40 + 7) + 4
                                                                                               * *((_DWORD *)v40 + 9))
                                                          + 8))(
            *(_DWORD *)(*((_DWORD *)v40 + 7) + 4 * *((_DWORD *)v40 + 9)),
            -1,
            v5);
          _RTC_CheckEsp(v7, v6);
        }
        else
        {
          v37 = *(_DWORD *)(*((_DWORD *)v40 + 5) + 4 * *((_DWORD *)v40 + 9));
          std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin((int)((char *)v40 + 92), &v36);
          v41 = 0;
          while ( 1 )
          {
            v28 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end((int)((char *)v40 + 92), &v31);
            v27 = v28;
            LOBYTE(v41) = 1;
            v30 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v36, v28);
            LOBYTE(v41) = 0;
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v31);
            if ( !v30 )
              break;
            v8 = v37;
            v9 = std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v36);
            if ( (unsigned __int8)ITimeAction::IsTickValid(*(void **)v9, v8) )
            {
              v28 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v36);
              v10 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)v40 + 60));
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 8))(v28, v37, v10);
              _RTC_CheckEsp(v12, v11);
            }
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v36, &v29, 0);
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v29);
          }
          v41 = -1;
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v36);
          std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin((int)((char *)v40 + 112), &v35);
          v41 = 2;
          while ( 1 )
          {
            v28 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end(
                    (int)((char *)v40 + 112),
                    &v34);
            v27 = v28;
            LOBYTE(v41) = 3;
            v33 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(
                    &v35,
                    v28);
            LOBYTE(v41) = 2;
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v34);
            if ( !v33 )
              break;
            v13 = v37;
            v14 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v35);
            if ( (unsigned __int8)ITimeAction::IsTickValid(*(void **)v14, v13) )
            {
              v15 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v35);
              if ( IOrderStatusReceiver::GetCommunicationMode(*(_DWORD *)v15) == 1 )
              {
                v28 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v35);
                v16 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)v40 + 60));
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 8))(v28, v37, v16);
                _RTC_CheckEsp(v18, v17);
              }
              else
              {
                v19 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str((int)((char *)v40 + 60));
                v20 = v37;
                v21 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v35);
                ITimeAction::DoActionWithLock(*(void **)v21, v20, v19);
              }
            }
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v35, &v32, 0);
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v32);
          }
          v41 = -1;
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v35);
        }
      }
    }
    pthread_mutex_unlock((char *)v40 + 4);
  }
  else
  {
    printf("Market Data is not initialized!\n");
  }
  v24 = v4;
  _RTC_CheckStackVars(&v42, &_LN33_0);
  return _RTC_CheckEsp(v26, v24);
}

int __thiscall ITimeAction::DoActionWithLock(void *this, int a2, int a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // edx@1
  int v6; // ecx@1
  char v8; // [sp+Ch] [bp-CCh]@1
  void *v9; // [sp+D0h] [bp-8h]@1

  memset(&v8, -858993460, 0xCCu);
  v9 = this;
  pthread_spin_lock((char *)this + 32);
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v9 + 8))(v9, a2, a3);
  _RTC_CheckEsp(v4, v3);
  pthread_spin_unlock((char *)v9 + 32);
  return _RTC_CheckEsp(v6, v5);
}
int __cdecl CreateSingleInstrumentSniffer(int a1, int a2, int a3)
{
  int v3; // edx@5
  int v5; // [sp+Ch] [bp-100h]@1
  int v6; // [sp+14h] [bp-F8h]@5
  void *v7; // [sp+20h] [bp-ECh]@2
  int v8; // [sp+2Ch] [bp-E0h]@9
  void *v9; // [sp+38h] [bp-D4h]@6
  int v10; // [sp+108h] [bp-4h]@2
  int v11; // [sp+10Ch] [bp+0h]@10

  memset(&v5, -858993460, 0xF4u);
  if ( a3 )
  {
    v9 = operator new(0x98u);
    v10 = 1;
    if ( v9 )
      v5 = CSingleInstrumentSniffer2::CSingleInstrumentSniffer2(v9, a1, a2);
    else
      v5 = 0;
    v3 = v5;
    v8 = v5;
    v10 = -1;
  }
  else
  {
    v7 = operator new(0x98u);
    v10 = 0;
    if ( v7 )
      v5 = CSingleInstrumentSniffer::CSingleInstrumentSniffer(v7, a1, a2, 0);
    else
      v5 = 0;
    v3 = v5;
    v6 = v5;
    v10 = -1;
  }
  return _RTC_CheckEsp((unsigned int)&v11 ^ __security_cookie, v3);
}
