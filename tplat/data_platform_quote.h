//
//  data_platform_quote.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_quote__
#define __tplat__data_platform_quote__

#include <iostream>
#include "data_platform_ctp_quote.h"
#include "data_platform_account.h"
#include <map>

class DataPlatServ;
class TPlatThirdQuoteApi;
class TPlatThirdQuoteSpi;
class QuoteDataServ
{
public:
    QuoteDataServ(string dir, QuoteAddrInfo &addrinfo,DataPlatServ *dps);
    int run();
    int add_inst(string instn);
private:
    map<string, int>  needed_inst;
    map<string, int>  snifed_inst;
    QuoteAddrInfo _addrinfo;
    string        _dir;
    DataPlatServ *_dps;
    TPlatThirdQuoteApi  *_quote_api;
    TPlatThirdQuoteSpi  *_quote_spi;
};

#endif /* defined(__tplat__data_platform_quote__) */
