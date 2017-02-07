//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHAssetCollection, PXDiagnosticsItemProvider, UIViewController;
@protocol PXMovieProviderDelegate;

@interface PXMovieProvider : NSObject
{
    id <PXMovieProviderDelegate> _delegate;
    PHAssetCollection *_assetCollection;
    PHAsset *_keyAsset;
}

@property(readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <PXMovieProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property(readonly, nonatomic) _Bool canPlayMovie;
@property(readonly, nonatomic) UIViewController *movieViewController;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)initWithAssetCollection:(id)arg1;
- (id)init;

@end
