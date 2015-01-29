int __thiscall CMultipleInstrumentSniffer::CMultipleInstrumentSniffer(void *this, int a2, int a3)
{
  int v3; // edx@1
  char v5; // [sp+Ch] [bp-D8h]@1
  void *v6; // [sp+D0h] [bp-14h]@1
  int v7; // [sp+E0h] [bp-4h]@1
  int v8; // [sp+E4h] [bp+0h]@1

  memset(&v5, -858993460, 0xCCu);
  v6 = this;
  CDataSniffer::CDataSniffer(a2, a3);
  v7 = 0;
  *(_DWORD *)v6 = &CMultipleInstrumentSniffer::_vftable_;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>>((char *)v6 + 60);
  LOBYTE(v7) = 1;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>>((char *)v6 + 88);
  LOBYTE(v7) = 2;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>>((char *)v6 + 116);
  LOBYTE(v7) = 3;
  std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>((char *)v6 + 144);
  LOBYTE(v7) = 4;
  std::vector<ITrader___std::allocator<ITrader__>>::vector<ITrader___std::allocator<ITrader__>>((char *)v6 + 164);
  return _RTC_CheckEsp((unsigned int)&v8 ^ __security_cookie, v3);
}
int __thiscall CMultipleInstrumentSniffer::ReInit(int this)
{
  int v1; // eax@6
  int v2; // eax@7
  int v3; // edx@8
  int v4; // ecx@8
  int v5; // eax@12
  int v6; // eax@13
  int v7; // edx@14
  int v8; // ecx@14
  int v9; // edx@16
  int v10; // ST04_4@16
  unsigned int v12; // [sp-4h] [bp-258h]@1
  int v13; // [sp+Ch] [bp-248h]@1
  int v14; // [sp+10h] [bp-244h]@2
  char v15; // [sp+18h] [bp-23Ch]@3
  char v16; // [sp+2Fh] [bp-225h]@2
  char v17; // [sp+38h] [bp-21Ch]@2
  char v18; // [sp+4Ch] [bp-208h]@9
  char v19; // [sp+63h] [bp-1F1h]@5
  char v20; // [sp+6Ch] [bp-1E8h]@5
  char v21; // [sp+80h] [bp-1D4h]@8
  char v22; // [sp+97h] [bp-1BDh]@7
  char v23; // [sp+A0h] [bp-1B4h]@7
  char v24; // [sp+B4h] [bp-1A0h]@15
  char v25; // [sp+CBh] [bp-189h]@11
  char v26; // [sp+D4h] [bp-180h]@11
  char v27; // [sp+E8h] [bp-16Ch]@14
  char v28; // [sp+FFh] [bp-155h]@13
  char v29; // [sp+108h] [bp-14Ch]@13
  char v30; // [sp+1DCh] [bp-78h]@12
  char v31; // [sp+1F0h] [bp-64h]@10
  char v32; // [sp+204h] [bp-50h]@6
  char v33; // [sp+218h] [bp-3Ch]@4
  char v34; // [sp+22Ch] [bp-28h]@1
  int v35; // [sp+240h] [bp-14h]@1
  int v36; // [sp+250h] [bp-4h]@1
  int v37; // [sp+254h] [bp+0h]@1

  memset(&v13, -858993460, 0x23Cu);
  v12 = (unsigned int)&v37 ^ __security_cookie;
  v35 = this;
  *(_BYTE *)(this + 44) = 0;
  IEventQueue::ReInit(v35);
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::begin(
    v35 + 60,
    &v34);
  v36 = 0;
  while ( 1 )
  {
    v14 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::end(
            v35 + 60,
            &v17);
    v13 = v14;
    LOBYTE(v36) = 1;
    v16 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::const_iterator::operator__(
            &v34,
            v14);
    LOBYTE(v36) = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v17);
    if ( !v16 )
      break;
    *(_DWORD *)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v34)
              + 32) = -1;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator__(
      (int)&v34,
      &v15,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v15);
  }
  v36 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v34);
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::begin(
    v35 + 88,
    &v33);
  v36 = 2;
  while ( 1 )
  {
    v14 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::end(
            v35 + 88,
            &v20);
    v13 = v14;
    LOBYTE(v36) = 3;
    v19 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::const_iterator::operator__(
            &v33,
            v14);
    LOBYTE(v36) = 2;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v20);
    if ( !v19 )
      break;
    v1 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v33);
    std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin(v1 + 32, &v32);
    LOBYTE(v36) = 4;
    while ( 1 )
    {
      v2 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v33);
      v14 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end(v2 + 32, &v23);
      v13 = v14;
      LOBYTE(v36) = 5;
      v22 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v32, v14);
      LOBYTE(v36) = 4;
      std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v23);
      if ( !v22 )
        break;
      v14 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v32);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
      _RTC_CheckEsp(v4, v3);
      std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v32, &v21, 0);
      std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v21);
    }
    LOBYTE(v36) = 2;
    std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v32);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator__(
      (int)&v33,
      &v18,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v18);
  }
  v36 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v33);
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::begin(
    v35 + 116,
    &v31);
  v36 = 6;
  while ( 1 )
  {
    v14 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::end(
            v35 + 116,
            &v26);
    v13 = v14;
    LOBYTE(v36) = 7;
    v25 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::const_iterator::operator__(
            &v31,
            v14);
    LOBYTE(v36) = 6;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v26);
    if ( !v25 )
      break;
    v5 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v31);
    std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin(v5 + 32, &v30);
    LOBYTE(v36) = 8;
    while ( 1 )
    {
      v6 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v31);
      v14 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end(v6 + 32, &v29);
      v13 = v14;
      LOBYTE(v36) = 9;
      v28 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(&v30, v14);
      LOBYTE(v36) = 8;
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v29);
      if ( !v28 )
        break;
      v14 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v30);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
      _RTC_CheckEsp(v8, v7);
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v30, &v27, 0);
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v27);
    }
    LOBYTE(v36) = 6;
    std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v30);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator__(
      (int)&v31,
      &v24,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v24);
  }
  v36 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v31);
  v10 = v9;
  _RTC_CheckStackVars(&v37, &_LN40);
  return _RTC_CheckEsp(v12, v10);
}

int __thiscall CMultipleInstrumentSniffer::AddIndexCalculator(void *this, void *a2)
{
  int v2; // eax@1
  int v3; // eax@2
  int v4; // eax@3
  int v5; // eax@3
  int v6; // eax@3
  int v7; // edx@4
  int v8; // ST04_4@4
  int v10; // [sp+Ch] [bp-128h]@1
  int v11; // [sp+10h] [bp-124h]@2
  char v12; // [sp+18h] [bp-11Ch]@3
  char v13; // [sp+2Fh] [bp-105h]@2
  char v14; // [sp+38h] [bp-FCh]@2
  char v15; // [sp+10Ch] [bp-28h]@1
  void *v16; // [sp+120h] [bp-14h]@1
  int v17; // [sp+130h] [bp-4h]@1
  int v18; // [sp+134h] [bp+0h]@4

  memset(&v10, -858993460, 0x11Cu);
  v16 = this;
  v2 = (int)ITimeAction::GetRelatedInstrument(a2);
  std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::begin(
    v2,
    &v15);
  v17 = 0;
  while ( 1 )
  {
    v3 = (int)ITimeAction::GetRelatedInstrument(a2);
    v11 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::end(
            v3,
            &v14);
    v10 = v11;
    LOBYTE(v17) = 1;
    v13 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
            &v15,
            v11);
    LOBYTE(v17) = 0;
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v14);
    if ( !v13 )
      break;
    v4 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
    v5 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>>::operator__(
           (int)((char *)v16 + 88),
           v4);
    std::vector<ITimeAction___std::allocator<ITimeAction__>>::push_back(v5, (int)&a2);
    v6 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
    *(_DWORD *)std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>>::operator__(
                 (int)((char *)v16 + 60),
                 v6) = -1;
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
      (int)&v15,
      &v12,
      0);
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v12);
  }
  v17 = -1;
  std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v15);
  v8 = v7;
  _RTC_CheckStackVars(&v18, &_LN12);
  return _RTC_CheckEsp((unsigned int)&v18 ^ __security_cookie, v8);
}

char *__thiscall ITimeAction::GetRelatedInstrument(void *this)
{
  return (char *)this + 8;
}

int __fastcall CMultipleInstrumentSniffer::AddStrategy(int a1, int a2, int a3)
{
  int v3; // eax@7
  int v4; // eax@8
  int v5; // eax@9
  int v6; // eax@9
  int v7; // eax@9
  int v8; // ST04_4@11
  int v10; // [sp+Ch] [bp-128h]@1
  int v11; // [sp+10h] [bp-124h]@8
  char v12; // [sp+18h] [bp-11Ch]@9
  char v13; // [sp+2Fh] [bp-105h]@8
  char v14; // [sp+38h] [bp-FCh]@8
  char v15; // [sp+10Ch] [bp-28h]@7
  int v16; // [sp+120h] [bp-14h]@1
  int v17; // [sp+130h] [bp-4h]@7
  int v18; // [sp+134h] [bp+0h]@11

  memset(&v10, -858993460, 0x11Cu);
  v16 = a1;
  if ( a3 )
  {
    if ( *(_DWORD *)(v16 + 56) == 1 )
    {
      if ( IOrderStatusReceiver::GetCommunicationMode(a3) == 1 )
        IOrderStatusReceiver::SetEventQueue(a3, v16);
    }
    else
    {
      IOrderStatusReceiver::SetCommunicationMode(a3, 0);
    }
    std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::push_back(v16 + 144, (int)&a3);
    v3 = (int)ITimeAction::GetRelatedInstrument((void *)a3);
    std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::begin(
      v3,
      &v15);
    v17 = 0;
    while ( 1 )
    {
      v4 = (int)ITimeAction::GetRelatedInstrument((void *)a3);
      v11 = std::vector<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::end(
              v4,
              &v14);
      v10 = v11;
      LOBYTE(v17) = 1;
      v13 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
              &v15,
              v11);
      LOBYTE(v17) = 0;
      std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v14);
      if ( !v13 )
        break;
      v5 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
      v6 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>>::operator__(
             v16 + 116,
             v5);
      std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::push_back(v6, (int)&a3);
      v7 = std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator_(&v15);
      *(_DWORD *)std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>>::operator__(
                   v16 + 60,
                   v7) = -1;
      std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::operator__(
        (int)&v15,
        &v12,
        0);
      std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v12);
    }
    v17 = -1;
    std::_Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>::__Vector_const_iterator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_std::allocator<std::basic_string<char_std::char_traits<char>_std::allocator<char>>>>(&v15);
  }
  v8 = a2;
  _RTC_CheckStackVars(&v18, &_LN16_0);
  return _RTC_CheckEsp((unsigned int)&v18 ^ __security_cookie, v8);
}

int __thiscall IOrderStatusReceiver::SetCommunicationMode(int this, int a2)
{
  int result; // eax@1

  result = this;
  *(_DWORD *)(this + 40) = a2;
  return result;
}

//----- (000029B8) --------------------------------------------------------
int __thiscall IOrderStatusReceiver::GetCommunicationMode(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 40);
}

//----- (000029E8) --------------------------------------------------------
int __thiscall IOrderStatusReceiver::SetEventQueue(int this, int a2)
{
  int result; // eax@1

  result = this;
  *(_DWORD *)(this + 44) = a2;
  return result;
}

int __fastcall CMultipleInstrumentSniffer::AddTrader(int a1, int a2, int a3)
{
  char v4; // [sp+Ch] [bp-CCh]@1
  int v5; // [sp+D0h] [bp-8h]@1

  memset(&v4, -858993460, 0xCCu);
  v5 = a1;
  if ( a3 )
    std::vector<ITrader___std::allocator<ITrader__>>::push_back(v5 + 164, (int)&a3);
  return _RTC_CheckEsp(a1, a2);
}

int __thiscall CMultipleInstrumentSniffer::Execute(void *this)
{
  int v1; // eax@1
  int v2; // eax@3
  int v3; // eax@3
  int v4; // edx@3
  int v5; // ecx@3
  int v6; // eax@5
  int v7; // eax@5
  int v8; // edx@5
  int v9; // eax@10
  int v10; // eax@11
  int v11; // eax@12
  int v12; // eax@13
  int v13; // eax@16
  int v14; // eax@16
  int v15; // edx@16
  int v16; // ecx@16
  int v17; // eax@19
  int v18; // eax@20
  int v19; // eax@21
  int v20; // eax@22
  int v21; // eax@22
  int v22; // edx@22
  int v23; // ecx@22
  int v24; // eax@24
  int v25; // edx@28
  int v26; // ecx@28
  int v27; // ST04_4@31
  unsigned int v29; // [sp-4h] [bp-368h]@1
  int v30; // [sp+Ch] [bp-358h]@1
  int v31; // [sp+10h] [bp-354h]@2
  void *v32; // [sp+18h] [bp-34Ch]@1
  char v33; // [sp+24h] [bp-340h]@4
  char v34; // [sp+3Bh] [bp-329h]@2
  char v35; // [sp+44h] [bp-320h]@2
  void *v36; // [sp+58h] [bp-30Ch]@5
  char v37; // [sp+64h] [bp-300h]@25
  char v38; // [sp+7Bh] [bp-2E9h]@9
  char v39; // [sp+84h] [bp-2E0h]@9
  char v40; // [sp+9Bh] [bp-2C9h]@11
  char v41; // [sp+A4h] [bp-2C0h]@11
  char v42; // [sp+B8h] [bp-2ACh]@17
  char v43; // [sp+CFh] [bp-295h]@13
  char v44; // [sp+D8h] [bp-28Ch]@13
  char v45; // [sp+EFh] [bp-275h]@19
  char v46; // [sp+F8h] [bp-26Ch]@19
  char v47; // [sp+10Ch] [bp-258h]@22
  char v48; // [sp+123h] [bp-241h]@21
  char v49; // [sp+12Ch] [bp-238h]@21
  char v50; // [sp+140h] [bp-224h]@28
  char v51; // [sp+157h] [bp-20Dh]@27
  char v52; // [sp+160h] [bp-204h]@27
  void *v53; // [sp+174h] [bp-1F0h]@30
  char v54; // [sp+240h] [bp-124h]@26
  int v55; // [sp+254h] [bp-110h]@22
  int v56; // [sp+260h] [bp-104h]@22
  char v57; // [sp+26Ch] [bp-F8h]@20
  char v58; // [sp+280h] [bp-E4h]@19
  int v59; // [sp+294h] [bp-D0h]@16
  int v60; // [sp+2A0h] [bp-C4h]@16
  int v61; // [sp+2ACh] [bp-B8h]@14
  char v62; // [sp+2B8h] [bp-ACh]@12
  char v63; // [sp+2CCh] [bp-98h]@11
  int v64; // [sp+2E0h] [bp-84h]@11
  int v65; // [sp+2ECh] [bp-78h]@11
  int v66; // [sp+2F8h] [bp-6Ch]@10
  char v67; // [sp+304h] [bp-60h]@8
  int v68; // [sp+318h] [bp-4Ch]@3
  char v69; // [sp+324h] [bp-40h]@1
  int v70; // [sp+338h] [bp-2Ch]@1
  void *v71; // [sp+344h] [bp-20h]@1
  void *v72; // [sp+350h] [bp-14h]@1
  int v73; // [sp+360h] [bp-4h]@1
  int v74; // [sp+364h] [bp+0h]@1

  memset(&v30, -858993460, 0x34Cu);
  v29 = (unsigned int)&v74 ^ __security_cookie;
  v72 = this;
  v1 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::size((int)((char *)this + 60));
  v32 = operator new__(4 * v1);
  v71 = v32;
  v70 = 0;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::begin(
    (int)((char *)v72 + 60),
    &v69);
  v73 = 0;
  while ( 1 )
  {
    v31 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::end(
            (int)((char *)v72 + 60),
            &v35);
    v30 = v31;
    LOBYTE(v73) = 1;
    v34 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::const_iterator::operator__(
            &v69,
            v31);
    LOBYTE(v73) = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v35);
    if ( !v34 )
      break;
    v2 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v69);
    v3 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v2);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v72 + 10) + 20))(*((_DWORD *)v72 + 10), v3);
    v68 = _RTC_CheckEsp(v5, v4);
    if ( !v68 )
    {
      v6 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v69);
      v7 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v6);
      printf("Market Data of %s is not initialized!\n", v7);
      v36 = v71;
      operator delete__(v71);
      v73 = -1;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v69);
      goto LABEL_31;
    }
    *((_DWORD *)v71 + v70) = v68;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator__(
      (int)&v69,
      &v33,
      0);
    ++v70;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v33);
  }
  v73 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v69);
  while ( !*((_BYTE *)v72 + 44) )
  {
    v70 = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::begin(
      (int)((char *)v72 + 60),
      &v67);
    v73 = 2;
    while ( 1 )
    {
      v31 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::end(
              (int)((char *)v72 + 60),
              &v39);
      v30 = v31;
      LOBYTE(v73) = 3;
      v38 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::const_iterator::operator__(
              &v67,
              v31);
      LOBYTE(v73) = 2;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v39);
      if ( !v38 )
        break;
      v66 = CInstrumentData::GetCurrentIndex(*((_DWORD *)v71 + v70));
      v9 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
      if ( *(_DWORD *)(v9 + 32) != v66 )
      {
        v65 = CInstrumentData::GetTickQueue(*((_DWORD *)v71 + v70));
        v64 = *(_DWORD *)(*((_DWORD *)v71 + v70) + 8);
        v10 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::find(
          (int)((char *)v72 + 88),
          &v63,
          v10);
        LOBYTE(v73) = 4;
        v31 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::end(
                (int)((char *)v72 + 88),
                &v41);
        v30 = v31;
        LOBYTE(v73) = 5;
        v40 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::const_iterator::operator__(
                &v63,
                v31);
        LOBYTE(v73) = 4;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v41);
        if ( v40 )
        {
          v11 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v63);
          std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin(v11 + 32, &v62);
          LOBYTE(v73) = 6;
          while ( 1 )
          {
            v12 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v63);
            v31 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end(v12 + 32, &v44);
            v30 = v31;
            LOBYTE(v73) = 7;
            v43 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v62, v31);
            LOBYTE(v73) = 6;
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v44);
            if ( !v43 )
              break;
            v61 = *(_DWORD *)(std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67)
                            + 32);
            while ( v61 != v66 )
            {
              ++v61;
              v60 = *(_DWORD *)(v65 + 4 * v61);
              v59 = CTickMapping::TickMapping(v64, v60);
              v31 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v62);
              v13 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
              v14 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v13);
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v31 + 8))(v31, v59, v14);
              _RTC_CheckEsp(v16, v15);
            }
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v62, &v42, 0);
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v42);
          }
          LOBYTE(v73) = 4;
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v62);
        }
        v17 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::find(
          (int)((char *)v72 + 116),
          &v58,
          v17);
        LOBYTE(v73) = 8;
        v31 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::end(
                (int)((char *)v72 + 116),
                &v46);
        v30 = v31;
        LOBYTE(v73) = 9;
        v45 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::const_iterator::operator__(
                &v58,
                v31);
        LOBYTE(v73) = 8;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v46);
        if ( v45 )
        {
          v18 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v58);
          std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin(v18 + 32, &v57);
          LOBYTE(v73) = 10;
          while ( 1 )
          {
            v19 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v58);
            v31 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end(v19 + 32, &v49);
            v30 = v31;
            LOBYTE(v73) = 11;
            v48 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(
                    &v57,
                    v31);
            LOBYTE(v73) = 10;
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v49);
            if ( !v48 )
              break;
            v56 = *(_DWORD *)(v65 + 4 * v66);
            v55 = CTickMapping::TickMapping(v64, v56);
            v31 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v57);
            v20 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
            v21 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v20);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v31 + 8))(v31, v55, v21);
            _RTC_CheckEsp(v23, v22);
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v57, &v47, 0);
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v47);
          }
          LOBYTE(v73) = 8;
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v57);
        }
        v24 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator_>(&v67);
        *(_DWORD *)(v24 + 32) = v66;
        LOBYTE(v73) = 4;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v58);
        LOBYTE(v73) = 2;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v63);
      }
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::operator__(
        (int)&v67,
        &v37,
        0);
      ++v70;
      std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v37);
    }
    v73 = -1;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_long>>_0>>::iterator::_iterator(&v67);
    std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin((int)((char *)v72 + 144), &v54);
    v73 = 12;
    while ( 1 )
    {
      v31 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end((int)((char *)v72 + 144), &v52);
      v30 = v31;
      LOBYTE(v73) = 13;
      v51 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(&v54, v31);
      LOBYTE(v73) = 12;
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v52);
      if ( !v51 )
        break;
      v31 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v54);
      (*(void (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v31 + 8))(v31, -1, 0);
      _RTC_CheckEsp(v26, v25);
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v54, &v50, 0);
      std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v50);
    }
    v73 = -1;
    std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v54);
  }
  v53 = v71;
  operator delete__(v71);
LABEL_31:
  v27 = v8;
  _RTC_CheckStackVars(&v74, &_LN55);
  return _RTC_CheckEsp(v29, v27);
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

//----- (0000345C) --------------------------------------------------------
int __thiscall CMultipleInstrumentSniffer2::CMultipleInstrumentSniffer2(void *this, int a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  char v5; // [sp+Ch] [bp-CCh]@1
  void *v6; // [sp+D0h] [bp-8h]@1

  memset(&v5, -858993460, 0xCCu);
  v6 = this;
  CMultipleInstrumentSniffer::CMultipleInstrumentSniffer(this, a2, 1);
  *(_DWORD *)v6 = &CMultipleInstrumentSniffer2::_vftable_;
  return _RTC_CheckEsp(v3, v2);
}

int __thiscall CMultipleInstrumentSniffer2::Execute(void *this)
{
  int v1; // eax@3
  int v2; // eax@3
  int v3; // edx@3
  int v4; // ecx@3
  char *v5; // eax@5
  int v6; // eax@9
  int v7; // eax@9
  int v8; // edx@9
  int v9; // ecx@9
  char *v10; // eax@11
  int v11; // edx@19
  int v12; // ecx@19
  int v13; // eax@21
  int v14; // eax@22
  int v15; // edx@23
  int v16; // ecx@23
  int v17; // eax@26
  int v18; // eax@27
  int v19; // eax@28
  int v20; // edx@29
  int v21; // ecx@29
  int v22; // ST04_4@30
  int v23; // ST00_4@30
  int v24; // eax@30
  int v25; // edx@39
  int v26; // ST04_4@39
  unsigned int v28; // [sp-4h] [bp-2ECh]@1
  int v29; // [sp+Ch] [bp-2DCh]@1
  int v30; // [sp+10h] [bp-2D8h]@2
  char v31; // [sp+18h] [bp-2D0h]@4
  char v32; // [sp+2Fh] [bp-2B9h]@2
  char v33; // [sp+38h] [bp-2B0h]@2
  char v34; // [sp+4Ch] [bp-29Ch]@10
  char v35; // [sp+63h] [bp-285h]@8
  char v36; // [sp+6Ch] [bp-27Ch]@8
  char v37; // [sp+80h] [bp-268h]@20
  char v38; // [sp+ABh] [bp-23Dh]@20
  char v39; // [sp+B4h] [bp-234h]@20
  char v40; // [sp+C8h] [bp-220h]@23
  char v41; // [sp+DFh] [bp-209h]@22
  char v42; // [sp+E8h] [bp-200h]@22
  char v43; // [sp+FCh] [bp-1ECh]@25
  char v44; // [sp+127h] [bp-1C1h]@25
  char v45; // [sp+130h] [bp-1B8h]@25
  char v46; // [sp+144h] [bp-1A4h]@31
  char v47; // [sp+15Bh] [bp-18Dh]@27
  char v48; // [sp+164h] [bp-184h]@27
  char v49; // [sp+238h] [bp-B0h]@26
  char v50; // [sp+24Ch] [bp-9Ch]@25
  char v51; // [sp+260h] [bp-88h]@21
  char v52; // [sp+274h] [bp-74h]@20
  int v53; // [sp+288h] [bp-60h]@20
  void *v54; // [sp+294h] [bp-54h]@9
  char v55; // [sp+2A0h] [bp-48h]@7
  void *v56; // [sp+2B4h] [bp-34h]@3
  char v57; // [sp+2C0h] [bp-28h]@1
  int v58; // [sp+2D4h] [bp-14h]@1
  int v59; // [sp+2E4h] [bp-4h]@1
  int v60; // [sp+2E8h] [bp+0h]@1

  memset(&v29, -858993460, 0x2D0u);
  v28 = (unsigned int)&v60 ^ __security_cookie;
  v58 = (int)this;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::begin(
    (int)((char *)this + 88),
    &v57);
  v59 = 0;
  while ( 1 )
  {
    v30 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::end(
            v58 + 88,
            &v33);
    v29 = v30;
    LOBYTE(v59) = 1;
    v32 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::const_iterator::operator__(
            &v57,
            v30);
    LOBYTE(v59) = 0;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v33);
    if ( !v32 )
      break;
    v1 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v57);
    v2 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v58 + 40) + 20))(*(_DWORD *)(v58 + 40), v2);
    v56 = (void *)_RTC_CheckEsp(v4, v3);
    if ( !v56 )
    {
      v5 = CInstrumentData::GetInstrumentID(0);
      printf("Çë³", v5);
      exit(1);
    }
    CInstrumentData::AddUpdateReceiver(v56, v58);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator__(
      (int)&v57,
      &v31,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v31);
  }
  v59 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v57);
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::begin(
    v58 + 116,
    &v55);
  v59 = 2;
  while ( 1 )
  {
    v30 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::end(
            v58 + 116,
            &v36);
    v29 = v30;
    LOBYTE(v59) = 3;
    v35 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::const_iterator::operator__(
            &v55,
            v30);
    LOBYTE(v59) = 2;
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v36);
    if ( !v35 )
      break;
    v6 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v55);
    v7 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(v6);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v58 + 40) + 20))(*(_DWORD *)(v58 + 40), v7);
    v54 = (void *)_RTC_CheckEsp(v9, v8);
    if ( !v54 )
    {
      v10 = CInstrumentData::GetInstrumentID(0);
      printf("Çë³", v10);
      exit(1);
    }
    CInstrumentData::AddUpdateReceiver(v54, v58);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator__(
      (int)&v55,
      &v34,
      0);
    std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v34);
  }
  v59 = -1;
  std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v55);
  pthread_mutex_lock(v58 + 4);
  while ( !*(_BYTE *)(v58 + 44) )
  {
    if ( *(_DWORD *)(v58 + 36) == *(_DWORD *)(v58 + 32) )
    {
      if ( IMarketDataReader::GetStatus(*(_DWORD *)(v58 + 40)) == 7 )
        CDataSniffer::SetOver(v58);
      else
        pthread_cond_wait(v58 + 8, v58 + 4);
    }
    else
    {
      ++*(_DWORD *)(v58 + 36);
      if ( *(_DWORD *)(v58 + 36) == *(_DWORD *)(v58 + 16) )
        *(_DWORD *)(v58 + 36) = 0;
      if ( *(_DWORD *)(*(_DWORD *)(v58 + 28) + 4 * *(_DWORD *)(v58 + 36)) )
      {
        (*(void (__thiscall **)(_DWORD, signed int, _DWORD))(**(_DWORD **)(*(_DWORD *)(v58 + 28)
                                                                         + 4 * *(_DWORD *)(v58 + 36))
                                                           + 8))(
          *(_DWORD *)(*(_DWORD *)(v58 + 28) + 4 * *(_DWORD *)(v58 + 36)),
          -1,
          *(_DWORD *)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36)));
        _RTC_CheckEsp(v12, v11);
      }
      else
      {
        v53 = *(_DWORD *)(*(_DWORD *)(v58 + 20) + 4 * *(_DWORD *)(v58 + 36));
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
          &v37,
          *(const char **)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36)));
        v59 = 4;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::find(
          v58 + 88,
          &v52,
          (int)&v37);
        LOBYTE(v59) = 6;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v37);
        v30 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::end(
                v58 + 88,
                &v39);
        v29 = v30;
        LOBYTE(v59) = 7;
        v38 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::const_iterator::operator__(
                &v52,
                v30);
        LOBYTE(v59) = 6;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v39);
        if ( v38 )
        {
          v13 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v52);
          std::vector<ITimeAction___std::allocator<ITimeAction__>>::begin(v13 + 32, &v51);
          LOBYTE(v59) = 8;
          while ( 1 )
          {
            v14 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::operator_>(&v52);
            v30 = std::vector<ITimeAction___std::allocator<ITimeAction__>>::end(v14 + 32, &v42);
            v29 = v30;
            LOBYTE(v59) = 9;
            v41 = std::_Vector_const_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__(&v51, v30);
            LOBYTE(v59) = 8;
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v42);
            if ( !v41 )
              break;
            v30 = *(_DWORD *)std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator_(&v51);
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(
              v30,
              v53,
              *(_DWORD *)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36)));
            _RTC_CheckEsp(v16, v15);
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::operator__((int)&v51, &v40, 0);
            std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v40);
          }
          LOBYTE(v59) = 6;
          std::_Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>::__Vector_iterator<ITimeAction___std::allocator<ITimeAction__>>(&v51);
        }
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
          &v43,
          *(const char **)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36)));
        LOBYTE(v59) = 10;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::find(
          v58 + 116,
          &v50,
          (int)&v43);
        LOBYTE(v59) = 12;
        std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v43);
        v30 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::end(
                v58 + 116,
                &v45);
        v29 = v30;
        LOBYTE(v59) = 13;
        v44 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::const_iterator::operator__(
                &v50,
                v30);
        LOBYTE(v59) = 12;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v45);
        if ( v44 )
        {
          v17 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v50);
          std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::begin(v17 + 32, &v49);
          LOBYTE(v59) = 14;
          while ( 1 )
          {
            v18 = std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::operator_>(&v50);
            v30 = std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>::end(v18 + 32, &v48);
            v29 = v30;
            LOBYTE(v59) = 15;
            v47 = std::_Vector_const_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__(
                    &v49,
                    v30);
            LOBYTE(v59) = 14;
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v48);
            if ( !v47 )
              break;
            v19 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v49);
            if ( IOrderStatusReceiver::GetCommunicationMode(*(_DWORD *)v19) == 1 )
            {
              v30 = *(_DWORD *)std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v49);
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(
                v30,
                v53,
                *(_DWORD *)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36)));
              _RTC_CheckEsp(v21, v20);
            }
            else
            {
              v22 = *(_DWORD *)(*(_DWORD *)(v58 + 24) + 4 * *(_DWORD *)(v58 + 36));
              v23 = v53;
              v24 = std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator_(&v49);
              ITimeAction::DoActionWithLock(*(void **)v24, v23, v22);
            }
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::operator__((int)&v49, &v46, 0);
            std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v46);
          }
          LOBYTE(v59) = 12;
          std::_Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>::__Vector_iterator<ITradingStrategy___std::allocator<ITradingStrategy__>>(&v49);
        }
        LOBYTE(v59) = 6;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITradingStrategy___std::allocator<ITradingStrategy__>>>>_0>>::iterator::_iterator(&v50);
        v59 = -1;
        std::_Tree<std::_Tmap_traits<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::vector<ITimeAction___std::allocator<ITimeAction__>>>>_0>>::iterator::_iterator(&v52);
      }
    }
  }
  pthread_mutex_unlock(v58 + 4);
  v26 = v25;
  _RTC_CheckStackVars(&v60, &_LN58);
  return _RTC_CheckEsp(v28, v26);
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

char *__thiscall CInstrumentData::GetInstrumentID(void *this)
{
  return (char *)this + 81;
}

//----- (00003F88) --------------------------------------------------------
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


int __thiscall IMarketDataReader::GetStatus(int this)
{
  char v2; // [sp+Ch] [bp-CCh]@1
  int v3; // [sp+D0h] [bp-8h]@1

  memset(&v2, -858993460, 0xCCu);
  v3 = this;
  return *(_DWORD *)(this + 36);
}

int __thiscall CDataSniffer::SetOver(int this)
{
  int result; // eax@1

  result = this;
  *(_BYTE *)(this + 44) = 1;
  return result;
}

int __cdecl CreateMultipleInstrumentSniffer(int a1, int a2)
{
  int v2; // edx@2
  int v4; // [sp+Ch] [bp-100h]@1
  int v5; // [sp+14h] [bp-F8h]@5
  void *v6; // [sp+20h] [bp-ECh]@2
  int v7; // [sp+2Ch] [bp-E0h]@9
  void *v8; // [sp+38h] [bp-D4h]@6
  int v9; // [sp+108h] [bp-4h]@2
  int v10; // [sp+10Ch] [bp+0h]@10

  memset(&v4, -858993460, 0xF4u);
  if ( a2 )
  {
    v8 = operator new(0xB8u);
    v9 = 1;
    if ( v8 )
      v4 = CMultipleInstrumentSniffer2::CMultipleInstrumentSniffer2(v8, a1);
    else
      v4 = 0;
    v7 = v4;
    v9 = -1;
  }
  else
  {
    v6 = operator new(0xB8u);
    v9 = 0;
    if ( v6 )
      v4 = CMultipleInstrumentSniffer::CMultipleInstrumentSniffer(v6, a1, 0);
    else
      v4 = 0;
    v5 = v4;
    v9 = -1;
  }
  return _RTC_CheckEsp((unsigned int)&v10 ^ __security_cookie, v2);
}






