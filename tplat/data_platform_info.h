

//
//  data_platform_info.h
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_info__
#define __tplat__data_platform_info__
#include <iostream>
using namespace std;

class TraderInfo{
    string username;
	string password;
};

class QuoteInfo {
    string username;
    string password;
    const static int ADDR_SIZE=6;
    string addr[ADDR_SIZE];
    string brokerid;
};

class TradeAddrInfo {
    const static int ADDR_SIZE=6;
    string addr[ADDR_SIZE];
    string brokerid;
    string username;
    string password;
};

class QuoteAddrInfo {
    public:
    const static int ADDR_SIZE=6;
    string addr[ADDR_SIZE];
    string brokerid;
    string username;
    string password;
};
/* 
class TPlatApiInfo {
    TPlatThirdQuoteSpi *quotespi;
    TPlatThirdTraderApi *tradeapi;
    TPlatThirdQuoteApi  *quoteapi;
    TPlatThirdTraderSpi *tradeSpi;
};
*/



#endif /* defined(__tplat__data_platform_info__) */
