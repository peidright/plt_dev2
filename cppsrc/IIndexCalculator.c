template <class RType>
IIndexCalculator<RType>::IIndexCalculator(long winsize, long size)
{
}


template<class RType>
long IIndexCalculator<RType>::GetWinSize()
{
    return WinSize;
}

template<class RType>
RType* IIndexCalculator<RType>::GetWinSize()
{
    return Index;
}

template <class RType>
void IIndexCalculator<RType>::SaveIndex2BinFile(char * filename, long size=0)
{
SaveMemToBinFile(a2, v5, 8 * a3);
}

template <class RType>
void IIndexCalculator<RType>::SaveIndex2TxtFile(char * filename, CTickMapping &map)
{
}

template <class Type>
CMAIndex<Type>::CMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, 
                  const IHistoryData<double> & old_ma_data,long winsize, long bufsize, long step = 1)
{
}

template <class Type>
CMAIndex<Type>::CMAIndex(const Type * ori_data, long winsize, long bufsize, long step = 1)
{
}

template <class Type>
CMAIndex<Type>::DoAction(long Tick, const char * Instrument=NULL)
{
}


template <class Type>
CEMAIndex<Type>::CEMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, 
                     const IHistoryData<double> & old_ema_data,long winsize,
                     long bufsize,double alpha = 0, long step = 1)
{
}

template <class Type>
CEMAIndex<Type>::CEMAIndex(const Type * ori_data,long winsize,long bufsize,
                    double alpha = 0, long step = 1)
{
}

template <class Type>
void CEMAIndex<Type>::DoAction(long Tick, const char * Instrument = NULL)
{
}

template <class Type>
CKLine<Type>::CKLine(const Type * ori_data, long winsize, long size)
{
}

template <class Type>
void CKLine<Type>::DoAction(long Tick, const char * Instrument = NULL)
{
}



template <class Type>
CRSIIndex<Type>::CRSIIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data,long winsize, long bufsize,long step = 1)
{
}

template <class Type>
CRSIIndex<Type>::CRSIIndex(const Type * ori_data,long winsize, long bufsize,long step = 1)
{
}

template <class Type>
CMaxIndex<Type>::CMaxIndex(const Type * ori_data,long winsize,long bufsize)
{
}

template <class Type>
long * CMaxIndex<Type>::GetMaxPosition()
{
}

template <class Type>
long  CMaxIndex<Type>::GetMaxPosition(long tick)
{
}

template <class Type>
CMinIndex<Type>::CMinIndex(const Type * ori_data,long winsize,long bufsize)
{
}

template <class Type>
long *CMinIndex<Type>::GetMinPosition()
{
}

template <class Type>
long CMinIndex<Type>::GetMinPosition(long Tick)
{
}

template <class Type>
class CMAIndex :
    public IIndexCalculator<double>
{
public:
    CMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, const IHistoryData<double> & old_ma_data, long winsize,long bufsize, long step = 1);
	CMAIndex(const Type * ori_data,long winsize,long bufsize, long step = 1);
    ~CMAIndex();

	inline long GetStep() const {return Step;};
    virtual void DoAction(long Tick, const char * Instrument = NULL);

private:
	const IHistoryData<Type> & OldOriginalData;
	const IHistoryData<double> & OldIndexData;

	const PatchedHistoryData<Type> DefaultOldOriginalData;
	const PatchedHistoryData<double> DefaultOldMAData;

    const Type * OriginalData;
    double factor;  //  =step/WindowsSize
	long Step;
};

template <class Type>
CMAIndex<Type>::CMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, 
         const IHistoryData<double> & old_ma_data, long winsize,long bufsize, long step = 1)
{
}


template <class Type>
void CMAIndex<Type>::DoAction(long Tick, const char * Instrument = NULL)
{

}

template <class Type>
int __thiscall CMAIndex<Type>::DoAction(void *this, int a2, int a3)
{
    for(;;);
}

template <class Type>
CEMAIndex<Type>::CEMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, const IHistoryData<double> & old_ema_data,long winsize,long bufsize,double alpha = 0, long step = 1)
{
}

template <class Type>
CEMAIndex<Type>::CEMAIndex(const Type * ori_data,long winsize,long bufsize,double alpha = 0, long step = 1)
{
}

template <class Type>
void CEMAIndex<Type>::DoAction(long Tick, const char * Instrument = NULL)
{
}


template <class Type>
class CKLine :
    public IIndexCalculator<Type>
{
public:
	//winsize = K线的窗宽，size为Tick总数量
    CKLine(const Type * ori_data,long winsize,long size);
    ~CKLine();
    virtual void DoAction(long Tick, const char * Instrument = NULL);
	//K线的OpenPrice和ClosePrice的访问请直接访问
	//const Type * GetOpenPrice() const{return OpenPrice;};
	//const Type * GetClosePrice() const{return ClosePrice;};
	inline const Type * GetMaxPriceIndex() const{return MaxPrice;};
	inline const Type * GetMinPriceIndex() const{return MinPrice;};

	Type operator[] (long Tick) const;	//返回ClosePrice
	inline Type GetOpenPrice(long Tick) const{return OriginalData[(Tick/this->WinSize)*this->WinSize];};
	//对于currentTick所属K线数据之前的K线数据返回那一个Tick所属于K线的ClosePrice
	Type GetClosePrice(long Tick) const;
	//返回K线内到当前Tick的最大或者最小值
	inline Type GetMaxPrice(long Tick) const{return MaxPrice[Tick];};
	inline Type GetMinPrice(long Tick) const{return MinPrice[Tick];};
private:
    const Type * OriginalData;
    //Type * OpenPrice;
    //Type * ClosePrice;
    Type * MaxPrice;
    Type * MinPrice;
};

template <class Type>
CKLine<Type>::CKLine(const Type * ori_data,long winsize,long size)
{
}

template <class Type>
void CKLine<Type>::DoAction(long Tick, const char * Instrument = NULL)
{
    /*
  a2=Tick;
  a3=Instrument
  */
  int result; // eax@1
  char v4; // [sp+Ch] [bp-114h]@1
  int v5; // [sp+D0h] [bp-50h]@4
  int v6; // [sp+DCh] [bp-44h]@4
  int v7; // [sp+E8h] [bp-38h]@4
  int v8; // [sp+F4h] [bp-2Ch]@4
  int v9; // [sp+100h] [bp-20h]@4
  int v10; // [sp+10Ch] [bp-14h]@2
  int v11; // [sp+118h] [bp-8h]@1

  memset(&v4, -858993460, 0x114u);
  v11 = this;
  result = this;
  if ( *(_DWORD *)(this + 4) < a2 )
  {
    v10 = *(_DWORD *)(v11 + 40) * a2 / *(_DWORD *)(v11 + 40);
    if ( *(_DWORD *)(v11 + 4) == -1 )
    {
      **(_DWORD **)(v11 + 52) = **(_DWORD **)(v11 + 48);
      **(_DWORD **)(v11 + 56) = **(_DWORD **)(v11 + 48);
      ++*(_DWORD *)(v11 + 4);
    }
    v9 = *(_DWORD *)(v11 + 52) + 4 * *(_DWORD *)(v11 + 4);
    v8 = *(_DWORD *)(v11 + 56) + 4 * *(_DWORD *)(v11 + 4);
    v5 = *(_DWORD *)(v11 + 40) * *(_DWORD *)(v11 + 4) / *(_DWORD *)(v11 + 40);
    v5 += *(_DWORD *)(v11 + 40);
    --v5;
    v7 = *(_DWORD *)v9;
    v6 = *(_DWORD *)v8;
    if ( v5 < v10 && *(_DWORD *)(v11 + 4) < v5 )
    {
      while ( *(_DWORD *)(v11 + 4) < v5 )
      {
        v9 += 4;
        *(_DWORD *)v9 = v7;
        v8 += 4;
        *(_DWORD *)v8 = v6;
        ++*(_DWORD *)(v11 + 4);
      }
    }
    if ( *(_DWORD *)(v11 + 4) == v5 )
    {
      ++v5;
      v7 = *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * v5);
      v6 = *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * v5);
    }
    while ( *(_DWORD *)(v11 + 4) < a2 )
    {
      v9 += 4;
      *(_DWORD *)v9 = v7;
      v8 += 4;
      *(_DWORD *)v8 = v6;
      ++*(_DWORD *)(v11 + 4);
    }
    if ( *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * a2) > *(_DWORD *)v9 )
      *(_DWORD *)v9 = *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * a2);
    result = v8;
    if ( *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * a2) < *(_DWORD *)v8 )
    {
      result = a2;
      *(_DWORD *)v8 = *(_DWORD *)(*(_DWORD *)(v11 + 48) + 4 * a2);
    }
  }
  return result;
}

template <class Type>
int CKLine<Type>::operator[](long Tick)
{
    //a2=Tick
  int result; // eax@2
  char v3; // [sp+Ch] [bp-D8h]@1
  int v4; // [sp+D0h] [bp-14h]@1
  int v5; // [sp+DCh] [bp-8h]@1

  memset(&v3, -858993460, 0xD8u);
  v5 = this;
  v4 = *(_DWORD *)(this + 40) * (a2 / *(_DWORD *)(this + 40) + 1) - 1;
  if ( v4 <= *(_DWORD *)(this + 4) )
    result = *(_DWORD *)(*(_DWORD *)(v5 + 48) + 4 * v4);
  else
    result = *(_DWORD *)(*(_DWORD *)(v5 + 48) + 4 * *(_DWORD *)(v5 + 4));
  return result;
}

template <class Type>
int CKLine<int>::GetClosePrice(int this, long Tick)
{
    //a2=Tick
  int result; // eax@2
  char v3; // [sp+Ch] [bp-D8h]@1
  int v4; // [sp+D0h] [bp-14h]@1
  int v5; // [sp+DCh] [bp-8h]@1

  memset(&v3, -858993460, 0xD8u);
  v5 = this;
  v4 = *(_DWORD *)(this + 40) * (a2 / *(_DWORD *)(this + 40) + 1) - 1;
  if ( v4 <= *(_DWORD *)(this + 4) )
    result = *(_DWORD *)(*(_DWORD *)(v5 + 48) + 4 * v4);
  else
    result = *(_DWORD *)(*(_DWORD *)(v5 + 48) + 4 * *(_DWORD *)(v5 + 4));
  return result;
}

template <class Type>
class CKLine :
    public IIndexCalculator<Type>
{
public:
    CKLine(const Type * ori_data,long winsize,long size);
    ~CKLine();
    virtual void DoAction(long Tick, const char * Instrument = NULL);
	inline const Type * GetMaxPriceIndex() const{return MaxPrice;};
	inline const Type * GetMinPriceIndex() const{return MinPrice;};

	Type operator[] (long Tick) const;	//返回ClosePrice
	inline Type GetOpenPrice(long Tick) const{return OriginalData[(Tick/this->WinSize)*this->WinSize];};
	Type GetClosePrice(long Tick) const;
	inline Type GetMaxPrice(long Tick) const{return MaxPrice[Tick];};
	inline Type GetMinPrice(long Tick) const{return MinPrice[Tick];};
private:
    const Type * OriginalData;
    Type * MaxPrice;
    Type * MinPrice;
};

template <class Type>
void CKLine<Type>::DoAction(long Tick, const char * Instrument)
{
    
}


