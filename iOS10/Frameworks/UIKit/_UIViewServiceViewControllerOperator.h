//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/_UIHostedTextServiceSessionDelegate-Protocol.h>
#import <UIKit/_UIViewServiceDeputy-Protocol.h>
#import <UIKit/_UIViewServiceDeputyRotationSource-Protocol.h>
#import <UIKit/_UIViewServiceDummyPopoverControllerDelegate-Protocol.h>
#import <UIKit/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSUndoManager, UIActionSheet, UIPopoverController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewControllerOneToOneTransitionContext, _UIViewServiceDummyPopoverController;
@protocol _UIViewServiceViewControllerOperatorDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource>
{
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    NSMutableArray *_deferredToViewDidAppear;
    int _hostPID;
    NSString *_hostBundleID;
    CDStruct_4c969caf _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    NSArray *_plugInScenes;
    UIViewController *_localViewController;
    NSString *_presentationControllerClassName;
    _UIHostedWindow *_hostedWindow;
    _Bool _disableAutomaticKeyboardBehavior;
    UIActionSheet *_hostedActionSheet;
    _Bool _serviceInPopover;
    long long _hostStatusBarOrientation;
    double _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned long long _supportedOrientations;
    _Bool _canShowTextServices;
    struct UIEdgeInsets _localViewControllerRequestedInsets;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
    long long _editAlertToken;
    NSUndoManager *_editAlertUndoManager;
    id <_UIViewServiceViewControllerOperatorDelegate> _delegate;
    CDUnknownBlockType __traitsWillChangeHandler;
    CDUnknownBlockType __traitsDidChangeHandler;
}

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(CDStruct_4c969caf)arg4;
@property(copy, nonatomic, setter=_setTraitsDidChangeHandler:) CDUnknownBlockType _traitsDidChangeHandler; // @synthesize _traitsDidChangeHandler=__traitsDidChangeHandler;
@property(copy, nonatomic, setter=_setTraitsWillChangeHandler:) CDUnknownBlockType _traitsWillChangeHandler; // @synthesize _traitsWillChangeHandler=__traitsWillChangeHandler;
@property(nonatomic) __weak id <_UIViewServiceViewControllerOperatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(_Bool)arg3;
- (id)_dataFromPressesEvent:(id)arg1;
- (void)_sendFocusMovementAction:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_sessionForStateRestoration:(id)arg1;
- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__undoActionWithToken:(long long)arg1;
- (void)__showEditAlertView;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)__textServiceDidDismiss;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(_Bool)arg2;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (_Bool)_canShowTextServices;
- (id)_inputViewsKey;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)_presentationControllerClassName;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)__hostDisablesAutomaticKeyboardBehavior:(_Bool)arg1;
- (void)__hostDidPromoteFirstResponder;
- (void)__setContentSize:(struct CGSize)arg1;
- (void)__setContentSize:(struct CGSize)arg1 withFence:(id)arg2;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(_Bool)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(_Bool)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(_Bool)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(_Bool)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(_Bool)arg2;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(_Bool)arg3;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(_Bool)arg3;
- (void)__hostViewWillTransitionToSize:(struct CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(_Bool)arg4 whenDone:(CDUnknownBlockType)arg5;
- (_Bool)_shouldForwardLegacyRotationOnly;
- (id)_viewControllersForRotationCallbacks;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostWillEnterForeground;
- (void)__hostDidEnterBackground;
- (void)__setServiceInPopover:(_Bool)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(CDUnknownBlockType)arg2;
- (void)__hostDidDetachDisplayWithIntegerDisplayID:(unsigned int)arg1;
- (void)__hostDidAttachDisplay:(id)arg1;
- (void)__hostViewDidDisappear:(_Bool)arg1;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewDidAppear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (id)invalidate;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(_Bool)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(_Bool)arg2 andBottomView:(_Bool)arg3;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)__dimmingViewWasTapped;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1;
- (void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned long long)arg5 passthroughViews:(id)arg6 backgroundStyle:(long long)arg7 animated:(_Bool)arg8;
- (_Bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (void)_firstResponderDidChange:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(_Bool)arg3;
- (void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(_Bool)arg2;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(_Bool)arg3;
- (id)_appearanceSource;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidRegisterScrollToTopView;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)__knownPresentationWithoutPresentationControllerInstance;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
- (void)__setHostViewUnderlapsStatusBar:(_Bool)arg1;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (id)_window;
- (void)addDeputyRotationDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (_Bool)_isHostedRootViewController;
- (void)viewDidLoad;
- (void)loadView;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
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

