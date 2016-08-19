//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIMotionEffectEventConsumer-Protocol.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEngineLogger, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer>
{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    _Bool _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    int _pendingEventLock;
    CADisplayLink *_displayLink;
    _Bool _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    _Bool _slowUpdatesEnabled;
    _Bool _pendingSlowDown;
    long long _eventProviderStatus;
    _Bool _allAnalyzersAreCentered;
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;
    _Bool _isPendingReset;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (_Bool)_motionEffectsSupported;
+ (_Bool)_motionEffectsEnabled;
@property(nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)_unapplyAllEffects;
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (_Bool)_hasMotionEffectsForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (_Bool)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_stopGeneratingUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (_Bool)_shouldGenerateUpdates;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)updateWithEvent:(id)arg1;
- (void)resetMotionAnalysis;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (void)_toggleSlowUpdates;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

