//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVPeriodicTimeObserverInfo : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_1b6d18a9 _interval;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDStruct_1b6d18a9 interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

