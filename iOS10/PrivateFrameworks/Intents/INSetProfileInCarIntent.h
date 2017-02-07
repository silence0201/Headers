//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetProfileInCarIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetProfileInCarIntent : INIntent <INSetProfileInCarIntentExport>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setDefaultProfile:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *defaultProfile;
- (void)setProfileName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileName;
- (void)setProfileNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *profileNumber;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3;
- (id)_metadata;
- (id)_typedBackingStore;
@property(readonly, copy, nonatomic) NSString *profileLabel;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 defaultProfile:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

