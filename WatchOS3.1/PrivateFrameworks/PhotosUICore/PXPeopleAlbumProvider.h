//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PHPhotoLibrary, PXPeoplePersonDataSource, PXPeopleProgressManager;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleDataSourceDelegate, PXPhotoLibraryUIChangeObserver>
{
    _Bool _didInitiateReCacheRequest;
    _Bool _didInitiatePeopleCountFetchRequest;
    _Bool _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_fetchedContainersIsolationQueue;
    PXPeoplePersonDataSource *_favoriteDS;
    PXPeoplePersonDataSource *_otherDS;
    NSMutableArray *_imageCache;
    NSMutableDictionary *_fetchedContainers;
    PXPeopleProgressManager *_progressMgr;
    CDUnknownBlockType _requestCompletion;
    long long _cachedPeopleCount;
    struct CGSize _imageSize;
}

@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) CDUnknownBlockType requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSMutableDictionary *fetchedContainers; // @synthesize fetchedContainers=_fetchedContainers;
@property(retain, nonatomic) NSMutableArray *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) PXPeoplePersonDataSource *otherDS; // @synthesize otherDS=_otherDS;
@property(retain, nonatomic) PXPeoplePersonDataSource *favoriteDS; // @synthesize favoriteDS=_favoriteDS;
- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)arg1;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (_Bool)_shouldShowInterstitialProgress;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reCacheImagesCompletion:(CDUnknownBlockType)arg1;
- (id)_members;
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;
@property(readonly, nonatomic, getter=isCountAvailable) _Bool countAvailable;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_prepareIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
