//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSMutableSceneClientSettings.h>

#import <UIKit/UIApplicationSceneClientSettings-Protocol.h>

@class NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>
{
}

- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool idleModeVisualEffectsEnabled;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) struct UIEdgeInsets primaryWindowOverlayInsets;
@property(nonatomic) long long notificationCenterRevealMode;
@property(nonatomic) long long controlCenterRevealMode;
@property(nonatomic) unsigned long long proximityDetectionModes;
@property(nonatomic) _Bool idleTimerDisabled;
@property(nonatomic) unsigned long long supportedInterfaceOrientations;
@property(nonatomic) long long interfaceOrientation;
@property(nonatomic) _Bool interfaceOrientationChangesDisabled;
@property(nonatomic) _Bool deviceOrientationEventsEnabled;
@property(nonatomic) long long compatibilityMode;
@property(nonatomic) double defaultPNGExpirationTime;
@property(copy, nonatomic) NSString *defaultPNGName;
@property(nonatomic) _Bool defaultStatusBarHidden;
@property(nonatomic) long long defaultStatusBarStyle;
@property(nonatomic) unsigned int statusBarContextID;
@property(nonatomic) _Bool statusBarHidden;
@property(nonatomic) long long statusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

