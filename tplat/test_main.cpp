//
//  test_main.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "test_main.h"
#include <assert.h>
#include "test_log.h"
#include "boosthelp.h"
using namespace std;
void tplat_test_init(int argc, const char *argv[])
{
    boost_test();
}

void test_main(int argc, const char *argv[])
{
    
    if (string("test")==string("test")) {
        tplat_test_init(argc,argv);
    }else {
        assert(0);
    }
}
