#pragma once

#include "Common.h"

template <class Type>
class IHistoryData	//历史数据接口
{
public:
	IHistoryData(){};
	virtual ~IHistoryData(){};

	//idx只支持负数，便于指标计算时读取历史数据。idx即为从今日开始往前的Tick数值，-1即代表昨日的收盘纪录。
	virtual Type operator[](long idx) const = 0;
};

template <class Type>
class SimpleHistoryData: public IHistoryData<Type>
{
public:
	//size为数据存储大小
	SimpleHistoryData(long size):Size(size){Data=new Type[size];WritingPoint=(char*)Data;};
	SimpleHistoryData():Size(0),Data(NULL){};
	virtual ~SimpleHistoryData(){if(Data) delete [] Data;};

	//idx只支持负数，便于指标计算时读取历史数据。idx即为Tick数值
	virtual Type operator[] (long idx) const{return Data[Size+idx];};

	//此函数根据文件打开顺序依次将文件中所存储的二进制数据依次加载如Data地址。调用时请从时间最早的记录开始加载！
	inline void LoadData(char * filename){WritingPoint += LoadBinFileToMem(filename,WritingPoint);};

protected:
	Type * Data;
	long Size;

	char * WritingPoint;
};

template <class Type>
class SampleHistoryData: public SimpleHistoryData<Type>	//抽样历史数据
{
public:
	//size为数据存储大小，step为间隔多少个Tick进行的采样
	SampleHistoryData(long size,long step):SimpleHistoryData<Type>(size),Step(step){};
	virtual ~SampleHistoryData(){};

	//idx只支持负数，便于指标计算时读取历史数据。idx即为Tick数值
	virtual Type operator[] (long idx) const{return this->Data[this->Size + (++idx)/Step];};

protected:
	long Step;
};

template <class Type>
class PatchedHistoryData:public IHistoryData<Type>	//以当日第一个数据填充历史数据
{
public:
	//size为数据存储大小，step为间隔多少个Tick进行的采样
	PatchedHistoryData(const Type * firstdata):FirstData(firstdata){};
	virtual ~PatchedHistoryData(){};

	//idx只支持负数，便于指标计算时读取历史数据。idx即为Tick数值
	virtual Type operator[] (long idx) const{return *FirstData;};

protected:
	const Type * FirstData;
};
