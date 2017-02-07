//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/PreferencesKeyValueStore-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SecureDefaults : NSObject <PreferencesKeyValueStore>
{
    NSString *_serviceName;
    NSMutableDictionary *_defaultsDictionary;
    NSMutableSet *_migratedKeys;
}

- (void).cxx_destruct;
- (void)triggerMigrationForPreference:(id)arg1;
- (BOOL)safari_shouldTrustValueForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setPreferenceWasMigratedToSecureDefaults:(id)arg1;
- (BOOL)_isPreferenceMigratedToSecureDefaults:(id)arg1;
- (void)_writeDefaultsDictionaryAndMigratedKeys;
- (void)_loadDefaultsDictionary:(id *)arg1 migratedKeysSet:(id *)arg2;
- (void)_migrateKeychainItemIfNeeded;
- (id)initWithServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
