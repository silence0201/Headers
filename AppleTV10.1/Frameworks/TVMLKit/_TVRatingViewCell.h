//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVRatingViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImage *_fillImage;
    UIImage *_outlineImage;
}

- (void).cxx_destruct;
- (id)_outlineImage;
- (id)_focusedFillImage;
- (id)_fillImage;
- (void)setFill:(_Bool)arg1 focused:(_Bool)arg2;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end
