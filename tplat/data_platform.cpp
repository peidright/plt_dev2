//
//  data_platform.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "data_platform.h"





DataPlatServ::DataPlatServ()
{
    tplat_io=new TPlatIo();
    tplat_io->init("./data");
}
