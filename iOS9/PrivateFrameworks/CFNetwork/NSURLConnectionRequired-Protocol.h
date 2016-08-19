//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSOperationQueue, NSRunLoop, NSString;

@protocol NSURLConnectionRequired <NSObject>

@optional
- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)_setDelegateQueue:(NSOperationQueue *)arg1;
- (void)unscheduleFromRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;
- (void)scheduleInRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;
- (void)cancel;
- (void)start;
@end

