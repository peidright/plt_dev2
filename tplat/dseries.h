//
//  dseries.h
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__dseries__
#define __tplat__dseries__

#include <iostream>
template <class Type>
class DataSeries
{
    static const int MAX_DATASERIES_SIZE=10000;
    DataSeries(long size){_size=size;_cidx=-1;_data=new Type[size];};
    DataSeries(const Type * data, long num, long size){_size=size;};
    Type operator[](long idx){
		/*fault tolerent*/
		return _data[idx];
	}
    virtual int action(void *,Type value){_data[++_cidx]=value;};
private:
    Type *_data;
    long _size;
    long _cidx;
};


//winsize = K线的窗宽，size为Tick总数量
//CKLine(const Type * ori_data,long winsize,long size)template <class Type>
/*template <class Type>
class CKLine :
public IIndexCalculator<Type
 */
template <class Type>
class TimeDataSeries :public DataSeries<Type>
{
    TimeDataSeries(){};
private:
    
};

#endif /* defined(__tplat__dseries__) */
