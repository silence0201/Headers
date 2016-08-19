//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class PLPhotoTileBadgeView, PUImageViewExtraction, UIButton, UIImage, UIImageView, UIView;
@protocol PLVideoOverlayButton;

__attribute__((visibility("hidden")))
@interface PUFeedImageCell : PUFeedCell
{
    _Bool _imageHidden;
    _Bool __shouldUpdateOverlayPlayButtonBackground;
    _Bool __shouldHideOverlayPlayButton;
    _Bool __shouldHideCenterOverlayImageView;
    _Bool __shouldHideCommentButton;
    UIImage *_image;
    long long _imageContentMode;
    long long _imageAlignment;
    long long _overlayOptions;
    long long _commentCount;
    UIImageView *__imageView;
    long long __imageTag;
    UIView<PLVideoOverlayButton> *__overlayPlayButton;
    UIImageView *__overlayPlayButtonBackgroundImageView;
    PUImageViewExtraction *__overlayPlayButtonBackgroundExtraction;
    UIImageView *__centerOverlayImageView;
    UIButton *__commentButton;
    PLPhotoTileBadgeView *__photoIrisBadgeView;
    struct CGSize _maximumImageSize;
    struct CGRect __imageFrame;
}

+ (Class)_contentViewClass;
@property(retain, nonatomic, setter=_setPhotoIrisBadgeView:) PLPhotoTileBadgeView *_photoIrisBadgeView; // @synthesize _photoIrisBadgeView=__photoIrisBadgeView;
@property(nonatomic, setter=_setShouldHideCommentButton:) _Bool _shouldHideCommentButton; // @synthesize _shouldHideCommentButton=__shouldHideCommentButton;
@property(retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton; // @synthesize _commentButton=__commentButton;
@property(nonatomic, setter=_setShouldHideCenterOverlayImageView:) _Bool _shouldHideCenterOverlayImageView; // @synthesize _shouldHideCenterOverlayImageView=__shouldHideCenterOverlayImageView;
@property(retain, nonatomic, setter=_setCenterOverlayImageView:) UIImageView *_centerOverlayImageView; // @synthesize _centerOverlayImageView=__centerOverlayImageView;
@property(nonatomic, setter=_setShouldHideOverlayPlayButton:) _Bool _shouldHideOverlayPlayButton; // @synthesize _shouldHideOverlayPlayButton=__shouldHideOverlayPlayButton;
@property(nonatomic, setter=_setShouldUpdateOverlayPlayButtonBackground:) _Bool _shouldUpdateOverlayPlayButtonBackground; // @synthesize _shouldUpdateOverlayPlayButtonBackground=__shouldUpdateOverlayPlayButtonBackground;
@property(retain, nonatomic, setter=_setOverlayPlayButtonBackgroundExtraction:) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction; // @synthesize _overlayPlayButtonBackgroundExtraction=__overlayPlayButtonBackgroundExtraction;
@property(retain, nonatomic, setter=_setOverlayPlayButtonBackgroundImageView:) UIImageView *_overlayPlayButtonBackgroundImageView; // @synthesize _overlayPlayButtonBackgroundImageView=__overlayPlayButtonBackgroundImageView;
@property(retain, nonatomic, setter=_setOverlayPlayButton:) UIView<PLVideoOverlayButton> *_overlayPlayButton; // @synthesize _overlayPlayButton=__overlayPlayButton;
@property(nonatomic, setter=_setImageFrame:) struct CGRect _imageFrame; // @synthesize _imageFrame=__imageFrame;
@property(nonatomic, setter=_setImageTag:) long long _imageTag; // @synthesize _imageTag=__imageTag;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long overlayOptions; // @synthesize overlayOptions=_overlayOptions;
@property(nonatomic) long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property(nonatomic) struct CGSize maximumImageSize; // @synthesize maximumImageSize=_maximumImageSize;
@property(nonatomic, getter=isImageHidden) _Bool imageHidden; // @synthesize imageHidden=_imageHidden;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_handleCommentButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (id)_imageCellDelegate;
- (void)_invalidateOverlayPlayButtonBackground;
- (void)_updateCommentButton;
- (void)_updateOverlays;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutImageView;
- (void)setImage:(id)arg1 withTag:(long long)arg2;
- (void)setParallaxOffset:(struct CGPoint)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
