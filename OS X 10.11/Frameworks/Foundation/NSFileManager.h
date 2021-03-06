//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSFileManagerDelegate, NSObject><NSCopying><NSCoding;

@interface NSFileManager : NSObject
{
}

+ (id)defaultManager;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (void)_registerForUbiquityAccountChangeNotifications;
@property(readonly, copy) id <NSObject><NSCopying><NSCoding> ubiquityIdentityToken;
- (BOOL)_processCanAccessUbiquityIdentityToken;
- (BOOL)_processUsesCloudServices;
- (BOOL)_processHasUbiquityContainerEntitlement;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id *)arg2 error:(id *)arg3;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)isUbiquitousItemAtURL:(id)arg1;
- (BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id *)arg4;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id *)arg5 error:(id *)arg6;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id *)arg2;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id *)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id *)arg3;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id *)arg2 error:(id *)arg3;
- (BOOL)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
@property id <NSFileManagerDelegate> delegate;
- (void)dealloc;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id *)arg2;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsAtPath:(id)arg1;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 error:(id *)arg5;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (BOOL)linkPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (id)displayNameAtPath:(id)arg1;
- (BOOL)isDeletableFileAtPath:(id)arg1;
- (BOOL)isExecutableFileAtPath:(id)arg1;
- (BOOL)isWritableFileAtPath:(id)arg1;
- (BOOL)isReadableFileAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)changeCurrentDirectoryPath:(id)arg1;
@property(readonly, copy) NSString *currentDirectoryPath;
- (BOOL)directoryCanBeCreatedAtPath:(id)arg1;
- (id)_displayPathForPath:(id)arg1;
- (BOOL)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(BOOL)arg3 enteredDirectory:(BOOL)arg4;
- (BOOL)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(BOOL)arg3;
- (BOOL)_replicatePath:(id)arg1 atPath:(id)arg2 operation:(int)arg3 fileMap:(id)arg4 handler:(id)arg5;
- (BOOL)_newReplicatePath:(id)arg1 ref:(void *)arg2 atPath:(id)arg3 ref:(void *)arg4 operation:(int)arg5 fileMap:(id)arg6 handler:(id)arg7;
- (id)_windowsPathComponentsWithPath:(id)arg1;
- (id)_posixPathComponentsWithPath:(id)arg1;
- (BOOL)_itemAtURLIsInAnyTrash:(id)arg1;
- (void)unmountVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)getRelationship:(long long *)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id *)arg5;
- (BOOL)getRelationship:(long long *)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id *)arg4;
- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id *)arg5;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id *)arg3;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id *)arg2;
- (id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2;
- (id)_info;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (BOOL)_web_removeFileOnlyAtPath:(id)arg1;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_performRemoveFileAtPath:(id)arg1;
- (BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(char *)arg2 traverseLink:(BOOL)arg3;

@end

