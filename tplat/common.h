//
//  common.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__common__
#define __tplat__common__

#include <iostream>

#include <string>
#include <vector>

using namespace std;

extern string remove_space(const string & src);
extern string upper_case(const string & src);
extern void split_string(const string & src, const string & delimiter, vector<string> & vstr);
extern string get_today();
extern string get_time();
//读取二进制数据到内存
extern long load_bfile(const char * filename, void * dst);
//将内存数据存储到二进制文件：注意size为内存的字节数
extern void save_bmem(const char * filename, void * src, long size);

#endif /* defined(__tplat__common__) */
