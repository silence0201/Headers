//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol PUCloudPhotoWelcomeViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCloudPhotoWelcomeView : UIView
{
    NSLayoutConstraint *_goButtonWidthConstraint;
    struct {
        unsigned int delegateRespondsToGoButtonTapped:1;
        unsigned int delegateRespondsToLearnMoreTapped:1;
    } _delegateFlags;
    _Bool _goButtonEnabled;
    id <PUCloudPhotoWelcomeViewDelegate> _delegate;
    UIImageView *_graphicImageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_goButton;
    UILabel *_finePrintLabel;
}

+ (void)initialize;
@property(retain, nonatomic) UILabel *finePrintLabel; // @synthesize finePrintLabel=_finePrintLabel;
@property(retain, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *graphicImageView; // @synthesize graphicImageView=_graphicImageView;
@property(nonatomic, getter=goButtonIsEnabled) _Bool goButtonEnabled; // @synthesize goButtonEnabled=_goButtonEnabled;
@property(nonatomic) __weak id <PUCloudPhotoWelcomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

