COrderSave::COrderSave(const char *Filename)
{
  int v2; // edx@1
  char v4; // [sp+Ch] [bp-D8h]@1
  void *v5; // [sp+D0h] [bp-14h]@1
  int v6; // [sp+E0h] [bp-4h]@1
  int v7; // [sp+E4h] [bp+0h]@4

  v5 = this;
  ITrader::ITrader(0);
  v6 = 0;
  *(_DWORD *)v5 = &COrderSave::_vftable_;
  *((_DWORD *)v5 + 15) = 0;
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>((char *)v5 + 64);
  LOBYTE(v6) = 1;
  std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>((char *)v5 + 88);
  *((_DWORD *)v5 + 29) = 0;
  if ( Filename )
  {
    *((_DWORD *)v5 + 14) = fopen(Filename, "wt");
    *((_BYTE *)v5 + 52) = 1;
  }
  else
  {
    *((_DWORD *)v5 + 14) = 0;
    *((_BYTE *)v5 + 52) = 0;
  }
}

signed int  ITrader::Execute()
{
}

signed int ITrader::Join()
{
}

signed int __cdecl ITrader::Release()
{
  return -858993460;
}



int __thiscall COrderSave::ReqOrderInsert(int this, const char *Source, double a3, char a4, char a5, signed int a6, int a7, int a8, int a9, int a10)
{
  int v10; // edx@5
  int v11; // eax@12
  int v12; // ST24_4@13
  int v14; // [sp+28h] [bp-124h]@1
  int v15; // [sp+30h] [bp-11Ch]@5
  void *v16; // [sp+3Ch] [bp-110h]@2
  int v17; // [sp+48h] [bp-104h]@9
  void *v18; // [sp+54h] [bp-F8h]@6
  int v19; // [sp+120h] [bp-2Ch]@9
  void *Dst; // [sp+12Ch] [bp-20h]@5
  int v21; // [sp+138h] [bp-14h]@1
  int v22; // [sp+148h] [bp-4h]@2
  int v23; // [sp+14Ch] [bp+0h]@13

  memset(&v14, -858993460, 0x118u);
  v21 = this;
  if ( *(_DWORD *)(this + 116) )
  {
    v16 = operator new(0x268u);
    v22 = 0;
    if ( v16 )
      v14 = CExeOrderStatus::CExeOrderStatus(v16);
    else
      v14 = 0;
    v15 = v14;
    v22 = -1;
    Dst = (void *)v14;
    memset((void *)v14, 0, 0x268u);
    strcpy((char *)Dst + 24, Source);
    v14 = (*(_DWORD *)(v21 + 60))++;
    sprintf((char *)Dst + 55, "%d", v14);
    *((_QWORD *)Dst + 12) = *(_QWORD *)&a3;
    *((_BYTE *)Dst + 85) = a4;
    *((_BYTE *)Dst + 86) = a5;
    *((_DWORD *)Dst + 26) = a6;
    *((_DWORD *)Dst + 80) = 0;
    *((_DWORD *)Dst + 81) = a6;
    *((_BYTE *)Dst + 318) = 97;
    *((_DWORD *)Dst + 152) = a8;
    *((_DWORD *)Dst + 150) = 0;
    COrderSave::AddTrackingOrder((void *)v21, (int)Dst);
    *(_DWORD *)a7 = Dst;
  }
  else
  {
    v18 = operator new(0x268u);
    v22 = 1;
    if ( v18 )
      v14 = CExeOrderStatus::CExeOrderStatus(v18);
    else
      v14 = 0;
    v17 = v14;
    v22 = -1;
    v19 = v14;
    memset((void *)v14, 0, 0x268u);
    strcpy((char *)(v19 + 24), Source);
    v14 = (*(_DWORD *)(v21 + 60))++;
    sprintf((char *)(v19 + 55), "%d", v14);
    *(_QWORD *)(v19 + 96) = *(_QWORD *)&a3;
    *(_BYTE *)(v19 + 85) = a4;
    *(_BYTE *)(v19 + 86) = a5;
    *(_DWORD *)(v19 + 104) = a6;
    *(_DWORD *)(v19 + 320) = a6;
    *(_DWORD *)(v19 + 324) = 0;
    *(_BYTE *)(v19 + 318) = 48;
    *(double *)(v19 + 568) = (double)a6 * a3;
    *(_QWORD *)(v19 + 576) = *(_QWORD *)&a3;
    *(_QWORD *)(v19 + 584) = *(_QWORD *)&a3;
    *(_DWORD *)(v19 + 592) = a6;
    *(_DWORD *)(v19 + 596) = a6;
    *(_DWORD *)(v19 + 608) = a8;
    *(_DWORD *)(v19 + 600) = 7;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back(v21 + 64, (int)&v19);
    *(_DWORD *)a7 = v19;
  }
  if ( *(_DWORD *)(v21 + 56) && *(_BYTE *)(v21 + 52) )
  {
    v11 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(a10);
    fprintf(*(FILE **)(v21 + 56), "%s\t%s\t%.2lf\t%c\t%c\t%d\t%s\n", a9, Source, *(_QWORD *)&a3, a4, a5, a6, v11);
    fflush(*(FILE **)(v21 + 56));
  }
  v12 = v10;
  _RTC_CheckStackVars(&v23, &_LN16_0);
  return _RTC_CheckEsp((unsigned int)&v23 ^ __security_cookie, v12);
}

int __fastcall COrderSave::ReqOrderCancel(int a1, int a2, int a3)
{
  int v3; // ecx@1
  char v5; // [sp+Ch] [bp-CCh]@1
  int v6; // [sp+D0h] [bp-8h]@1

  memset(&v5, -858993460, 0xCCu);
  v6 = a1;
  v3 = *(_BYTE *)(a3 + 318);
  if ( v3 != 48 )
  {
    *(_BYTE *)(a3 + 318) = 53;
    *(_DWORD *)(a3 + 600) = 6;
    if ( !*(_DWORD *)(v6 + 116) )
      COrderSave::RemoveTrackingOrder((void *)v6, a3);
  }
  return _RTC_CheckEsp(v3, a2);
}

int __thiscall COrderSave::AddTrackingOrder(void *this, int a2)
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
    (const char *)(a2 + 24));
  v8 = 0;
  v6 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
         (int)((char *)v7 + 88),
         (int)&v5);
  v8 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v5);
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back(v6, (int)&a2);
  return _RTC_CheckEsp((unsigned int)&v9 ^ __security_cookie, v2);
}

int __thiscall COrderSave::RemoveTrackingOrder(void *this, int a2)
{
  int v2; // eax@3
  int v3; // eax@6
  int v4; // eax@7
  int v5; // edx@7
  void *v7; // [sp-10h] [bp-1D4h]@6
  int v8; // [sp-Ch] [bp-1D0h]@6
  int v9; // [sp-8h] [bp-1CCh]@6
  unsigned int v10; // [sp-4h] [bp-1C8h]@1
  int v11; // [sp+Ch] [bp-1B8h]@1
  int v12; // [sp+10h] [bp-1B4h]@6
  int v13; // [sp+14h] [bp-1B0h]@2
  int v14; // [sp+18h] [bp-1ACh]@2
  char v15; // [sp+20h] [bp-1A4h]@1
  char v16; // [sp+4Bh] [bp-179h]@2
  char v17; // [sp+54h] [bp-170h]@2
  char v18; // [sp+68h] [bp-15Ch]@4
  char v19; // [sp+7Fh] [bp-145h]@5
  char v20; // [sp+88h] [bp-13Ch]@5
  void **v21; // [sp+9Ch] [bp-128h]@6
  char v22; // [sp+A8h] [bp-11Ch]@6
  char v23; // [sp+BCh] [bp-108h]@6
  char v24; // [sp+190h] [bp-34h]@1
  int v25; // [sp+1A4h] [bp-20h]@1
  void *v26; // [sp+1B0h] [bp-14h]@1
  int v27; // [sp+1C0h] [bp-4h]@1
  int v28; // [sp+1C4h] [bp+0h]@1

  memset(&v11, -858993460, 0x1ACu);
  v10 = (unsigned int)&v28 ^ __security_cookie;
  v26 = this;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
    &v15,
    (const char *)(a2 + 24));
  v27 = 0;
  v25 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
          (int)((char *)v26 + 88),
          (int)&v15);
  v27 = -1;
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v15);
  std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rbegin(v25, &v24);
  v27 = 1;
  while ( 1 )
  {
    v14 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v25, &v17);
    v13 = v14;
    LOBYTE(v27) = 2;
    v16 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
            &v24,
            v14);
    LOBYTE(v27) = 1;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(&v17);
    if ( !v16 )
      break;
    v2 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::operator_((int)&v24);
    if ( a2 == *(_DWORD *)v2 )
      break;
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(
      (int)&v24,
      &v18,
      0);
    std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(&v18);
  }
  v14 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::rend(v25, &v20);
  v13 = v14;
  LOBYTE(v27) = 3;
  v19 = std::operator__<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(
          &v24,
          v14);
  LOBYTE(v27) = 1;
  std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(&v20);
  if ( v19 )
  {
    v3 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::operator__(&v24);
    v14 = std::_Revranit<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>_std::iterator<std::bidirectional_iterator_tag_CExeOrderStatus___int_CExeOrderStatus_____CExeOrderStatus____>>::base(
            v3,
            &v22);
    v13 = v14;
    LOBYTE(v27) = 4;
    v21 = &v7;
    v12 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
            &v7,
            v14);
    v11 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase((void *)v25, &v23, v7, v8, v9);
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v23);
    LOBYTE(v27) = 1;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v22);
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back((int)((char *)v26 + 64), (int)&a2);
  }
  v27 = -1;
  v4 = std::reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>::_reverse_iterator<std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>>(&v24);
  v9 = v5;
  v8 = v4;
  _RTC_CheckStackVars(&v28, &_LN18);
  return _RTC_CheckEsp(v10, v9);
}

int __fastcall COrderSave::DoAction(int a1, signed int a2, int a3, const char *Src)
{
  int v4; // eax@1
  int v5; // edx@2
  int v6; // ecx@2
  int v7; // eax@10
  int v8; // eax@11
  int v9; // eax@14
  int v10; // eax@17
  int v11; // eax@18
  int v12; // eax@21
  int v13; // eax@25
  int v14; // eax@26
  int v15; // eax@29
  int v16; // eax@32
  int v17; // eax@33
  int v18; // eax@36
  int v19; // esi@38
  int v20; // edx@40
  int v21; // ecx@40
  int v22; // eax@41
  void *v24[7]; // [sp+4h] [bp-214h]@14
  signed int v25; // [sp+Ch] [bp-20Ch]@14
  unsigned int v26; // [sp+10h] [bp-208h]@1
  unsigned __int64 v27; // [sp+20h] [bp-1F8h]@1
  int v28; // [sp+28h] [bp-1F0h]@7
  char v29; // [sp+30h] [bp-1E8h]@2
  char v30; // [sp+5Bh] [bp-1BDh]@7
  char v31; // [sp+64h] [bp-1B4h]@7
  double *v32; // [sp+78h] [bp-1A0h]@41
  char v33; // [sp+84h] [bp-194h]@41
  char v34; // [sp+98h] [bp-180h]@42
  char v35; // [sp+16Ch] [bp-ACh]@6
  int v36; // [sp+180h] [bp-98h]@14
  int v37; // [sp+18Ch] [bp-8Ch]@2
  int v38; // [sp+198h] [bp-80h]@2
  double v39; // [sp+1A4h] [bp-74h]@2
  int v40; // [sp+1B4h] [bp-64h]@2
  int v41; // [sp+1C0h] [bp-58h]@2
  double v42; // [sp+1CCh] [bp-4Ch]@2
  double v43; // [sp+1DCh] [bp-3Ch]@2
  int v44; // [sp+1ECh] [bp-2Ch]@2
  int v45; // [sp+1F8h] [bp-20h]@2
  int v46; // [sp+204h] [bp-14h]@1
  int v47; // [sp+214h] [bp-4h]@2
  int v48; // [sp+218h] [bp+0h]@1

  memset(&v27, -858993460, 0x1ECu);
  v26 = (unsigned int)&v48 ^ __security_cookie;
  v46 = a1;
  v4 = a1;
  if ( *(_DWORD *)(a1 + 116) )
  {
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>(
      &v29,
      Src);
    v47 = 0;
    v45 = std::map<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>_std::less<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const>_std::allocator<std::pair<std::basic_string<char_std::char_traits<char>_std::allocator<char>>_const_std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>>>>::operator__(
            v46 + 88,
            (int)&v29);
    v47 = -1;
    std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>(&v29);
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(v46 + 116) + 20))(*(_DWORD *)(v46 + 116), Src);
    v44 = _RTC_CheckEsp(v6, v5);
    v43 = *(double *)(CInstrumentData::GetBidPriceToday(v44) + 8 * a3 - 8);
    v42 = *(double *)(CInstrumentData::GetAskPriceToday(v44) + 8 * a3 - 8);
    v41 = *(_DWORD *)(CInstrumentData::GetBidVolumeToday(v44) + 4 * a3 - 4);
    v40 = *(_DWORD *)(CInstrumentData::GetAskVolumeToday(v44) + 4 * a3 - 4);
    v39 = *(double *)(CInstrumentData::GetLastPriceToday(v44) + 8 * a3);
    v38 = *(_DWORD *)(CInstrumentData::GetVolumeToday(v44) + 4 * a3);
    v37 = v38;
    if ( v40 > v38 )
      v40 = v38;
    if ( v41 > v37 )
      v41 = v37;
    std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::begin(v45, &v35);
    v47 = 1;
    while ( 1 )
    {
      v28 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::end(v45, &v31);
      HIDWORD(v27) = v28;
      LOBYTE(v47) = 2;
      v30 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::operator__(&v35, v28);
      LOBYTE(v47) = 1;
      std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v31);
      if ( !v30 )
        break;
      if ( *(_BYTE *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                    + 85) == 48 )
      {
        if ( v40 )
        {
          v7 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
          if ( v42 <= *(double *)(*(_DWORD *)v7 + 96) )
          {
            v8 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            if ( v40 > *(_DWORD *)(*(_DWORD *)v8 + 324) )
              v28 = *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                              + 324);
            else
              v28 = v40;
            v36 = v28;
            v25 = v28;
            *(double *)v24 = v42;
            v9 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            COrderSave::UpdateTrackingOrder((void *)v46, *(_DWORD *)v9, *(double *)v24, v25);
            v40 -= v36;
            v38 -= v36;
          }
        }
        if ( v38 )
        {
          if ( *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                         + 324) )
          {
            v10 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            if ( v39 <= *(double *)(*(_DWORD *)v10 + 96) )
            {
              v11 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
              v28 = v38 > *(_DWORD *)(*(_DWORD *)v11 + 324) ? *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                                                                        + 324) : v38;
              v36 = v28;
              v25 = v28;
              *(double *)v24 = v39;
              v12 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
              COrderSave::UpdateTrackingOrder((void *)v46, *(_DWORD *)v12, *(double *)v24, v25);
              v38 -= v36;
              if ( v40 > v38 )
                v40 = v38;
            }
          }
        }
      }
      else
      {
        if ( v41 )
        {
          v13 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
          if ( v43 >= *(double *)(*(_DWORD *)v13 + 96) )
          {
            v14 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            if ( v41 > *(_DWORD *)(*(_DWORD *)v14 + 324) )
              v28 = *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                              + 324);
            else
              v28 = v41;
            v36 = v28;
            v25 = v28;
            *(double *)v24 = v43;
            v15 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            COrderSave::UpdateTrackingOrder((void *)v46, *(_DWORD *)v15, *(double *)v24, v25);
            v41 -= v36;
            v37 -= v36;
          }
        }
        if ( v37 )
        {
          if ( *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                         + 324) )
          {
            v16 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
            if ( v39 >= *(double *)(*(_DWORD *)v16 + 96) )
            {
              v17 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
              v28 = v37 > *(_DWORD *)(*(_DWORD *)v17 + 324) ? *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                                                                        + 324) : v37;
              v36 = v28;
              v25 = v28;
              *(double *)v24 = v39;
              v18 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
              COrderSave::UpdateTrackingOrder((void *)v46, *(_DWORD *)v18, *(double *)v24, v25);
              v37 -= v36;
              if ( v41 > v37 )
                v41 = v37;
            }
          }
        }
      }
      v19 = *(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
      if ( *(_DWORD *)(v19 + 104) == *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                                               + 596) )
      {
        *(_BYTE *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                 + 318) = 48;
        *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                  + 600) = 7;
        if ( *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                       + 608) )
        {
          v28 = *(_DWORD *)(*(_DWORD *)std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35)
                          + 608);
          v25 = (signed int)Src;
          v24[1] = (void *)-1;
          (*(void (__thiscall **)(int, signed int, const char *))(*(_DWORD *)v28 + 8))(v28, -1, Src);
          _RTC_CheckEsp(v21, v20);
        }
        v22 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35);
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::push_back(v46 + 64, v22);
        v32 = (double *)v24;
        v28 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Const_iterator<1>::_Const_iterator<1>(
                v24,
                (int)&v35);
        v27 = __PAIR__(
                std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::erase(
                  (void *)v45,
                  &v33,
                  v24[0],
                  (int)v24[1],
                  v25),
                HIDWORD(v27));
        LOBYTE(v47) = 3;
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator_(&v35, SHIDWORD(v27));
        LOBYTE(v47) = 1;
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v33);
      }
      else
      {
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::operator__((int)&v35, &v34, 0);
        std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v34);
      }
    }
    v47 = -1;
    v4 = std::list<CExeOrderStatus___std::allocator<CExeOrderStatus__>>::_Iterator<1>::__Iterator<1>(&v35);
  }
  v25 = a2;
  v24[1] = (void *)v4;
}

int __thiscall CInstrumentData::GetLastPriceToday(int this)
{
}

int __thiscall CInstrumentData::GetAskPriceToday(int this)
{
}

int __thiscall CInstrumentData::GetBidPriceToday(int this)
{
}

int __thiscall CInstrumentData::GetVolumeToday(int this)
{
}

int __thiscall CInstrumentData::GetAskVolumeToday(int this)
{
}

int __thiscall CInstrumentData::GetBidVolumeToday(int this)
{
}

int __thiscall COrderSave::UpdateTrackingOrder(void *this, int a2, double a3, signed int a4)
{
  int result; // eax@1
  char v5; // [sp+Ch] [bp-CCh]@1
  void *v6; // [sp+D0h] [bp-8h]@1

  memset(&v5, -858993460, 0xCCu);
  v6 = this;
  *(_DWORD *)(a2 + 320) += a4;
  *(_DWORD *)(a2 + 324) -= a4;
  *(double *)(a2 + 568) = (double)a4 * a3 + *(double *)(a2 + 568);
  *(_DWORD *)(a2 + 596) += a4;
  *(double *)(a2 + 576) = *(double *)(a2 + 568) / (double)*(signed int *)(a2 + 596);
  *(_QWORD *)(a2 + 584) = *(_QWORD *)&a3;
  result = a2;
  *(_DWORD *)(a2 + 592) = a4;
  return result;
}

int __cdecl CreateBackTestTraderInstance(const char *Filename)
{
  int v1; // edx@1
  int v3; // [sp+Ch] [bp-E8h]@1
  void *v4; // [sp+20h] [bp-D4h]@1
  int v5; // [sp+F0h] [bp-4h]@1
  int v6; // [sp+F4h] [bp+0h]@4

  memset(&v3, -858993460, 0xDCu);
  v4 = operator new(0x78u);
  v5 = 0;
  if ( v4 )
    v3 = COrderSave::COrderSave(v4, Filename);
  else
    v3 = 0;
}



