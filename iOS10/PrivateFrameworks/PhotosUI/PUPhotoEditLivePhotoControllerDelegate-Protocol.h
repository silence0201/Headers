//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotoEditLivePhotoController;

@protocol PUPhotoEditLivePhotoControllerDelegate <NSObject>

@optional
- (void)editLivePhotoControllerIsRenderingDidChange:(PUPhotoEditLivePhotoController *)arg1;
- (void)editLivePhotoControllerRenderingProgressDidChange:(PUPhotoEditLivePhotoController *)arg1;
- (void)editLivePhotoControllerRenderedLivePhotoDidChange:(PUPhotoEditLivePhotoController *)arg1;
- (_Bool)editLivePhotoControllerShouldRenderImmediatelyForModelChange:(PUPhotoEditLivePhotoController *)arg1;
@end
