//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import <PhotosUI/PUCollectionViewLayoutTransitioningDelegate-Protocol.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate-Protocol.h>

@class NSSet, NSString, PHCollection, PUPhotoPinchGestureRecognizer, PUStackedAlbumLayout, PUStackedAlbumTransitionLayout, PUTransitionViewAnimator, UIView, UIViewController;
@protocol PLAssetContainer, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate>
{
    struct CGRect _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    _Bool _didAnimateRoundedCorners;
    _Bool _isExpanding;
    _Bool _isForStandInAlbum;
    _Bool _forFolder;
    id <PLAssetContainer> _photoCollection;
    PHCollection *_ph_photoCollection;
    id <PUStackedAlbumTransitionDelegate> _delegate;
    PUStackedAlbumLayout *__transitionLayout;
    PUStackedAlbumTransitionLayout *__interactiveTransitionLayout;
    PUTransitionViewAnimator *__transitionViewAnimator;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    id __disableToken;
    struct CGPoint _interactionCenter;
}

@property(retain, nonatomic, setter=_setDisableToken:) id _disableToken; // @synthesize _disableToken=__disableToken;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property(retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // @synthesize _transitionViewAnimator=__transitionViewAnimator;
@property(retain, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout; // @synthesize _interactiveTransitionLayout=__interactiveTransitionLayout;
@property(nonatomic, setter=_setTransitionLayout:) __weak PUStackedAlbumLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(nonatomic) struct CGPoint interactionCenter; // @synthesize interactionCenter=_interactionCenter;
@property(nonatomic, getter=isForFolder) _Bool forFolder; // @synthesize forFolder=_forFolder;
@property(nonatomic, setter=setForStandInAlbum:) _Bool isForStandInAlbum; // @synthesize isForStandInAlbum=_isForStandInAlbum;
@property(nonatomic, setter=_setExpanding:) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
@property(nonatomic) __weak id <PUStackedAlbumTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection; // @synthesize ph_photoCollection=_ph_photoCollection;
@property(retain, nonatomic) id <PLAssetContainer> photoCollection; // @synthesize photoCollection=_photoCollection;
- (void).cxx_destruct;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (_Bool)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1;
- (void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)completeInteractiveOperation:(long long)arg1 finished:(_Bool)arg2;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(_Bool)arg2;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(_Bool)arg3;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *fromViewController; // @dynamic fromViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *toViewController; // @dynamic toViewController;

@end

