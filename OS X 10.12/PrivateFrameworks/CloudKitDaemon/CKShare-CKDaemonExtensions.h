//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)
- (BOOL)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 removeServerSpecifiedKeys:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 error:(id *)arg3;
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (BOOL)hasEncryptedPersonalInfo;
@end

