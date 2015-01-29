int __thiscall CPerformance::CPerformance(void *this, int a2)
{
  int v2; // ecx@1
  int v3; // edx@4
  char *v5; // [sp+Ch] [bp-10Ch]@1
  void *v6; // [sp+14h] [bp-104h]@1
  void *v7; // [sp+20h] [bp-F8h]@4
  int v8; // [sp+2Ch] [bp-ECh]@1
  char *v9; // [sp+38h] [bp-E0h]@4
  void *v10; // [sp+104h] [bp-14h]@1
  int v11; // [sp+114h] [bp-4h]@1
  int v12; // [sp+118h] [bp+0h]@4

  memset(&v5, -858993460, 0x100u);
  v10 = this;
  *(_DWORD *)this = &CPerformance::_vftable_;
  *((_DWORD *)v10 + 30) = a2;
  *((_DWORD *)v10 + 31) = 0;
  v8 = a2;
  v2 = 32 * a2 | -((unsigned __int64)(unsigned int)a2 >> 27 != 0);
  v6 = operator new__((v2 + 4) | -__CFADD__(v2, 4));
  v11 = 0;
  if ( v6 )
  {
    *(_DWORD *)v6 = v8;
    _eh_vector_constructor_iterator_(
      (char *)v6 + 4,
      32,
      v8,
      std::basic_string<char_std::char_traits<char>_std::allocator<char>>::basic_string<char_std::char_traits<char>_std::allocator<char>>,
      std::basic_string<char_std::char_traits<char>_std::allocator<char>>::_basic_string<char_std::char_traits<char>_std::allocator<char>>);
    v5 = (char *)v6 + 4;
  }
  else
  {
    v5 = 0;
  }
  v9 = v5;
  v11 = -1;
  *((_DWORD *)v10 + 2) = v5;
  v7 = operator new__(8 * a2);
  *((_DWORD *)v10 + 3) = v7;
  pthread_spin_init((char *)v10 + 128, 0);
  return _RTC_CheckEsp((unsigned int)&v12 ^ __security_cookie, v3);
}

int __thiscall CPerformance::AddPerformanceItem(void *this, const char *Src, double a3)
{
  int v3; // ecx@1
  int v4; // edx@1
  char v6; // [sp+Ch] [bp-D8h]@1
  int v7; // [sp+D0h] [bp-14h]@1
  int v8; // [sp+DCh] [bp-8h]@1

  memset(&v6, -858993460, 0xD8u);
  v8 = (int)this;
  pthread_spin_lock((char *)this + 128);
  v7 = (*(_DWORD *)(v8 + 124))++;
  pthread_spin_unlock(v8 + 128);
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::operator_(*(_DWORD *)(v8 + 8) + 32 * v7, v8, Src);
  v3 = *(_DWORD *)(v8 + 12);
  v4 = v7;
  *(_QWORD *)(v3 + 8 * v7) = *(_QWORD *)&a3;
  return _RTC_CheckEsp(v3, v4);
}

int __fastcall CPerformance::Sort(int a1, int a2)
{
  int v2; // ecx@6
  char v4; // [sp+Ch] [bp-E4h]@1
  int j; // [sp+D0h] [bp-20h]@3
  int i; // [sp+DCh] [bp-14h]@1
  int v7; // [sp+E8h] [bp-8h]@1

  memset(&v4, -858993460, 0xE4u);
  v7 = a1;
  for ( i = 0; i < *(_DWORD *)(v7 + 124); ++i )
  {
    for ( j = i + 1; j < *(_DWORD *)(v7 + 124); ++j )
    {
      if ( (unsigned __int8)std::operator<<char_std::char_traits<char>_std::allocator<char>>(
                              (void *)(*(_DWORD *)(v7 + 8) + 32 * j),
                              *(_DWORD *)(v7 + 8) + 32 * i) )
      {
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 12))(v7, i, j);
        _RTC_CheckEsp(v2, a2);
      }
    }
  }
  return _RTC_CheckEsp(i, a2);
}

int __thiscall CPerformance::Evaluate(int this)
{
  double v1; // st7@28
  double v2; // st7@28
  int v3; // edx@28
  int v4; // ecx@31
  double v6; // [sp+14h] [bp-178h]@1
  int j; // [sp+E0h] [bp-ACh]@25
  int i; // [sp+ECh] [bp-A0h]@1
  unsigned int v9; // [sp+F8h] [bp-94h]@1
  int v10; // [sp+104h] [bp-88h]@1
  unsigned int v11; // [sp+110h] [bp-7Ch]@1
  unsigned int v12; // [sp+11Ch] [bp-70h]@1
  unsigned int v13; // [sp+128h] [bp-64h]@1
  double v14; // [sp+134h] [bp-58h]@1
  double v15; // [sp+144h] [bp-48h]@1
  double v16; // [sp+154h] [bp-38h]@1
  double v17; // [sp+164h] [bp-28h]@1
  double v18; // [sp+174h] [bp-18h]@1
  int v19; // [sp+184h] [bp-8h]@1

  memset(&v6, -858993460, 0x178u);
  v19 = this;
  v18 = 0.0;
  v17 = 0.0;
  v16 = 0.0;
  v15 = 0.0;
  v14 = 0.0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  *(double *)(this + 48) = 0.0;
  *(double *)(v19 + 56) = 0.0;
  *(double *)(v19 + 72) = 0.0;
  *(double *)(v19 + 80) = 0.0;
  *(double *)(v19 + 88) = 0.0;
  *(double *)(v19 + 96) = 0.0;
  *(_DWORD *)(v19 + 104) = 0;
  *(_DWORD *)(v19 + 108) = 0;
  for ( i = 0; i < *(_DWORD *)(v19 + 120); ++i )
  {
    v18 = v18 + *(double *)(*(_DWORD *)(v19 + 12) + 8 * i);
    if ( *(double *)(*(_DWORD *)(v19 + 12) + 8 * i) <= 0.0 )
    {
      v16 = v16 + *(double *)(*(_DWORD *)(v19 + 12) + 8 * i);
      v17 = 0.0;
      if ( v16 < *(double *)(v19 + 80) )
        *(_QWORD *)(v19 + 80) = *(_QWORD *)&v16;
      ++v12;
      v13 = 0;
      if ( *(_DWORD *)(v19 + 108) < v12 )
        ++*(_DWORD *)(v19 + 108);
      ++v10;
      if ( -*(double *)(*(_DWORD *)(v19 + 12) + 8 * i) > *(double *)(v19 + 96) )
        *(double *)(v19 + 96) = -*(double *)(*(_DWORD *)(v19 + 12) + 8 * i);
    }
    else
    {
      v17 = v17 + *(double *)(*(_DWORD *)(v19 + 12) + 8 * i);
      v16 = 0.0;
      if ( v17 > *(double *)(v19 + 72) )
        *(_QWORD *)(v19 + 72) = *(_QWORD *)&v17;
      ++v13;
      v12 = 0;
      if ( *(_DWORD *)(v19 + 104) < v13 )
        ++*(_DWORD *)(v19 + 104);
      ++v11;
      if ( *(double *)(v19 + 88) < *(double *)(*(_DWORD *)(v19 + 12) + 8 * i) )
        *(double *)(v19 + 88) = *(double *)(*(_DWORD *)(v19 + 12) + 8 * i);
    }
    if ( v18 < v15 )
    {
      ++v9;
      *(_QWORD *)&v6 = v9;
      if ( (double)v9 > *(double *)(v19 + 56) )
        *(double *)(v19 + 56) = *(double *)(v19 + 56) + 1.0;
    }
    if ( v15 >= v18 )
    {
      if ( v15 - v18 > *(double *)(v19 + 48) )
        *(double *)(v19 + 48) = v15 - v18;
    }
    else
    {
      v15 = v18;
      v9 = 0;
    }
  }
  *(_QWORD *)&v6 = v11;
  *(double *)(v19 + 40) = (double)v11 / (double)*(signed int *)(v19 + 120);
  *(double *)(v19 + 24) = v18 / (double)*(signed int *)(v19 + 120);
  for ( j = 0; j < *(_DWORD *)(v19 + 120); ++j )
    v14 = (*(double *)(*(_DWORD *)(v19 + 12) + 8 * j) - *(double *)(v19 + 24))
        * (*(double *)(*(_DWORD *)(v19 + 12) + 8 * j) - *(double *)(v19 + 24))
        + v14;
  v1 = sqrt(v14 / (double)*(signed int *)(v19 + 120));
  v6 = *(double *)(v19 + 24) / v1;
  v2 = sqrt(244.0);
  v3 = v19;
  *(double *)(v19 + 64) = v2 * v6;
  if ( *(_DWORD *)(v19 + 120) <= 0xF4u )
  {
    *(double *)(v19 + 16) = v18 / *(double *)(v19 + 48);
  }
  else
  {
    v3 = v19;
    *(double *)(v19 + 16) = *(double *)(v19 + 24) * 244.0 / *(double *)(v19 + 48);
  }
  v4 = v19;
  *(double *)(v19 + 32) = *(double *)(v19 + 24) * 244.0;
  return _RTC_CheckEsp(v4, v3);
}

int __thiscall CPerformance::GetKellyLeverage(void *this, double a2)
{
  double v2; // st7@5
  void *v3; // ecx@5
  void *v4; // edx@5
  double v5; // st7@6
  char v7; // [sp+14h] [bp-F8h]@1
  int i; // [sp+D8h] [bp-34h]@1
  double v9; // [sp+E4h] [bp-28h]@1
  double v10; // [sp+F4h] [bp-18h]@5
  void *v11; // [sp+104h] [bp-8h]@1

  memset(&v7, -858993460, 0xF8u);
  v11 = this;
  v9 = 0.0;
  for ( i = 0; i < *((_DWORD *)v11 + 30); ++i )
    v9 = (*(double *)(*((_DWORD *)v11 + 3) + 8 * i) - *((double *)v11 + 3))
       * (*(double *)(*((_DWORD *)v11 + 3) + 8 * i) - *((double *)v11 + 3))
       + v9;
  if ( *((double *)v11 + 8) <= 0.0 )
  {
    v5 = sqrt(v9 / (double)*((signed int *)v11 + 30));
    v10 = -sqrt(v5 * a2 / -*((double *)v11 + 8));
    v3 = v11;
    v4 = v11;
    *((double *)v11 + 14) = -*((double *)v11 + 3) / v9 * (double)*((signed int *)v11 + 30) * v10;
  }
  else
  {
    v2 = sqrt(v9 / (double)*((signed int *)v11 + 30));
    v10 = sqrt(v2 * a2 / *((double *)v11 + 8));
    v3 = v11;
    v4 = v11;
    *((double *)v11 + 14) = *((double *)v11 + 3) / v9 * (double)*((signed int *)v11 + 30) * v10;
  }
  return _RTC_CheckEsp(v3, v4);
}

int __thiscall CPerformance::SavePerformance(void *this, const char *Filename)
{
  double v2; // ST0C_8@3
  int v3; // eax@3
  int v4; // edx@4
  int v5; // ecx@4
  char v7; // [sp+14h] [bp-E4h]@1
  int i; // [sp+D8h] [bp-20h]@1
  FILE *File; // [sp+E4h] [bp-14h]@1
  void *v10; // [sp+F0h] [bp-8h]@1

  memset(&v7, -858993460, 0xE4u);
  v10 = this;
  File = fopen(Filename, "w");
  for ( i = 0; i < *((_DWORD *)v10 + 31); ++i )
  {
    v2 = *(double *)(*((_DWORD *)v10 + 3) + 8 * i);
    v3 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(*((_DWORD *)v10 + 2) + 32 * i);
    fprintf(File, "%s\t%.2lf\n", v3, *(_QWORD *)&v2);
  }
  fclose(File);
  return _RTC_CheckEsp(v5, v4);
}

int __thiscall CPerformance::Swap(void *this, int a2, int a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-CCh]@1
  void *v7; // [sp+D0h] [bp-8h]@1

  memset(&v6, -858993460, 0xCCu);
  v7 = this;
  std::swap<char_std::char_traits<char>_std::allocator<char>>(
    (void *)(*((_DWORD *)v7 + 2) + 32 * a2),
    *((_DWORD *)v7 + 2) + 32 * a3);
  std::swap<double>(*((_DWORD *)v7 + 3) + 8 * a2, *((_DWORD *)v7 + 3) + 8 * a3);
  return _RTC_CheckEsp(v4, v3);
}

int __thiscall CSingleInstrumentStrategyPerformance::CSingleInstrumentStrategyPerformance(void *this, int a2)
{
  void *v2; // eax@1
  void *v3; // eax@1
  void *v4; // eax@1
  int v5; // edx@1
  char v7; // [sp+Ch] [bp-108h]@1
  void *v8; // [sp+10h] [bp-104h]@1
  void *v9; // [sp+1Ch] [bp-F8h]@1
  void *v10; // [sp+28h] [bp-ECh]@1
  void *v11; // [sp+100h] [bp-14h]@1
  int v12; // [sp+110h] [bp-4h]@1
  int v13; // [sp+114h] [bp+0h]@1

  memset(&v7, -858993460, 0xFCu);
  v11 = this;
  CPerformance::CPerformance(this, a2);
  v12 = 0;
  *(_DWORD *)v11 = &CSingleInstrumentStrategyPerformance::_vftable_;
  v2 = operator new__(4 * a2);
  v8 = v2;
  *((_DWORD *)v11 + 34) = v2;
  v3 = operator new__(4 * a2);
  v9 = v3;
  *((_DWORD *)v11 + 35) = v3;
  v4 = operator new__(4 * a2);
  v10 = v4;
  *((_DWORD *)v11 + 36) = v4;
  *((_DWORD *)v11 + 37) = operator new__(4 * a2);
  return _RTC_CheckEsp((unsigned int)&v13 ^ __security_cookie, v5);
}
int __thiscall CSingleInstrumentStrategyPerformance::AddPerformanceItem(void *this, const char *Src, double a3, int a4, int a5, int a6, int a7)
{
  int v7; // ecx@1
  int v8; // edx@1
  char v10; // [sp+Ch] [bp-D8h]@1
  int v11; // [sp+D0h] [bp-14h]@1
  int v12; // [sp+DCh] [bp-8h]@1

  memset(&v10, -858993460, 0xD8u);
  v12 = (int)this;
  pthread_spin_lock((char *)this + 128);
  v11 = (*(_DWORD *)(v12 + 124))++;
  pthread_spin_unlock(v12 + 128);
  std::basic_string<char_std::char_traits<char>_std::allocator<char>>::operator_(
    *(_DWORD *)(v12 + 8) + 32 * v11,
    v12,
    Src);
  *(_QWORD *)(*(_DWORD *)(v12 + 12) + 8 * v11) = *(_QWORD *)&a3;
  *(_DWORD *)(*(_DWORD *)(v12 + 136) + 4 * v11) = a4;
  *(_DWORD *)(*(_DWORD *)(v12 + 140) + 4 * v11) = a5;
  *(_DWORD *)(*(_DWORD *)(v12 + 144) + 4 * v11) = a6;
  v7 = *(_DWORD *)(v12 + 148);
  v8 = v11;
  *(_DWORD *)(v7 + 4 * v11) = a7;
  return _RTC_CheckEsp(v7, v8);
}

int __thiscall CSingleInstrumentStrategyPerformance::Swap(void *this, int a2, int a3)
{
  int v3; // edx@1
  int v4; // ecx@1
  char v6; // [sp+Ch] [bp-CCh]@1
  void *v7; // [sp+D0h] [bp-8h]@1

  memset(&v6, -858993460, 0xCCu);
  v7 = this;
  std::swap<char_std::char_traits<char>_std::allocator<char>>(
    (void *)(*((_DWORD *)v7 + 2) + 32 * a2),
    *((_DWORD *)v7 + 2) + 32 * a3);
  std::swap<double>(*((_DWORD *)v7 + 3) + 8 * a2, *((_DWORD *)v7 + 3) + 8 * a3);
  std::swap<unsigned_int>(*((_DWORD *)v7 + 34) + 4 * a2, *((_DWORD *)v7 + 34) + 4 * a3);
  std::swap<unsigned_int>(*((_DWORD *)v7 + 35) + 4 * a2, *((_DWORD *)v7 + 35) + 4 * a3);
  std::swap<unsigned_int>(*((_DWORD *)v7 + 36) + 4 * a2, *((_DWORD *)v7 + 36) + 4 * a3);
  std::swap<unsigned_int>(*((_DWORD *)v7 + 37) + 4 * a2, *((_DWORD *)v7 + 37) + 4 * a3);
  return _RTC_CheckEsp(v4, v3);
}
int __thiscall CSingleInstrumentStrategyPerformance::Calibrate(void *this, double a2)
{
  int result; // eax@2
  int v3; // ecx@3
  __int64 v4; // [sp+Ch] [bp-E0h]@1
  int i; // [sp+D8h] [bp-14h]@1
  int v6; // [sp+E4h] [bp-8h]@1

  memset(&v4, -858993460, 0xE0u);
  v6 = (int)this;
  for ( i = 0; ; ++i )
  {
    result = v6;
    if ( i >= *(_DWORD *)(v6 + 124) )
      break;
    v3 = *(_DWORD *)(v6 + 12);
    v4 = *(_DWORD *)(*(_DWORD *)(v6 + 140) + 4 * i);
    *(double *)(*(_DWORD *)(v6 + 12) + 8 * i) = *(double *)(v3 + 8 * i) - (double)v4 * a2;
  }
  return result;
}

int __thiscall CSingleInstrumentStrategyPerformance::Evaluate(int this)
{
  double v1; // st7@32
  unsigned int v2; // ecx@35
  int v3; // edx@35
  __int64 v5; // [sp+14h] [bp-1A4h]@1
  double v6; // [sp+1Ch] [bp-19Ch]@22
  int j; // [sp+E8h] [bp-D0h]@29
  int i; // [sp+F4h] [bp-C4h]@1
  unsigned int v9; // [sp+100h] [bp-B8h]@1
  unsigned int v10; // [sp+10Ch] [bp-ACh]@1
  unsigned int v11; // [sp+118h] [bp-A0h]@1
  unsigned int v12; // [sp+124h] [bp-94h]@1
  int v13; // [sp+130h] [bp-88h]@1
  unsigned int v14; // [sp+13Ch] [bp-7Ch]@1
  unsigned int v15; // [sp+148h] [bp-70h]@1
  unsigned int v16; // [sp+154h] [bp-64h]@1
  double v17; // [sp+160h] [bp-58h]@1
  double v18; // [sp+170h] [bp-48h]@1
  double v19; // [sp+180h] [bp-38h]@1
  double v20; // [sp+190h] [bp-28h]@1
  double v21; // [sp+1A0h] [bp-18h]@1
  int v22; // [sp+1B0h] [bp-8h]@1

  memset(&v5, -858993460, 0x1A4u);
  v22 = this;
  v21 = 0.0;
  v20 = 0.0;
  v19 = 0.0;
  v18 = 0.0;
  v17 = 0.0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  *(double *)(this + 48) = 0.0;
  *(double *)(v22 + 56) = 0.0;
  *(double *)(v22 + 72) = 0.0;
  *(double *)(v22 + 80) = 0.0;
  *(double *)(v22 + 88) = 0.0;
  *(double *)(v22 + 96) = 0.0;
  *(_DWORD *)(v22 + 104) = 0;
  *(_DWORD *)(v22 + 108) = 0;
  *(_DWORD *)(v22 + 168) = 0;
  *(_DWORD *)(v22 + 172) = -1;
  for ( i = 0; i < *(_DWORD *)(v22 + 120); ++i )
  {
    v21 = v21 + *(double *)(*(_DWORD *)(v22 + 12) + 8 * i);
    v11 += *(_DWORD *)(*(_DWORD *)(v22 + 144) + 4 * i);
    v10 += *(_DWORD *)(*(_DWORD *)(v22 + 148) + 4 * i);
    v9 += *(_DWORD *)(*(_DWORD *)(v22 + 136) + 4 * i);
    if ( *(_DWORD *)(*(_DWORD *)(v22 + 136) + 4 * i) > *(_DWORD *)(v22 + 168) )
      *(_DWORD *)(v22 + 168) = *(_DWORD *)(*(_DWORD *)(v22 + 136) + 4 * i);
    if ( *(_DWORD *)(*(_DWORD *)(v22 + 136) + 4 * i) < *(_DWORD *)(v22 + 172) )
      *(_DWORD *)(v22 + 172) = *(_DWORD *)(*(_DWORD *)(v22 + 136) + 4 * i);
    if ( *(double *)(*(_DWORD *)(v22 + 12) + 8 * i) <= 0.0 )
    {
      v19 = v19 + *(double *)(*(_DWORD *)(v22 + 12) + 8 * i);
      v20 = 0.0;
      if ( v19 < *(double *)(v22 + 80) )
        *(_QWORD *)(v22 + 80) = *(_QWORD *)&v19;
      ++v15;
      v16 = 0;
      if ( *(_DWORD *)(v22 + 108) < v15 )
        ++*(_DWORD *)(v22 + 108);
      ++v13;
      if ( -*(double *)(*(_DWORD *)(v22 + 12) + 8 * i) > *(double *)(v22 + 96) )
        *(double *)(v22 + 88) = -*(double *)(*(_DWORD *)(v22 + 12) + 8 * i);
    }
    else
    {
      v20 = v20 + *(double *)(*(_DWORD *)(v22 + 12) + 8 * i);
      v19 = 0.0;
      if ( v20 > *(double *)(v22 + 72) )
        *(_QWORD *)(v22 + 72) = *(_QWORD *)&v20;
      ++v16;
      v15 = 0;
      if ( *(_DWORD *)(v22 + 104) < v16 )
        ++*(_DWORD *)(v22 + 104);
      ++v14;
      if ( *(double *)(v22 + 88) < *(double *)(*(_DWORD *)(v22 + 12) + 8 * i) )
        *(double *)(v22 + 88) = *(double *)(*(_DWORD *)(v22 + 12) + 8 * i);
    }
    if ( v21 < v18 )
    {
      ++v12;
      *(_QWORD *)&v6 = v12;
      if ( (double)v12 > *(double *)(v22 + 56) )
        *(double *)(v22 + 56) = *(double *)(v22 + 56) + 1.0;
    }
    if ( v18 >= v21 )
    {
      if ( v18 - v21 > *(double *)(v22 + 48) )
        *(double *)(v22 + 48) = v18 - v21;
    }
    else
    {
      v18 = v21;
      v12 = 0;
    }
  }
  *(_QWORD *)&v6 = v14;
  *(double *)(v22 + 40) = (double)v14 / (double)*(signed int *)(v22 + 120);
  *(double *)(v22 + 24) = v21 / (double)*(signed int *)(v22 + 120);
  *(_QWORD *)&v6 = v11;
  *(double *)(v22 + 152) = (double)v11 / (double)*(signed int *)(v22 + 120);
  *(_QWORD *)&v6 = v9;
  *(double *)(v22 + 160) = (double)v9 / (double)*(signed int *)(v22 + 120);
  for ( j = 0; j < *(_DWORD *)(v22 + 120); ++j )
    v17 = (*(double *)(*(_DWORD *)(v22 + 12) + 8 * j) - *(double *)(v22 + 24))
        * (*(double *)(*(_DWORD *)(v22 + 12) + 8 * j) - *(double *)(v22 + 24))
        + v17;
  v1 = sqrt(v17 / (double)*(signed int *)(v22 + 120));
  v6 = *(double *)(v22 + 24) / v1;
  *(double *)(v22 + 64) = sqrt(244.0) * v6;
  if ( *(_DWORD *)(v22 + 120) <= 0xF4u )
    *(double *)(v22 + 16) = v21 / *(double *)(v22 + 48);
  else
    *(double *)(v22 + 16) = *(double *)(v22 + 24) * 244.0 / *(double *)(v22 + 48);
  *(double *)(v22 + 32) = *(double *)(v22 + 24) * 244.0;
  v2 = v11;
  v3 = v22;
  *(double *)(v22 + 176) = (double)v10 / (double)v11;
  return _RTC_CheckEsp(v2, v3);
}

int __thiscall CSingleInstrumentStrategyPerformance::SavePerformance(void *this, const char *Filename)
{
  int v2; // ST20_4@3
  int v3; // ST1C_4@3
  int v4; // ST18_4@3
  int v5; // ST14_4@3
  double v6; // ST0C_8@3
  int v7; // eax@3
  int v8; // edx@4
  int v9; // ecx@4
  char v11; // [sp+24h] [bp-E4h]@1
  int i; // [sp+E8h] [bp-20h]@1
  FILE *File; // [sp+F4h] [bp-14h]@1
  void *v14; // [sp+100h] [bp-8h]@1

  memset(&v11, -858993460, 0xE4u);
  v14 = this;
  File = fopen(Filename, "w");
  for ( i = 0; i < *((_DWORD *)v14 + 31); ++i )
  {
    v2 = *(_DWORD *)(*((_DWORD *)v14 + 37) + 4 * i);
    v3 = *(_DWORD *)(*((_DWORD *)v14 + 36) + 4 * i);
    v4 = *(_DWORD *)(*((_DWORD *)v14 + 35) + 4 * i);
    v5 = *(_DWORD *)(*((_DWORD *)v14 + 34) + 4 * i);
    v6 = *(double *)(*((_DWORD *)v14 + 3) + 8 * i);
    v7 = std::basic_string<char_std::char_traits<char>_std::allocator<char>>::c_str(*((_DWORD *)v14 + 2) + 32 * i);
    fprintf(File, "%s\t%+.2lf\t%d\t%d\t%d\t%d\n", v7, *(_QWORD *)&v6, v5, v4, v3, v2);
  }
  fclose(File);
  return _RTC_CheckEsp(v9, v8);
}


