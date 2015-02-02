//
//  boosthelp.cpp
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "boosthelp.h"
#include <boost/thread/thread.hpp>
#include <boost/interprocess/sync/interprocess_semaphore.hpp>
#include <boost/thread/mutex.hpp>

void boost_worker(const std::string &s)
{
    std::cout<<s<<std::endl;
}
void boost_test()
{
    boost::thread_group tg;
    tg.add_thread(new boost::thread(boost_worker,"dddd"));

}

long  my_hash(std::string str)
{
    boost::hash<std::string> string_hash;
    return string_hash(str);
}