//
//  data_plat_io.h
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_plat_io__
#define __tplat__data_plat_io__

#include <iostream>
#include <string>
#include "sqlite3.h"
#include <vector>
#include <map>
#include <assert.h>
using namespace std;

//tplat_io 为一个io对象， 负责持久化
//接口 io_key,sbkey ,data, 
//目前直接用sqlite存储，所以io_key,为dbname, sbkey为table, data为vector<map<key,key>>,或者
//

class IoItem
{
    public:
    IoItem(string key1,string key2){_key1=key1;_key2=key2;};
    virtual int put_data(string sbkey, vector<string> schema, vector<string> data)=0;
    virtual int put_data(string sbkey, vector<string> schema, vector< vector<string> > data)=0;
    private:
        string _key1;
        string _key2;
};

class IoItemDB :public IoItem
{
public:
    IoItemDB(string dir, string dbname);
    int put_data(string sbkey, vector<string> schema, vector<string> data);
    int put_data(string sbkey, vector<string> schema, vector< vector<string> > data);
    int exe_cmd(string cmd);
    int exe_cmd(string cmd, vector<map<string,string> > &rows);
    string get_key();
private:
    string  _dir;
    string  _dbname;
    sqlite3 *_db;
};

class TPlatIo{
    public:
    TPlatIo(){};        
    //int add_ioitem(string dir, string dbname);
    //int add_ioitem(IoItemDB *ioitem);
    int add_inst(string instn);
    int load_inst();
    int init(string dir);
    private:
    const string TICK_DBKEY="TICK_DB";
    const string KDATA_DBKEY="KDATA_DB";
    const string INSTRUMENT_TABLEKEY="";
    const string TRADE_DBKEY="TRADE_DB";
    const string GENERAL_DBKEY="GENERAL_DB";
    const string TEST_DBKEY="TEST_DB";
    map<string, IoItemDB *> _iomap;
};
#endif /* defined(__tplat__data_plat_io__) */
