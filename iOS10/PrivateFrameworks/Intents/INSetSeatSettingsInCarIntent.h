//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetSeatSettingsInCarIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setRelativeLevelSetting:(long long)arg1;
@property(readonly, nonatomic) long long relativeLevelSetting;
- (void)setLevel:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *level;
- (void)setSeat:(long long)arg1;
@property(readonly, nonatomic) long long seat;
- (void)setEnableMassage:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *enableMassage;
- (void)setEnableCooling:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *enableCooling;
- (void)setEnableHeating:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *enableHeating;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
