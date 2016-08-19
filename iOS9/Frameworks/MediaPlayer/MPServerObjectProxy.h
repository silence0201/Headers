//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPServerObjectProxy : NSObject
{
    unsigned int _didPrepareForRemoteSelectorInvocation:1;
    unsigned int _lastPrepareForRemoteSelectorInvocationTimedOut:1;
    double _lastPrepareAttemptTime;
}

+ (id)_center;
- (id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (_Bool)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (void)_serverConnectionDied;
- (void)_messagingCenterDied:(id)arg1;
- (void)serverConnectionDied;
- (void)didPrepareForRemoteSelectorInvocation;
- (_Bool)prepareForRemoteSelectorInvocationWithTimeout:(double *)arg1;
- (_Bool)prepareForRemoteSelectorInvocation;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

