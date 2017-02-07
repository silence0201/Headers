//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vmutils/MemoryCache.h>

@interface TaskMemoryCache : MemoryCache
{
    unsigned int _task;
    BOOL _stopped;
}

- (int)stopPeeking;
- (void)flushMemoryCache;
- (int)readPointerAt:(unsigned int)arg1 value:(unsigned int *)arg2;
- (int)peekAtAddress:(unsigned int)arg1 size:(unsigned int)arg2 returnsBuf:(void **)arg3;
- (int)peekAtAddress:(unsigned int)arg1 returnsSize:(unsigned int *)arg2 returnsBuf:(void **)arg3;
- (int)startPeeking;
- (void)finalize;
- (void)dealloc;
- (id)initForTask:(unsigned int)arg1;

@end
