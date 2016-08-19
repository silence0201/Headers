//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIViewServiceDeputy-Protocol.h>
#import <UIKit/_UIViewServiceDeputyRotationDelegate-Protocol.h>
#import <UIKit/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface-Protocol.h>

@class NSArray, NSString, UIWindow, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>
{
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    id _remoteViewControllerProxy;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    struct CGSize _sceneSize;
    _Bool _canRestoreInputViews;
    _Bool _isRestoringInputViews;
    _Bool _didResignForDisappear;
    _Bool _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
}

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;
- (void).cxx_destruct;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)performOnRelevantWindows:(CDUnknownBlockType)arg1;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(_Bool)arg2;
- (void)forceSyncToStatusBarOrientation;
- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)__hostWillEnterForeground;
- (void)_restoreInputViews;
- (void)__hostDidEnterBackground;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSceneSize:(struct CGSize)arg1;
- (void)_resetSceneSize;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_sendNotification:(id)arg1;
- (void)windowDidGainFirstResponder:(id)arg1;
- (void)dealloc;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_queue;
- (id)autorelease;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

