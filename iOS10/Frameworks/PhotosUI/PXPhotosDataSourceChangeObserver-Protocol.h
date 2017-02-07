//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PHChange, PXPhotosDataSource, PXPhotosDataSourceChange;

@protocol PXPhotosDataSourceChangeObserver <NSObject>

@optional
- (void)photosDataSource:(PXPhotosDataSource *)arg1 didReceivePhotoLibraryChange:(PHChange *)arg2;
- (void)photosDataSource:(PXPhotosDataSource *)arg1 didChange:(PXPhotosDataSourceChange *)arg2;
- (void)photosDataSourceWillChange:(PXPhotosDataSource *)arg1;
- (NSArray *)photosDataSourceInterestingAssetReferences:(PXPhotosDataSource *)arg1;
@end

