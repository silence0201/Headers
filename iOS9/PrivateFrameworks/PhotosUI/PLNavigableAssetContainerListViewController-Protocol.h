//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAssetCollection, PHCollection;

@protocol PLNavigableAssetContainerListViewController <NSObject>
- (void)navigateToRevealAssetCollection:(PHAssetCollection *)arg1 initiallyHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)navigateToCollection:(PHCollection *)arg1 animated:(_Bool)arg2 completion:(void (^)(UIViewController *))arg3;
@end
