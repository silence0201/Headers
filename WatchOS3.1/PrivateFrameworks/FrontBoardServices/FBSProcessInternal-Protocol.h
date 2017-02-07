//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSProcessIdentity-Protocol.h>

@class FBSProcessExecutionProvision, FBSProcessTerminationRequest, FBSProcessWatchdog, NSError;

@protocol FBSProcessInternal <FBSProcessIdentity>
- (void)_terminateWithRequest:(FBSProcessTerminationRequest *)arg1 forWatchdog:(FBSProcessWatchdog *)arg2;
- (FBSProcessTerminationRequest *)_watchdog:(FBSProcessWatchdog *)arg1 terminationRequestForViolatedProvision:(FBSProcessExecutionProvision *)arg2 error:(NSError *)arg3;
- (_Bool)_watchdog:(FBSProcessWatchdog *)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (void)_watchdogStopped:(FBSProcessWatchdog *)arg1;
- (void)_watchdogStarted:(FBSProcessWatchdog *)arg1;
@end
