//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAWorkerJob;
@protocol OS_dispatch_queue;

@interface _PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    _Bool _continueReporting;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;
- (id)job;
- (id)initWithJob:(id)arg1;

@end
