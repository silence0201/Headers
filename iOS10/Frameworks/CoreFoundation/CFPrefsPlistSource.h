//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

@class NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource : CFPrefsSource
{
    NSObject<OS_dispatch_group> *_synchGroup;
    struct __CFString *userIdentifier;
    struct __CFString *domainIdentifier;
    struct __CFString *container;
    // Error parsing type: A^{__CFDictionary}, name: _locallySetDict
    // Error parsing type: A*, name: accessPath
    // Error parsing type: AB, name: _isByHost
    // Error parsing type: AB, name: _volatile
    // Error parsing type: AB, name: _readonly
    // Error parsing type: AB, name: _avoidsDaemonCache
    // Error parsing type: AB, name: _restrictedAccess
    // Error parsing type: AB, name: _checkedInvalidHome
    // Error parsing type: AB, name: _lastWriteFailed
    // Error parsing type: AB, name: _observing
    // Error parsing type: AB, name: _disableBackup
}

- (void)dealloc;
- (void)_sharedCleanup;
- (void)alreadylocked_updateObservingRemoteChanges;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (_Bool)synchronize;
- (_Bool)volatilizeIfInvalidHomeDir;
- (void)alreadylocked_clearCache;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(_Bool *)arg4;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (_Bool)alreadylocked_requestNewData;
- (long long)sendMessageSettingValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValue:(void *)arg3 forKey:(struct __CFString *)arg4 retryCount:(int)arg5;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (_Bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (_Bool)handleErrorReply:(id)arg1 fromMessageSettingKey:(struct __CFString *)arg2 toValue:(void *)arg3 retryCount:(int)arg4 retryContinuation:(CDUnknownBlockType)arg5;
- (_Bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(CDUnknownBlockType)arg3;
- (void)goReadOnlyAfterTryingToWriteKey:(struct __CFString *)arg1 value:(void *)arg2;
- (_Bool)isVolatile;
- (void)goVolatileAfterTryingToWriteKey:(struct __CFString *)arg1 value:(void *)arg2;
- (void)_goReadOnlyOrVolatileAfterTryingToWriteKey:(struct __CFString *)arg1 value:(void *)arg2;
- (id)createSynchronizeMessage;
- (_Bool)_isSharedInTheiOSSimulator;
- (void)alreadylocked_setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)setDaemonCacheEnabled:(_Bool)arg1;
- (void)setAccessRestricted:(_Bool)arg1;
- (void)setBackupDisabled:(_Bool)arg1;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (_Bool)isByHost;
- (struct __CFString *)container;
- (void)setContainer:(struct __CFString *)arg1;
- (void)setDomainIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)domainIdentifier;
- (void)setUserIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)userIdentifier;

@end

