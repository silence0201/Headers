//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface TestDriveController : NSObject
{
    NSTimer *_timeoutTimer;
    long long _currentState;
    CDUnknownBlockType _testDriveTimeoutHandler;
}

+ (id)sharedController;
@property(copy, nonatomic) CDUnknownBlockType testDriveTimeoutHandler; // @synthesize testDriveTimeoutHandler=_testDriveTimeoutHandler;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (long long)_originBrowserForBundleIdentifier:(id)arg1;
- (long long)_originBrowserForBundle:(id)arg1;
- (void)_browserDataImportingDidCancel:(id)arg1;
- (void)_browserDataImportingDidFail:(id)arg1;
- (void)_browserDataImportingDidPartiallySucceed:(id)arg1;
- (void)_browserDataImportingDidSucceed:(id)arg1;
- (void)_browserDataImportingDidPartialImport:(id)arg1;
- (void)_oneOrMoreImportsSucceeded;
- (void)_startTestDriveForBrowserBundle:(id)arg1;
- (void)_resetTestDrive;
- (void)_prepareForTestDrive;
- (void)_revealTestDriveMigrationUISoon;
- (void)_timeoutTimerFired:(id)arg1;
- (void)_rescheduleTimeoutTimerIfNeeded;
- (void)_discardImportedDataRegardlessOfState;
- (void)_discardImportedData;
- (void)_keepImportedData;
- (void)_resumeTestDrive;
- (BOOL)_canResumeTestDrive;
- (void)_resetTestDriveToHandleDefaultBrowserChangeDuringImport;
- (BOOL)_shouldStartTestDriveDueToDefaultBrowserChange;
- (BOOL)_defaultBrowserChangedDuringTestDrive;
- (void)finishTestDriveKeepingImportedData:(BOOL)arg1 defaultBrowserPromptingBehavior:(long long)arg2;
- (BOOL)tryResumingTestDrive;
- (void)startTestDrive;
- (BOOL)shouldStartTestDrive;
@property(retain, nonatomic) NSDate *startDate;
@property(nonatomic) long long originBrowser;
@property(readonly, nonatomic) BOOL hasImportedPasswordsForTestDrive;
- (BOOL)isTestDrivingBrowserMatchingBundleIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isTestDriving) BOOL testDriving;
@property(nonatomic) long long userDecision;
- (id)init;

@end
