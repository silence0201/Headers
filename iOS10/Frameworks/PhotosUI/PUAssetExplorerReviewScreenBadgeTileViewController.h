//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PLPhotoTileBadgeView, PUAssetActionManager, PUAssetReference, PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PXChangeObserver, PUViewModelChangeObserver>
{
    _Bool __performingChanges;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetReference *_assetReference;
    PUAssetActionManager *_actionManager;
    PLPhotoTileBadgeView *__badgeView;
}

+ (void)_configureBadgeView:(id)arg1 isOverContent:(_Bool)arg2;
+ (struct CGSize)badgeTileSize;
@property(nonatomic, setter=_setOverContent:) _Bool _isOverContent; // @synthesize _isOverContent=__isOverContent;
@property(nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView; // @synthesize _needsUpdateBadgeView=__needsUpdateBadgeView;
@property(nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges; // @synthesize _performingChanges=__performingChanges;
@property(readonly, nonatomic) PLPhotoTileBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(retain, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleLivePhotoButtonTapped:(id)arg1;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (id)_disableLivePhotosSelectionManager;
- (id)_reviewActionManager;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)viewDidLoad;
- (id)loadView;
- (void)performChanges:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

