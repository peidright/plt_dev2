#pragma once

#include "ITimeAction.h"
#include "IHistoryData.h"
#include "Tick.h"

template <class RType>
class IIndexCalculator:
    public ITimeAction
{
public:
    IIndexCalculator(long winsize, long size);	//用以指明Index的数组大小
    virtual ~IIndexCalculator();
	inline RType operator[] (long idx) const{return Index[idx];};
	inline long GetWinSize() const {return WinSize;};
	inline const RType * GetIndex() const{return Index;};
	
	
	//将Index数据里面的数据存入指定的二进制文件，若指定第二个参数则为存储末尾的size个数据。
	void SaveIndex2BinFile(char * filename,long size = 0) const;
	//以文本格式存储指标数据
	void SaveIndex2TxtFile(char * filename,CTickMapping & tmap) const;

protected:
    RType * Index;
    long WinSize;
    long BufSize;
};

//HType类型为历史数据的数据类型，例如：int, long, float, double
//Const用于说明指标计算不会改变原有数据
//对于类用引用避免调用Copy构造函数
//通过类的[]运算符操作效率不够高。


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
template <class Type>
class CEMAIndex :
    public IIndexCalculator<double>
{
public:
	CEMAIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data, const IHistoryData<double> & old_ema_data,long winsize,long bufsize,double alpha = 0, long step = 1);
    CEMAIndex(const Type * ori_data,long winsize,long bufsize,double alpha = 0, long step = 1);
    ~CEMAIndex();

	inline long GetStep() const {return Step;};
    virtual void DoAction(long Tick, const char * Instrument = NULL);

private:
	const IHistoryData<Type> & OldOriginalData;
	const IHistoryData<double> & OldIndexData;

	const PatchedHistoryData<Type> DefaultOldOriginalData;
	const PatchedHistoryData<double> DefaultOldEMAData;

    const Type * OriginalData;
    double Alpha;
    double Beta;	//1-Alpha
    long Step;
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

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

//Type类型必须是指针、支持[]操作符号的类型
//建议例子 const int *；类名 &
//Const用于说明指标计算不会改变原有数据
//对于类用引用避免调用Copy构造函数
//通过类的[]运算符操作效率不够高。
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
template <class Type>
class CRSIIndex :
	public IIndexCalculator<double>
{
public:
	CRSIIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data,long winsize, long bufsize,long step = 1);
	CRSIIndex(const Type * ori_data,long winsize, long bufsize,long step = 1);
	~CRSIIndex();

	inline long GetStep() const {return Step;};
	virtual void DoAction(long Tick, const char * Instrument = NULL);

private:
	const IHistoryData<Type> & OldOriginalData;
	const PatchedHistoryData<Type> DefaultOldOriginalData;

	const Type * OriginalData;
	long Step;
};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Type类型必须是指针、支持[]操作符号的类型
//建议例子 const int *；类名 &
//Const用于说明指标计算不会改变原有数据
//对于类用引用避免调用Copy构造函数
//通过类的[]运算符操作效率不够高。


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
template <class Type>
class CSTDIndex :
	public IIndexCalculator<double>
{
public:
	CSTDIndex(const Type * ori_data,const IHistoryData<Type> & old_ori_data,long winsize,long bufsize, long step = 1);
	CSTDIndex(const Type * ori_data,long winsize,long bufsize, long step = 1);
	~CSTDIndex();

	inline long GetStep() const {return Step;};
	virtual void DoAction(long Tick, const char * Instrument = NULL);

private:
	const IHistoryData<Type> & OldOriginalData;

	const PatchedHistoryData<Type> DefaultOldOriginalData;

	const Type * OriginalData;
	double factor;  //  =step/WindowsSize
	long Step;

	double * AvgXSquare;
	double * AvgX;
};

template <class Type>
class CMaxIndex :
	public IIndexCalculator<Type>
{
public:
	CMaxIndex(const Type * ori_data,long winsize,long bufsize);
	~CMaxIndex();

	virtual void DoAction(long Tick, const char * Instrument = NULL);
	inline long  * GetMaxPosition() const{return MaxPosition;};
	inline long GetMaxPosition(long Tick) const{return MaxPosition[Tick];};

private:
	const Type * OriginalData;
	//距离当前Tick在窗口范围类最大值所在的最近位置 
	long * MaxPosition;
};

template <class Type>
class CMinIndex :
	public IIndexCalculator<Type>
{
public:
	CMinIndex(const Type * ori_data,long winsize,long bufsize);
	~CMinIndex();

	virtual void DoAction(long Tick, const char * Instrument = NULL);
	inline long  * GetMinPosition() const{return MinPosition;};
	inline long GetMinPosition(long Tick) const{return MinPosition[Tick];};

private:
	const Type * OriginalData;
	//距离当前Tick在窗口范围类最大值所在的最近位置 
	long * MinPosition;
};