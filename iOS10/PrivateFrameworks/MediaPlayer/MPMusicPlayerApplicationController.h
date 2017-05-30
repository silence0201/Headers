//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerController.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController
{
    NSObject<OS_dispatch_queue> *_queueTransationQueue;
    NSObject<OS_dispatch_semaphore> *_queueLoadingSemaphore;
}

- (void).cxx_destruct;
- (void)_queueDidInvalidate;
- (void)_queueUpdateDidFinish;
- (void)_queueRequestDidFinish;
- (void)performQueueTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
