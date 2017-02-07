//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSArray, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, PHPhotoLibrary;

@interface PHFetchOptions : NSObject <NSCopying>
{
    NSNumber *_includeHiddenAssetsNumber;
    NSNumber *_includeAllBurstAssetsNumber;
    NSNumber *_includeAssetSourceTypesNumber;
    NSNumber *_fetchLimitNumber;
    NSNumber *_wantsIncrementalChangeDetailsNumber;
    NSNumber *_chunkSizeForFetchNumber;
    NSNumber *_cacheSizeForFetchNumber;
    NSNumber *_reverseSortOrderNumber;
    NSNumber *_includeWallpaperAssetsNumber;
    NSNumber *_includeDuplicateAssetsNumber;
    NSNumber *_includePendingMemoriesNumber;
    NSNumber *_includeRejectedMemoriesNumber;
    NSNumber *_personContextNumber;
    NSNumber *_includeTrashedAssetsNumber;
    NSNumber *_includeFavoriteMemoriesCollectionListNumber;
    NSNumber *_includePlacesSmartAlbumNumber;
    NSNumber *_excludeMontageAssetsNumber;
    NSNumber *_minimumVerifiedFaceCountNumber;
    NSNumber *_minimumUnverifiedFaceCountNumber;
    NSNumber *_includeNonvisibleFacesNumber;
    NSMutableSet *_propertySets;
    NSNumber *_shouldPrefetchCountNumber;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_customObjectIDSortOrder;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSPredicate *_internalInclusionPredicate;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)fetchOptionsWithInclusiveDefaults;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSPredicate *internalInclusionPredicate; // @synthesize internalInclusionPredicate=_internalInclusionPredicate;
@property(retain, nonatomic) NSArray *internalSortDescriptors; // @synthesize internalSortDescriptors=_internalSortDescriptors;
@property(retain, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property(retain, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(retain, nonatomic) NSArray *customObjectIDSortOrder; // @synthesize customObjectIDSortOrder=_customObjectIDSortOrder;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) _Bool shouldPrefetchCount;
@property(nonatomic) _Bool includeNonvisibleFaces;
@property(nonatomic) unsigned long long minimumUnverifiedFaceCount;
@property(nonatomic) unsigned long long minimumVerifiedFaceCount;
@property(nonatomic) _Bool excludeMontageAssets;
@property(nonatomic) _Bool includePlacesSmartAlbum;
@property(nonatomic) _Bool includeFavoriteMemoriesCollectionList;
@property(nonatomic) _Bool includeTrashedAssets;
@property(nonatomic) long long personContext;
@property(nonatomic) _Bool includeRejectedMemories;
@property(nonatomic) _Bool includePendingMemories;
@property(nonatomic) _Bool includeDuplicateAssets;
@property(nonatomic) _Bool includeWallpaperAssets;
@property(nonatomic) _Bool reverseSortOrder;
@property(nonatomic) long long cacheSizeForFetch;
@property(nonatomic) long long chunkSizeForFetch;
@property(nonatomic) _Bool wantsIncrementalChangeDetails;
@property(nonatomic) unsigned long long fetchLimit;
@property(nonatomic) unsigned long long includeAssetSourceTypes;
@property(nonatomic) _Bool includeAllBurstAssets;
@property(nonatomic) _Bool includeHiddenAssets;
@property(readonly, nonatomic) NSSet *fetchPropertySetsAsSet;
- (void)addFetchPropertySets:(id)arg1;
@property(retain, nonatomic) NSArray *fetchPropertySets;
- (void)mergeWithFetchOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

