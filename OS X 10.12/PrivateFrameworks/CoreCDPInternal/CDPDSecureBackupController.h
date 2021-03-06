//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDSecureBackupConfiguration, NSDictionary;
@protocol CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDSecureBackupController : NSObject
{
    BOOL _fakeNearlyDepletedRecords;
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPDSecureBackupDelegate> _delegate;
    NSDictionary *_cachedAccountInfo;
    NSDictionary *_cachedAccountLockoutInfo;
    id <CDPDSecureBackupProxy> _secureBackupProxy;
    CDPDSecureBackupConfiguration *_configuration;
}

+ (id)_sanitizedInfoDictionary:(id)arg1;
@property(retain, nonatomic) CDPDSecureBackupConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <CDPDSecureBackupProxy> secureBackupProxy; // @synthesize secureBackupProxy=_secureBackupProxy;
@property(nonatomic) BOOL fakeNearlyDepletedRecords; // @synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords;
@property(retain, nonatomic) NSDictionary *cachedAccountLockoutInfo; // @synthesize cachedAccountLockoutInfo=_cachedAccountLockoutInfo;
@property(retain, nonatomic) NSDictionary *cachedAccountInfo; // @synthesize cachedAccountInfo=_cachedAccountInfo;
@property(readonly, nonatomic) __weak id <CDPDSecureBackupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_accountLockoutInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountLockoutInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)isAccountLockedWithShouldReset:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setBackoffDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setBackoffDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resetAccountLockOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)lockAccountOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;
- (void)_recoverBackupDictionaryWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_currentAnisetteData;
- (id)_stashedPRK;
- (void)_disableThenEnableWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticatedEnableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForExistingRecord:(CDUnknownBlockType)arg1;
- (void)enableSecureBackupRemovingExistingRecordWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cdpBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBackupRecordDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)backupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (void)isEligibleForCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)_accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

