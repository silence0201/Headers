//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSStorageManager : NSObject
{
}

+ (BOOL)_isPermanentStorageSupportedForFD:(int)arg1 error:(id *)arg2;
+ (BOOL)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg1 error:(id *)arg2;
+ (id)manager;
+ (void)initialize;
- (BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id *)arg2;
- (BOOL)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id *)arg2;
- (BOOL)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)removeTemporaryStorage:(id)arg1 error:(id *)arg2;
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (id)persistentIdentifierInStorage:(struct NSObject *)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id *)arg3;
- (void)_connectionWithDaemonWasLost;
- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(id *)arg3;
- (id)stagingPrefixForDocumentID:(id)arg1;
- (BOOL)isPermanentStorageSupportedAtURL:(id)arg1 error:(id *)arg2;

@end
