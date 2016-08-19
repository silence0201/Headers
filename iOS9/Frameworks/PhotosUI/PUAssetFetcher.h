//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUAssetFetcher : NSObject <PUPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_resultsByAssetCollectionByConfiguration;
}

+ (id)sharedFetcher;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3;
- (id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 fetchLimit:(unsigned long long)arg3 reverseSortOrder:(_Bool)arg4;
- (void)clearFetchResultsForAssetCollection:(id)arg1;
- (id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 reverseSortOrder:(_Bool)arg5;
- (id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 reverseSortOrder:(_Bool)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

