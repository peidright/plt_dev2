//
//  data_platform_trade.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_trade__
#define __tplat__data_platform_trade__

#include <iostream>
#include "data_platform_account.h"

class DataPlatServ;
class TradeDataServ
{
public:
    TradeDataServ(){_dps=NULL;};
    TradeDataServ(DataPlatServ *dps){_dps=dps;};
    int add_trade(Account *account){};
    int ref_trade(Account *account){};
private:
    DataPlatServ *_dps;
};

#endif /* defined(__tplat__data_platform_trade__) */
