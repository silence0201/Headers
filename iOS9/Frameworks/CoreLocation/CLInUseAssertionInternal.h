//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CLInUseAssertionInternal : NSObject
{
    NSString *fBundlePath;
    NSString *fBundleIdentifier;
    NSString *fReason;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    struct CLConnectionClient *fLocationdConnection;
}

- (void)invalidate;
- (id)initWithBundle:(id)arg1 bundleID:(id)arg2 reason:(id)arg3;

@end

