//
//  data_platform.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform__
#define __tplat__data_platform__

#include <iostream>

#include "data_platform_indicator.h"
#include "data_platform_quote.h"
#include "data_platform_strategy.h"
#include "data_platform_trade.h"
#include "data_platform_product.h"
#include "data_platform_account.h"

class DataPlatServ
{
    DataPlatServ();
public:
    QuoteDataServ    *pquote_data_serv;
    StrategyDataServ *pstrategy_data_serv;
    TradeDataServ    *ptrade_data_serv;
    ProductDataServ  *pproduct_data_serv;
    AccountDataServ  *paccount_data_serv;
};

#endif /* defined(__tplat__data_platform__) */
