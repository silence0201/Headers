//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAssetActionPerformer, UIViewController;

@protocol PUAssetActionPerformerDelegate <NSObject>

@optional
- (_Bool)assetActionPerformer:(PUAssetActionPerformer *)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)assetActionPerformer:(PUAssetActionPerformer *)arg1 presentViewController:(UIViewController *)arg2;
- (void)assetActionPerformer:(PUAssetActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
@end

