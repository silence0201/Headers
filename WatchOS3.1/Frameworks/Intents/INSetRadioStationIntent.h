//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetRadioStationIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setPresetNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *presetNumber;
- (void)setChannel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *channel;
- (void)setStationName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stationName;
- (void)setFrequency:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *frequency;
- (void)setRadioType:(long long)arg1;
@property(readonly, nonatomic) long long radioType;
- (id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

