//
//  data_platform_strategy.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_strategy__
#define __tplat__data_platform_strategy__

#include <iostream>
class DataPlatServ;

class StrategyDataServ
{
public:
    StrategyDataServ(){_dps=NULL;};
    StrategyDataServ(DataPlatServ *dps){_dps=dps;};
    int register_strategy(std::string strategyname){};
private:
          DataPlatServ *_dps;
};

#endif /* defined(__tplat__data_platform_strategy__) */
