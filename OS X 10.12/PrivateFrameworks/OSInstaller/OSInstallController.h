//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSInstaller/SKManagerListener-Protocol.h>

@class IASUnifiedProgressClient, NSArray, NSDate, NSError, NSMutableArray, NSNumber, NSString, NSTimer, OSIDebuggerTool, OSIPowerController, OSInstallOptions;
@protocol OSInstallControllerDelegate, OS_dispatch_queue;

@interface OSInstallController : NSObject <SKManagerListener>
{
    IASUnifiedProgressClient *_progressClient;
    OSIPowerController *_powerManager;
    OSInstallOptions *_options;
    NSMutableArray *_customizationOptions;
    NSMutableArray *_products;
    NSMutableArray *_distControllers;
    NSObject<OS_dispatch_queue> *_targetEvaluationQueue;
    NSMutableArray *_validTargets;
    NSMutableArray *_invalidTargetsWithErrors;
    NSMutableArray *_installOperations;
    double _initialTimeRemaining;
    double _totalNonRunningTimeRemaining;
    double _lastTimeRemaining;
    double _lastIncommingTime;
    NSDate *_lastUpdateDate;
    NSTimer *_progressUpdateCheckTimer;
    NSTimer *_stuckElementTimer;
    BOOL _showingStuckUI;
    double _progressCompleted;
    double _lastProgress;
    BOOL _shouldProcessTimeRemaining;
    OSIDebuggerTool *_osiDebuggerTool;
    BOOL _isCollectionInstall;
    BOOL _isCurrentlyInstalling;
    BOOL _hasEvaluatedInstallability;
    BOOL _installationCompletedSuccessfully;
    NSError *_installCheckFailureReason;
    NSObject<OSInstallControllerDelegate> *_delegate;
    NSError *_installFailureReason;
    NSString *_currentStatus;
}

@property BOOL installationCompletedSuccessfully; // @synthesize installationCompletedSuccessfully=_installationCompletedSuccessfully;
@property(retain) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain) NSError *installFailureReason; // @synthesize installFailureReason=_installFailureReason;
@property NSObject<OSInstallControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *installCheckFailureReason; // @synthesize installCheckFailureReason=_installCheckFailureReason;
@property BOOL hasEvaluatedInstallability; // @synthesize hasEvaluatedInstallability=_hasEvaluatedInstallability;
@property BOOL isCurrentlyInstalling; // @synthesize isCurrentlyInstalling=_isCurrentlyInstalling;
@property BOOL isCollectionInstall; // @synthesize isCollectionInstall=_isCollectionInstall;
- (void)_queueProgressWatchdog:(id)arg1;
- (void)_queueProgressStuck:(id)arg1;
- (void)operation:(id)arg1 timeRemaining:(double)arg2;
- (double)smoothTimeRemaining:(double)arg1;
- (double)timeRemainingAfter:(id)arg1;
- (void)stopProgressTimer;
- (BOOL)_isValidCompatibilityUpdatePackage:(id)arg1;
- (BOOL)_isRecoverySupportedForTarget:(id)arg1;
- (id)_mountDiskImageWithPath:(id)arg1;
- (id)_baseSystemMountPathFromXML:(id)arg1;
- (BOOL)_isOSInstallFromXML:(id)arg1;
- (void)_logSystemInfo;
- (void)_evaluateDisks:(id)arg1;
- (void)_removeDisksFromHandledTargets:(id)arg1;
- (id)target;
- (BOOL)setTarget:(id)arg1 error:(id *)arg2;
- (void)initialPopulateComplete;
- (id)visibleDiskRoles;
- (void)disksDisappeared:(id)arg1;
- (void)disksChanged:(id)arg1;
- (void)disksAppeared:(id)arg1;
- (void)_startTargetEvaulationQueue;
- (id)localizedProductName;
- (id)licenseAgreement;
- (void)prepareForReboot;
- (BOOL)startInstall;
@property(readonly) NSNumber *bytesRequiredToInstall;
- (long long)_recursivelyUpdateStateForItem:(id)arg1;
- (void)updateCustomizationState;
@property(readonly) NSArray *customizationOptions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)options;
- (void)_invalidateCustomization;
@property(readonly) BOOL hasCustomizationOptions;
- (void)dealloc;
- (id)initWithDistributionPath:(id)arg1 considerAutomation:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
