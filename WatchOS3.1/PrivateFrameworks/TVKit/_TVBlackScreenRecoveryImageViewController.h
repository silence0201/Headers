//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel;

@interface _TVBlackScreenRecoveryImageViewController : UIViewController
{
    _Bool _iterateAvailableModes;
    UIImageView *_imageView;
    UILabel *_descriptionLabel;
    UILabel *_messageLabel;
}

@property(nonatomic) _Bool iterateAvailableModes; // @synthesize iterateAvailableModes=_iterateAvailableModes;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)_monospaceHeadlineFont;
- (void)_addConstraints;
- (void)viewDidLoad;

@end

