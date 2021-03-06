//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INOpenFileIntent-Protocol.h>

@class NSArray, NSString;

@interface INOpenFileIntent : INIntent <INOpenFileIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setScopeEntityName:(id)arg1;
@property(readonly, copy) NSString *scopeEntityName;
- (void)setScope:(id)arg1;
@property(readonly, copy) NSString *scope;
- (void)setProperties:(id)arg1;
@property(readonly, copy) NSArray *properties;
- (void)setAppId:(id)arg1;
@property(readonly, copy) NSString *appId;
- (void)setEntityName:(id)arg1;
@property(readonly, copy) NSString *entityName;
- (void)setEntityType:(id)arg1;
@property(readonly, copy) NSString *entityType;
- (id)initWithEntityType:(id)arg1 entityName:(id)arg2 appId:(id)arg3 properties:(id)arg4 scope:(id)arg5 scopeEntityName:(id)arg6;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

