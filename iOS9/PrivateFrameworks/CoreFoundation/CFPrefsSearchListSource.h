//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource : CFPrefsSource
{
    struct __CFString *_identifier;
    struct __CFArray *_sourceList;
    struct __CFSet *_cloudKeys;
    CFPrefsPlistSource *_standardSetTarget;
    CFPrefsCloudSource *_cloudSetTarget;
    struct _opaque_pthread_mutex_t *_searchListLock;
    _Bool initialized;
}

+ (void)with23930198HackSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4 cloud:(_Bool)arg5 perform:(CDUnknownBlockType)arg6;
+ (void)withSuiteSearchListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 locked:(_Bool)arg3 perform:(CDUnknownBlockType)arg4;
+ (void)withSnapshotSearchList:(CDUnknownBlockType)arg1;
+ (void)updateSearchListsForIdentifier:(struct __CFString *)arg1;
+ (void)withSearchListForIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 cloudConfigurationURL:(struct __CFURL *)arg3 perform:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (void)setCloudEnabled:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (struct __CFString *)domainIdentifier;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)freeze;
- (void)asynchronouslyNotifyOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (long long)generationCount;
- (long long)generationCountFromListOfSources:(id *)arg1 count:(long long)arg2;
- (id)createRequestNewContentMessageForDaemon:(_Bool)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (_Bool)synchronize;
- (_Bool)alreadylocked_requestNewData;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)alreadylocked_setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)addCompatibilitySource;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString *)arg1;
- (void)addSuiteSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)addCloudSourceForIdentifier:(struct __CFString *)arg1 configurationPath:(struct __CFString *)arg2 storeName:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)addSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4;
- (void)addSimulatorBackstopSourceForIdentifier:(struct __CFString *)arg1;
- (void)addManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)unlock;
- (void)lock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removePreferencesObserver:(id)arg1;
- (void)addPreferencesObserver:(id)arg1;
- (void)setObservingContents:(_Bool)arg1;
- (struct __CFString *)copyCloudConfigurationWithURL:(struct __CFURL *)arg1 outConfigFileSource:(id *)arg2 outStoreName:(const struct __CFString **)arg3;
- (id)initWithIdentifier:(struct __CFString *)arg1;

@end

