//
//  data_platform_indicator.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_indicator__
#define __tplat__data_platform_indicator__

#include <iostream>
#include "actor.h"

class DataPlatServ;
class IndicatorDataServ
{
   
    IndicatorDataServ(){_dps=NULL;};
    IndicatorDataServ(DataPlatServ *dps){_dps=dps;};
    int register_indicator(const char *instrument,Actor &actor)
    {
        /*
         */
        return 0;
    }
    int unregister_indicator(const char *instrument, Actor &actor)
    {
        /*
         */
        return 0;
    }

private:
    DataPlatServ *_dps;
};




#endif /* defined(__tplat__data_platform_indicator__) */
