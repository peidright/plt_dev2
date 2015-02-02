//
//  main.cpp
//  tplat
//
//  Created by dev on 1/29/15.
//  Copyright (c) 2015 dev. All rights reserved.
//
#include <cstddef>
#include <iostream>
#include <boost/uuid/uuid.hpp>
#include "esys.h"
#include "boosthelp.h"
#include <assert.h>
#include "test_main.h"
#include "tplat_main.h"

#include "log.h"
using namespace std;
int main(int argc, const char * argv[])
{
    boost::uuids::uuid u1 = {
        0x12, 0x34, 0x56, 0x78,
        0x90, 0xab, 0xcd, 0xef,
        0x12, 0x34, 0x56, 0x78,
        0x90, 0xab, 0xcd, 0xef };
    boost::uuids::uuid u2 = {
        0x12, 0x34, 0x56, 0x78,
        0x90, 0xab, 0xcd, 0xef,
        0x12, 0x34, 0x56, 0x78,
        0x90, 0xab, 0xcd, 0xef };
    std::cout << (u1 == u2) << "\n";
    LOG_INIT("127.0.0.1",8888, "test.log");
    
    test_main(argc,argv);
    return 0;
    assert(argc>0);
    
    if(string("test")==string(argv[1])){
        test_main(argc,argv);
    }else if(string("trade")==string(argv[1])) {
        tplat_main(argc,argv);
    }
    return 0;
}