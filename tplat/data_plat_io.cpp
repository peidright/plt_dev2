//
//  data_plat_io.cpp
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "data_plat_io.h"
#include "errno.h"
#include <cstdio>



int IoItemDB::put_data(string sbkey, vector<string> schema, vector<string> data)
{
    return 0;
};

int IoItemDB::put_data(string sbkey, vector<string> schema, vector< vector<string> > data)
{
    return 0;
};


IoItemDB::IoItemDB(string dir, string dbname):IoItem(dir,dbname)
{
	int ret;
	string path = dir + "/" + dbname;
    cout<<path<<std::endl;
	ret= sqlite3_config(SQLITE_CONFIG_URI) ;
	ret=sqlite3_config(SQLITE_CONFIG_MULTITHREAD);
	//assert(ret==SQLITE_OK);

	//ret = sqlite3_open("file:memdb1?mode=memory&cache=shared", &this->db); 
	ret = sqlite3_open(path.c_str(), &this->_db); 
	if(ret==-1) {
		//LOG_DEBUG<<"localdb create error"<<endl; 
        assert(0);
	} else {
	}
}

int IoItemDB::exe_cmd(string cmd)
{
    return 0;
}
int IoItemDB::exe_cmd(string cmd, vector<map<string,string> > &rows)
{
    return 0;
}

string IoItemDB::get_key()
{
    return _dbname;
}

/*
int TPlatIo::add_ioitem(IoItemDB *ioitem)
{
    if (_iomap.find(ioitem->get_key())!= _iomap.end()) {
        return -EEXIST; 
    } else {
        _iomap[ioitem->get_key()]= ioitem;
    }
    return 0;
}
*/


	/*
	data->sec=sec;
	data->msec=msec;
	data->ask1=mdata->pDepthMarketData.AskPrice1;
	data->ask2=mdata->pDepthMarketData.AskPrice2;
	data->ask3=mdata->pDepthMarketData.AskPrice3;
	data->ask4=mdata->pDepthMarketData.AskPrice4;
	data->ask5=mdata->pDepthMarketData.AskPrice5;
	data->bid1=mdata->pDepthMarketData.BidPrice1;
	data->bid2=mdata->pDepthMarketData.BidPrice2;
	data->bid3=mdata->pDepthMarketData.BidPrice3;
	data->bid4=mdata->pDepthMarketData.BidPrice4;
	data->bid5=mdata->pDepthMarketData.BidPrice5;
	data->vol=mdata->pDepthMarketData.Volume;
	data->uprice=mdata->pDepthMarketData.UpperLimitPrice;
	data->lprice=mdata->pDepthMarketData.LowerLimitPrice;
	data->high=mdata->pDepthMarketData.HighestPrice;
	data->low=mdata->pDepthMarketData.LowestPrice;
	data->close=mdata->pDepthMarketData.OpenPrice;
	data->open=mdata->pDepthMarketData.ClosePrice;
	data->lastprice=mdata->pDepthMarketData.LastPrice;
	*/

int TPlatIo::init(string dir)
{
    /*create KDATA_DBKEY
     *create TICK_DBKEY
     * */
    _iomap[KDATA_DBKEY]=new IoItemDB(dir, KDATA_DBKEY);
    _iomap[TICK_DBKEY] =new IoItemDB(dir, TICK_DBKEY);
    _iomap[TEST_DBKEY] =new IoItemDB(dir, TEST_DBKEY);

    /*init default table
     *instruments table
     * */
    _iomap[TEST_DBKEY]->exe_cmd("create table instruments(instrumentid char(32), exchangeid char(32), instrumentname char(32),\
                                ExchangeInstID char(32), productid char(32), productclass char(1), dyear integer, dmonth integer,\
                                maxmorderv integer, minmorderv integer, maxlorderv integer, minlorderv integer, volumemultple integer,\
                                pricetick real, createdate char(32), opendate char(32), expiredate char(32), startdelivdate char(32),\
                                enddelivdate char(32), instlifephase char(1), istrading integer, position_type integer, \
                                position_date_type integer, longmarginratio real, shortmarginratio real, mmsalgorithm integer)");

    return 0;
};

int TPlatIo::add_inst(string instn)
{
    if(_iomap.find(instn)!=_iomap.end()) {
        /* 
	TThostFtdcPriceType	LastPrice;
	TThostFtdcVolumeType	Volume;
	TThostFtdcPriceType	BidPrice1;
	TThostFtdcVolumeType	BidVolume1;
	TThostFtdcPriceType	AskPrice1;
	TThostFtdcVolumeType	AskVolume1;
	TThostFtdcPriceType	BidPrice2;
	TThostFtdcLargeVolumeType	OpenInterest;
	TThostFtdcTimeType	UpdateTime;
	TThostFtdcMillisecType	UpdateMillisec;
         * */
        /*create tick table  */
        char sqlbuf[256];
        sprintf(sqlbuf,"create table tdata_%s(lastprice real,volume integer,bid1 real,bidvol1 integer, ask1 real, askvol1 integer, amount integer,sec integer, vol integer)", instn.c_str());
        _iomap[TEST_DBKEY]->exe_cmd(sqlbuf);
        /*create kdata table  */
    } else {
        assert(0);
    }
    return 0;
}

int TPlatIo::load_inst()
{
    /* 
     * */
    return 0;
}
