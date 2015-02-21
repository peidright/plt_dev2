//
//  data_platform_quote.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
#include "data_platform_quote.h"

QuoteDataServ::QuoteDataServ(string dir, QuoteAddrInfo &addrinfo,DataPlatServ *dps)
{
    _dps=dps;
    _addrinfo=addrinfo;
    _dir=dir;
    _quote_api = new TPlatThirdQuoteApi(dir,addrinfo,dps);
    _quote_spi = new TPlatThirdQuoteSpi(dps);

    /*create api 
     *create spi
     * */
    //quote_api->RegisterSpi((CThostFtdcMdSpi*)quote_spi);
    //quote_api->RegisterFront((char*)quoter->quote_addr.c_str());
    //quote_api->Init();
    return;
}

int QuoteDataServ::run()
{
    /*api && spi
     *add instrument
     *parepare all data
     * */
    return 0;
}

int QuoteDataServ::add_inst(string instn)
{
    /*work 以后，才能调用 
     * */
    if (snifed_inst.find(instn)== snifed_inst.end()) {
        needed_inst[instn]=0;
        vector<string> insts;
        insts.push_back(instn);
        _quote_api->SubscribeMarketData(insts);
    }
    return 0; 
}
