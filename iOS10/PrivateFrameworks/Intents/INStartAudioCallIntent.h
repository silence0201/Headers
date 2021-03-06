//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INStartAudioCallIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic, setter=setTTYType:) long long ttyType;
- (void)setContacts:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contacts;
@property(nonatomic) long long preferredCallProvider;
@property(nonatomic) long long destinationType;
@property(nonatomic) long long audioRoute;
- (id)initWithContacts:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (void)setUseSpeaker:(_Bool)arg1;
@property(readonly, nonatomic) _Bool useSpeaker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

