//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFSyncedFile.h>

@interface MFSyncedSignaturesFile : MFSyncedFile
{
}

+ (id)syncedSignaturesFile;
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;
- (void)writeSignatures:(id)arg1;
- (id)readSignatures;

@end
