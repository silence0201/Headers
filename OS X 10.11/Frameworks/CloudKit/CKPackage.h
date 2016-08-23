//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, CKSQLite, NSArray, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>
{
    struct _OpaquePCSShareProtection *_recordPCS;
    BOOL _wasCached;
    BOOL _uploaded;
    BOOL _downloaded;
    BOOL _hasSize;
    BOOL _shouldReadRawEncryptedData;
    BOOL _open;
    BOOL _transaction;
    BOOL _ownsTheAnchor;
    NSArray *_assets;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_fileURL;
    NSString *_applicationBundleID;
    NSString *_UUID;
    unsigned long long _size;
    long long _storageGroupingPolicy;
    long long _uploadRank;
    NSString *_anchorPath;
    CKSQLite *_sqlite;
    long long _packageID;
    unsigned long long _nextItemIndex;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)supportsSecureCoding;
+ (void)destroyPackageAnchoredAtURL:(id)arg1;
+ (id)_packagesPathForBundleID:(id)arg1;
+ (id)packageUploadDirectoryName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL ownsTheAnchor; // @synthesize ownsTheAnchor=_ownsTheAnchor;
@property(nonatomic, getter=inTransaction) BOOL transaction; // @synthesize transaction=_transaction;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(nonatomic) unsigned long long nextItemIndex; // @synthesize nextItemIndex=_nextItemIndex;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
@property(retain, nonatomic) CKSQLite *sqlite; // @synthesize sqlite=_sqlite;
@property(retain, nonatomic) NSString *anchorPath; // @synthesize anchorPath=_anchorPath;
@property(nonatomic) long long uploadRank; // @synthesize uploadRank=_uploadRank;
@property(nonatomic) long long storageGroupingPolicy; // @synthesize storageGroupingPolicy=_storageGroupingPolicy;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property(nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;
- (void).cxx_destruct;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSData *signature;
- (void)_locked_endTransaction;
- (void)_locked_beginTransaction;
- (void)endTransaction;
- (void)beginTransaction;
- (void)addSection:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (void)addItem:(id)arg1;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (id)itemEnumerator;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (unsigned long long)itemCount;
- (void)close;
- (void)_locked_open;
- (void)open;
- (BOOL)_locked_decReferenceCount;
- (void)_locked_incReferenceCount;
- (BOOL)decReferenceCount;
- (void)incReferenceCount;
- (BOOL)isAnchorStillValid;
- (void)_setReferenceCount:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (void)destroy;
- (id)initWithArchivedAnchoredPackage:(id)arg1;
- (id)initWithAnchorURL:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_initWithPath:(id)arg1 UUID:(id)arg2;
- (id)_packageDatabasePathWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
