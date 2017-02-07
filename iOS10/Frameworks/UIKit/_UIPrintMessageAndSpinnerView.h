//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPrintMessageAndSpinnerView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    NSArray *_currentHorizontalConstraints;
}

@property(retain, nonatomic) NSArray *currentHorizontalConstraints; // @synthesize currentHorizontalConstraints=_currentHorizontalConstraints;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(nonatomic) _Bool spinnerHidden;
@property(nonatomic) _Bool spinSpinner;
@property(retain, nonatomic) NSString *messageText;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

