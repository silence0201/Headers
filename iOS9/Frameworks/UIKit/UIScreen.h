//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UICoordinateSpace-Protocol.h>
#import <UIKit/UIFocusContainer-Protocol.h>
#import <UIKit/UIFocusEnvironment-Protocol.h>
#import <UIKit/UITraitEnvironment-Protocol.h>
#import <UIKit/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKit/_UITraitEnvironmentInternal-Protocol.h>

@class FBSDisplay, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSString, UIFocusAnimationCoordinator, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, _UIScreenFixedCoordinateSpace;
@protocol UICoordinateSpace, UIFocusContainer, UIFocusEnvironment;

@interface UIScreen : NSObject <UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, UIFocusEnvironment, UIFocusContainer, UITraitEnvironment>
{
    id _display;
    struct CGRect _bounds;
    struct CGRect _unjailedReferenceBounds;
    struct CGRect _referenceBounds;
    struct CGRect _mainSceneReferenceBounds;
    long long _interfaceOrientation;
    double _scale;
    double _touchScaleFactor;
    double _horizontalScale;
    long long _userInterfaceIdiom;
    NSDictionary *_capabilities;
    UIWindow *_screenDisablingWindow;
    double _startedPausingWindows;
    NSMutableArray *_pausedWindows;
    NSArray *_availableDisplayModes;
    double _pointsPerInch;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    UIView *_focusedView;
    UIView *_previousFocusedView;
    id <UIFocusEnvironment> _pendingFocusUpdateEnvironment;
    _Bool _pendingFocusUpdateAllowsDeferral;
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int overscanCompensation:2;
        unsigned int screenUpdatesDisabled:1;
        unsigned int wantsWideContentMargins:1;
        unsigned int queriedDeviceContentMargins:1;
        unsigned int hasCalculatedPointsPerInch:1;
        unsigned int screenCreatedFBSDisplay:1;
        unsigned int ignoreFocusUpdateIfNeeded:1;
        unsigned int forceFocusedViewMayRemainFocused:1;
    } _screenFlags;
    _Bool _performingSystemSnapshot;
    _Bool _wantsSoftwareDimming;
    float _lastNotifiedBacklightLevel;
    UITraitCollection *_defaultTraitCollection;
    UITraitCollection *_overrideTraitCollection;
    UITraitCollection *_lastNotifiedTraitCollection;
    FBSDisplay *_fbsDisplay;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    NSHashTable *_unfocusingViews;
    UIFocusAnimationCoordinator *_currentFocusAnimationCoordinator;
    UIWindow<UIFocusEnvironment> *__focusedWindow;
    double _lastFocusStartTime;
}

+ (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
+ (id)__connectedFBSDisplays;
+ (_Bool)_shouldDisableJail;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(_Bool)arg3;
+ (id)_screenForScene:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_endDisableScreenUpdates;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(_Bool)arg1;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_workspaceCapableScreens;
+ (id)_carScreen;
+ (id)screens;
+ (void)_enumerateScreensWithBlock:(CDUnknownBlockType)arg1;
+ (struct CGAffineTransform)transformToRotateScreen:(double)arg1;
+ (struct CGAffineTransform)transformForScreenOriginRotation:(double)arg1;
+ (id)mainScreen;
+ (void)_videoOutSettingsChanged;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__availableScenes;
+ (id)__sceneTrackingQueue;
+ (void)initialize;
@property(readonly, nonatomic, getter=_lastFocusStartTime) double lastFocusStartTime; // @synthesize lastFocusStartTime=_lastFocusStartTime;
@property(nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // @synthesize _focusedWindow=__focusedWindow;
@property(readonly, nonatomic, getter=_currentFocusAnimationCoordinator) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator; // @synthesize currentFocusAnimationCoordinator=_currentFocusAnimationCoordinator;
@property(nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // @synthesize _lastNotifiedBacklightLevel;
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property(nonatomic) _Bool wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;
@property(nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) _Bool _performingSystemSnapshot; // @synthesize _performingSystemSnapshot;
@property(readonly, nonatomic) struct CGRect _referenceBounds; // @synthesize _referenceBounds;
@property(retain, nonatomic) FBSDisplay *fbsDisplay; // @synthesize fbsDisplay=_fbsDisplay;
@property(retain, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // @synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection;
@property(retain, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property(retain, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // @synthesize defaultTraitCollection=_defaultTraitCollection;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *_unfocusingViews; // @synthesize _unfocusingViews;
@property(readonly, nonatomic) UIView *_previousFocusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
@property(readonly, nonatomic) id <UIFocusContainer> preferredFocusedItem;
- (_Bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (_Bool)shouldChangeFocusedItem:(id)arg1;
- (void)_noteItemNeedsPreferredFocusedItemUpdate:(id)arg1;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)updatePreferredFocusedItemIfNeeded;
- (id)_pendingPreferredFocusedItem;
- (_Bool)isAncestorOfItem:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (_Bool)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (void)updateFocusIfNeeded;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property(readonly, nonatomic) _Bool supportsFocus;
- (id)_pendingFocusUpdateEnvironment;
- (_Bool)_isEnvironmentEligibleForFocusUpdate:(id)arg1 allowsDeferral:(_Bool)arg2;
- (void)_possibleFocusedViewAncestor:(id)arg1 willBeRemovedFromSuperview:(id)arg2;
- (void)_noteEnvironmentNeedsFocusUpdate:(id)arg1 allowsDeferral:(_Bool)arg2;
- (id)focusedItem;
@property(readonly, nonatomic) __weak UIView *focusedView;
- (_Bool)_updateFocusWithContext:(id)arg1;
- (_Bool)_updateFocusToView:(id)arg1;
- (id)_contextForProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (id)_contextForCurrentFocusState;
@property(nonatomic, getter=_ignoreFocusUpdateIfNeeded, setter=_setIgnoreFocusUpdateIfNeeded:) _Bool ignoreFocusUpdateIfNeeded;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
@property(readonly, nonatomic) double nativeScale;
@property(readonly, nonatomic) struct CGRect nativeBounds;
- (struct CGRect)_nativeDisplayBounds;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) double brightness;
- (_Bool)_supportsBrightness;
- (void)_endObservingBacklightLevelNotifications;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect)_mainSceneFrame;
- (id)_display;
- (_Bool)_isRightHandDrive;
- (_Bool)_areMusicListsLimited;
- (_Bool)_areListsLimited;
- (_Bool)_isUIElementLimited:(CDUnknownBlockType)arg1;
- (long long)_workspaceCapableScreenType;
- (_Bool)_isWorkspaceCapable;
- (id)_displayID;
- (void)_setExternalDeviceShouldInputText:(_Bool)arg1;
- (long long)_forceTouchCapability;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (id)_capabilityForKey:(id)arg1;
- (id)_capabilities;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows;
- (void)_notifySceneBoundsChanged:(_Bool)arg1;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows:(_Bool)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(_Bool)arg2;
- (void)_updateTraits;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly) id <UICoordinateSpace> fixedCoordinateSpace;
@property(readonly) id <UICoordinateSpace> coordinateSpace;
- (void)_updateCapabilities;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (long long)_userInterfaceIdiom;
- (void)_updateUserInterfaceIdiom;
- (void)_disconnectScreen;
- (void)_connectScreen;
- (_Bool)_orientedMainSceneReferenceBoundsEqualDestinationBounds:(struct CGRect)arg1 interfaceOrientation:(long long)arg2;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setInterfaceOrientation:(long long)arg1 computeMetrics:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_setInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (long long)_interfaceOrientation;
- (_Bool)_isValidInterfaceOrientation:(long long)arg1;
- (double)_pointsPerInch;
- (double)_touchScaleFactor;
- (void)_setScale:(double)arg1;
- (double)_scale;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)_prepareForWindow;
- (_Bool)_hasStatusBar;
- (_Bool)_isCarScreen;
- (_Bool)_isMainScreen;
- (_Bool)_isExternal;
- (id)_name;
- (unsigned int)_seed;
- (unsigned int)_integerDisplayID;
@property(readonly, nonatomic) struct UIEdgeInsets overscanCompensationInsets;
@property(nonatomic) long long overscanCompensation;
@property(readonly, copy, nonatomic) NSArray *availableModes;
- (int)screenType;
@property(retain, nonatomic) UIScreenMode *currentMode;
- (void)setBitsPerComponent:(int)arg1;
- (int)bitsPerComponent;
@property(readonly, nonatomic) UIScreenMode *preferredMode;
@property(readonly, nonatomic) UIScreen *mirroredScreen;
- (double)_refreshRate;
- (long long)_imageOrientation;
- (double)_rotation;
- (double)_touchRadiusScaleFactor;
- (double)_horizontalPixelScale;
- (struct CGRect)_applicationFrame;
@property(readonly, nonatomic) struct CGRect applicationFrame;
- (struct CGRect)_interfaceOrientedMainSceneBounds;
- (struct CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsInPixels;
- (struct CGRect)_unjailedReferenceBounds;
- (void)_computeMetrics;
- (void)_computeMetrics:(_Bool)arg1;
- (struct CGRect)_overrideReferenceBounds;
- (_Bool)_isRotatable;
- (void)_updateReferenceBoundsToSceneReferenceBounds:(struct CGRect)arg1 fromInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)_updateWithMainSceneSettings:(id)arg1 animated:(_Bool)arg2;
- (void)_noteSceneOrientationUpdate:(long long)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1 computingMetricsIfNecessary:(_Bool)arg2 notify:(_Bool)arg3;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1 computingMetricsIfNecessary:(_Bool)arg2;
- (void)_setMainSceneReferenceBounds:(struct CGRect)arg1;
- (struct CGRect)_mainSceneReferenceBoundsForSettings:(id)arg1;
- (struct CGRect)_mainSceneReferenceBounds;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(_Bool)arg1;
- (_Bool)_overscanAdjustmentNeedsUpdate;
- (_Bool)_isOverscanned;
- (_Bool)_hasWindows;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateAvailableDisplayModes;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (void)_enumerateWindowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_ensureConnectedIfPossible;
- (_Bool)_wantsWideContentMargins;
- (id)snapshot;
- (id)snapshotView;
- (void)_enableScreenUpdates;
- (void)_disableScreenUpdates:(_Bool)arg1;
- (void)_setSpeed:(double)arg1 forWindow:(id)arg2;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

