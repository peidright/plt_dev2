//
//  order_agent.h
//  tplat
//
//  Created by dev on 2/3/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__order_agent__
#define __tplat__order_agent__

#include <iostream>

/*
 所有的交易策略，每个交易合约，包含一个OrderAgent对象。负责交易策略的执行。(策略与执行分离)
 */

class OrderAgent
{
    OrderAgent(){};
    int order(const char *instrument, double price, int lots, int direct, int flag){};
    int actor(void *){};
private:
    
};




#endif /* defined(__tplat__order_agent__) */
