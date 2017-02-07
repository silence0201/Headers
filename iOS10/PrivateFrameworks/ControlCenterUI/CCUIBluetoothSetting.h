//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@interface CCUIBluetoothSetting : CCUISettingModule
{
    _Bool _bluetoothEnabled;
}

+ (id)statusOffString;
+ (id)statusOnString;
+ (id)displayName;
+ (id)identifier;
@property(nonatomic, getter=_isBluetoothEnabled, setter=_setBluetoothEnabled:) _Bool bluetoothEnabled; // @synthesize bluetoothEnabled=_bluetoothEnabled;
- (_Bool)_isStateOverridden;
- (_Bool)_stateWithEffectiveOverrides;
- (id)confirmationAlertMessage;
- (id)confirmationAlertTitle;
- (void)confirmed:(_Bool)arg1;
- (_Bool)needsConfirmation;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)isRestricted;
- (_Bool)_toggleState;
- (void)deactivate;
- (void)activate;
- (id)selectedStateColor;
- (id)aggdKey;
- (void)dealloc;

@end
