//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPXPhotoKitDestructiveActionsPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer
{
}

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
- (long long)destructivePhotosAction;

@end

