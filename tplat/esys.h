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
    const char **    instrumentid;
    void       **    actorbuf;
    int              current_index;
    int              execute_index;
};

#endif /* defined(__tplat__event_system__) */
