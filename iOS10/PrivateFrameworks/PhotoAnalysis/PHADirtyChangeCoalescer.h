//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHACoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PHACoalescer *_valueCoalescer;
    id <PHADirtyChangeCoalescerDelegate> _delegate;
}

@property(nonatomic) __weak id <PHADirtyChangeCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;
- (id)init;

@end
