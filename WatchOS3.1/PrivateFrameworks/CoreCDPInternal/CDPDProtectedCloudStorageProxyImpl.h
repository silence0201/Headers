//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDProtectedCloudStorageProxy-Protocol.h>

@class NSString;

@interface CDPDProtectedCloudStorageProxyImpl : NSObject <CDPDProtectedCloudStorageProxy>
{
}

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityPlesioStateWithInfo:(id)arg1 networked:(_Bool)arg2 error:(id *)arg3;
- (_Bool)pcsIdentityPlesioLocalWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityPlesioNetworkedWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateCloseDoorWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateRestoreHSMWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateDropStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

