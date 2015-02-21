//
//  trader.h
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__trader__
#define __tplat__trader__

#include <iostream>
#include "data_platform_info.h"

/* one trader, one strategy, one trading api, share one MarketQuote
 * */

class Trader {
public:
    TraderInfo trader_info;
    void *order_agent;
    void *strategy;
    void *dps;
};


#endif /* defined(__tplat__trader__) */
