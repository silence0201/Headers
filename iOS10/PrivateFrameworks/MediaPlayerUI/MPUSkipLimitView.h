//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSTimer, UILabel;

@interface MPUSkipLimitView : UIView
{
    NSTimer *_hideTimer;
    UILabel *_informationLabel;
    NSDictionary *_textAttributes;
    CDStruct_dcf4dde6 _skipLimit;
}

@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic) CDStruct_dcf4dde6 skipLimit; // @synthesize skipLimit=_skipLimit;
- (void).cxx_destruct;
- (void)_updateInformationLabel;
- (void)_invalidateHideTimer;
- (void)_hideSkipInformationForTimer:(id)arg1;
- (void)revealSkipInformationMomentarily;
@property(nonatomic) long long maximumNumberOfLines;
@property(readonly, nonatomic) UILabel *label;
- (id)viewForLastBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 labelClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
