//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PHLivePhotoViewDelegate-Protocol.h>

@class NSString, PHLivePhoto, PHLivePhotoView, PUAvalancheStackView, PUBackgroundColorView, PUBadgeView, PUPhotoDecoration, PUTextBannerView, UIImage, UIImageView, UIView;
@protocol PUPhotoViewContentHelperDelegate;

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate>
{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    PUBadgeView *_badgeView;
    _Bool _hasTransform;
    struct {
        _Bool respondsToLivePhotoWillBeginPlaybackWithStyle;
    } _delegateFlags;
    _Bool _hasPendingPlaybackRequest;
    long long _pendingPlaybackRequestStyle;
    _Bool _isTextBannerVisible;
    _Bool _avoidsImageViewIfPossible;
    _Bool _flattensBadgeView;
    _Bool _avoidsPhotoDecoration;
    _Bool _livePhotoHidden;
    _Bool _shouldPrepareForPlayback;
    _Bool _needsAvalancheStack;
    UIView *_contentView;
    long long _fillMode;
    UIImage *_photoImage;
    UIImage *_placeHolderImage;
    PUPhotoDecoration *_photoDecoration;
    id <PUPhotoViewContentHelperDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    struct CGColor *_avalancheStackBackgroundColor;
    long long _badgeType;
    double _videoDuration;
    PUTextBannerView *_textBannerView;
    UIImageView *_photoImageView;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    PHLivePhotoView *_livePhotoView;
    struct CGSize _photoSize;
    struct CGAffineTransform _imageTransform;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) PUAvalancheStackView *avalancheStackView; // @synthesize avalancheStackView=_avalancheStackView;
@property(retain, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(readonly, nonatomic) PUTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) struct CGColor *avalancheStackBackgroundColor; // @synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor;
@property(nonatomic) _Bool needsAvalancheStack; // @synthesize needsAvalancheStack=_needsAvalancheStack;
@property(nonatomic) _Bool shouldPrepareForPlayback; // @synthesize shouldPrepareForPlayback=_shouldPrepareForPlayback;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(nonatomic) __weak id <PUPhotoViewContentHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLivePhotoHidden) _Bool livePhotoHidden; // @synthesize livePhotoHidden=_livePhotoHidden;
@property(nonatomic) _Bool avoidsPhotoDecoration; // @synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration;
@property(nonatomic) _Bool flattensBadgeView; // @synthesize flattensBadgeView=_flattensBadgeView;
@property(nonatomic) _Bool avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;
@property(copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isTextBannerVisible) _Bool textBannerVisible; // @synthesize textBannerVisible=_isTextBannerVisible;
- (void).cxx_destruct;
- (void)animateCrossfadeToImage:(id)arg1;
- (void)layoutSubviewsOfContentView;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)_updatePhotoDecoration;
- (void)_updateBadgeView;
- (void)_updateTextBannerView;
- (void)_updateSubviewOrdering;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
- (void)_removeLivePhotoViewIfNecessary;
- (void)_addLivePhotoViewIfNecessary;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1;
- (void)_updateLivePhotoViewPreparing;
- (void)_updateLivePhotoViewVisibility;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1;
@property(readonly, nonatomic) _Bool providesVisualFeedbackOnPress;
@property(readonly, nonatomic) UIView *badgeContainerView;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (void)setBadgeType:(long long)arg1 videoDuration:(double)arg2;
@property(readonly, nonatomic) struct CGRect imageContentFrame;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

