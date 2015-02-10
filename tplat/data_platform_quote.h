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
#include "data_platform_account.h"

class DataPlatServ;
class QuoteDataServ
{
public:
    QuoteDataServ(){_dps=NULL;};
    QuoteDataServ(DataPlatServ *dps){_dps=dps;};
    int add_quote(Account *account){};
    int ref_quote(string accountid){};

private:
    DataPlatServ *_dps;
};

#endif /* defined(__tplat__data_platform_quote__) */
