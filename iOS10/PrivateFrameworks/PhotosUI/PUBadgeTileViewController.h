//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver>
{
    _Bool __needsUpdateBadgeInfo;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    _Bool __shouldAnimateNextBadgeViewUpdate;
    PUAssetViewModel *_assetViewModel;
    PXUIAssetBadgeView *__badgeView;
    struct PXAssetBadgeInfo __badgeInfo;
}

+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2 isOverContent:(_Bool)arg3 hideLivePhotoBadge:(_Bool)arg4 animated:(_Bool)arg5;
+ (struct CGSize)_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo)arg1;
+ (struct PXAssetBadgeInfo)_badgeInfoForAssetViewModel:(id)arg1;
+ (struct CGSize)badgeTileSizeForAssetViewModel:(id)arg1;
@property(nonatomic, setter=_setShouldAnimateNextBadgeViewUpdate:) _Bool _shouldAnimateNextBadgeViewUpdate; // @synthesize _shouldAnimateNextBadgeViewUpdate=__shouldAnimateNextBadgeViewUpdate;
@property(nonatomic, setter=_setOverContent:) _Bool _isOverContent; // @synthesize _isOverContent=__isOverContent;
@property(readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo _badgeInfo; // @synthesize _badgeInfo=__badgeInfo;
@property(nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView; // @synthesize _needsUpdateBadgeView=__needsUpdateBadgeView;
@property(nonatomic, setter=_setNeedsUpdateBadgeInfo:) _Bool _needsUpdateBadgeInfo; // @synthesize _needsUpdateBadgeInfo=__needsUpdateBadgeInfo;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)_updateBadgeInfoIfNeeded;
- (void)_invalidateBadgeInfo;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)prepareForReuse;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
