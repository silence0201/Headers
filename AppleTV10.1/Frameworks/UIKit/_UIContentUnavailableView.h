//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, _UIBackdropView;

@interface _UIContentUnavailableView : UIView
{
    unsigned long long _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
    unsigned long long _vibrantOptions;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)_hasVibrantButton;
- (_Bool)_hasVibrantText;
- (double)_buttonVerticalSpacing;
- (double)_labelVerticalSpacing;
- (struct CGSize)_buttonSize;
- (id)_buttonFont;
- (double)_buttonAlpha;
- (double)_labelAlpha;
- (id)_flatTextColor;
- (id)_vibrantBaseColor;
- (id)_titleFont;
- (void)cleanupLingeringRotationState;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void)_actionButtonPressed:(id)arg1;
- (void)_updateViewHierarchy;
- (void)_rebuildConstraints;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
