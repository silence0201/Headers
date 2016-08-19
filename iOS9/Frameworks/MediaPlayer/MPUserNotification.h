//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPUserNotification : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;
    CDUnknownBlockType _willShowNotificationHandler;
    id strongSelf;
    _Bool _isShowing;
    struct __CFRunLoopSource *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
    struct __CFUserNotification *_cfUserNotification;
}

+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg1;
+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification *)arg2;
+ (id)_userNotificationConversionAccessQueue;
@property(readonly, nonatomic) struct __CFUserNotification *cfUserNotification; // @synthesize cfUserNotification=_cfUserNotification;
- (void).cxx_destruct;
- (void)_didReceiveResponseWithFlags:(unsigned long long)arg1;
- (void)_cancelSynchronously:(_Bool)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType willShowNotificationHandler;
- (void)dealloc;
- (id)initWithCFUserNotification:(struct __CFUserNotification *)arg1;
- (id)init;

@end

