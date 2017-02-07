//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SBUIAction, SBUIActionViewLabel, UIImageView;

@interface SBUIActionView : UIView
{
    _Bool _interfaceOrientationIsPortrait;
    UIImageView *_imageView;
    UIView *_textContainer;
    SBUIActionViewLabel *_titleLabel;
    SBUIActionViewLabel *_subtitleLabel;
    NSArray *_imageViewLayoutConstraints;
    _Bool _highlighted;
    SBUIAction *_action;
    long long _imagePosition;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(readonly, nonatomic) SBUIAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)_updateImageViewLayoutConstraints;
- (void)_setupSubviews;
- (void)setHighlighted:(_Bool)arg1 withFeedbackRetargetBehavior:(id)arg2;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAction:(id)arg1;

@end
