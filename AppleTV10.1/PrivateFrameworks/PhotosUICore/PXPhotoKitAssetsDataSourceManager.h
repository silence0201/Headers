//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSString, PXPhotosDataSource;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>
{
    PXPhotosDataSource *_photosDataSource;
}

@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPhotosDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
