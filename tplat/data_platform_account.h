//
//  data_platform_account.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_account__
#define __tplat__data_platform_account__

#include <iostream>
#include "data_platform_info.h"

class DataPlatServ;

class Account {
public:
    Account(TraderInfo *traderinfo, TradeInfo *tradeinfo, QuoteInfo *quoteinfo){
        
        return;
    };
    Account() {
        /*默认账户。测试用。
         */
        return;
    };
private:
    TraderInfo *traderinfo;
    TradeInfo  *tradeinfo;
    QuoteInfo  *quoteinfo;
};


class AccountDataServ
{
public:
    AccountDataServ(){_dps=NULL;};
    AccountDataServ(DataPlatServ *dps){_dps=dps;};
    int register_account( Account *account ){};
private:
        DataPlatServ *_dps;
};

#endif /* defined(__tplat__data_platform_account__) */
