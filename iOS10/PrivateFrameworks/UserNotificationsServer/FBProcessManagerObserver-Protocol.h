//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class FBProcess, FBProcessManager;

@protocol FBProcessManagerObserver <NSObject>
- (void)processManager:(FBProcessManager *)arg1 didRemoveProcess:(FBProcess *)arg2;
- (void)processManager:(FBProcessManager *)arg1 didAddProcess:(FBProcess *)arg2;
@end
