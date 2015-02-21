//
//  tplat_main.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "tplat_main.h"
#include <assert.h>
#include "data_platform.h"

using namespace std;
DataPlatServ *g_data_plat_server;
void tplat_quote_init(int argc, const char *argv[])
{
        g_data_plat_server=new DataPlatServ();
}
void tplat_trade_init(int argc, const char *argv[])
{
        g_data_plat_server=new DataPlatServ();
}


void tplat_main(int argc, const char *argv[])
{
    if (string("tplat")==string(argv[1]) && string("trade")==string(argv[2])) {
        tplat_trade_init(argc,argv);
    }else if(string("tplat")==string(argv[1]) && string("quote")==string(argv[2]))
    {
        tplat_quote_init(argc,argv);
    }else {
        assert(0);
    }
}


