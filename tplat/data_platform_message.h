//
//  data_platform_message.h
//  tplat
//
//  Created by dev on 2/9/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_message__
#define __tplat__data_platform_message__

#include <iostream>

/*系统主要有两种消息，一种是行情，驱动的消息
  一种是交易状态驱动的消息。
 */

class DataPlatMessage {
public:
    short msgref;
    short msgtype;
    long msgpad[2];
    long msglen;
    void *msgdata;
};

enum msgtype {
     /*tick消息,
      
       k线消息,
      
       指标消息,
      */
    
    
};


#endif /* defined(__tplat__data_platform_message__) */
