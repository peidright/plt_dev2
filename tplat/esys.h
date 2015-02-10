//
//  event_system.h
//  tplat
//
//  Created by dev on 1/31/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__event_system__
#define __tplat__event_system__

#include <pthread.h>
class TEventQueue
{
    /*用作tick回报和交易类回报的事件驱动机制
     增加指标驱动，
     TEventQueue 提供2种驱动，一种是tick级别的驱动。1种是分钟级别的驱动.
     */
public:
    TEventQueue(size_t size);
    virtual ~TEventQueue(void);
    void sent_event(long tick, const char * instrument, void *actor);
    void reinit();
    void resize(size_t size);
protected:
    pthread_mutex_t  lock;
    pthread_cond_t   cond;
    pthread_rwlock_t rwlock;
    size_t           bufsize;
    long             *tickbuf;
    const char       **instrumentid;
    void             **actorbuf;
    int              current_index;
    int              execute_index;
};

#endif /* defined(__tplat__event_system__) */
