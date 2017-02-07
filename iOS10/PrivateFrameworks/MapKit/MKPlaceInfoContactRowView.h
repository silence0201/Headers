//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class CNLabeledValue, MKPlatterView, NSArray, NSLayoutConstraint, NSString, UITapGestureRecognizer, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate>
{
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_topToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _bottomHairlineFullWidth;
    CNLabeledValue *_labeledValue;
    _MKUILabel *_titleLabel;
    _MKUILabel *_valueLabel;
    MKPlatterView *_iconView;
    CDUnknownBlockType _iconSelectedBlock;
    NSLayoutConstraint *_valueToBottomConstraint;
}

+ (id)icon;
@property(retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint; // @synthesize valueToBottomConstraint=_valueToBottomConstraint;
@property(nonatomic, getter=isBottomHairlineFullWidth) _Bool bottomHairlineFullWidth; // @synthesize bottomHairlineFullWidth=_bottomHairlineFullWidth;
@property(copy, nonatomic) CDUnknownBlockType iconSelectedBlock; // @synthesize iconSelectedBlock=_iconSelectedBlock;
@property(readonly, nonatomic) MKPlatterView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
- (void).cxx_destruct;
- (_Bool)_iconTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateGestureRecognizer;
- (_Bool)_pointIsInIcon:(struct CGPoint)arg1;
@property(nonatomic, getter=isIconVisible) _Bool iconVisible;
@property(nonatomic, getter=isTitleVisible) _Bool titleVisible;
- (void)_contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)_labeledValueExpectedValueType;
- (void)copy:(id)arg1;
- (double)_baselineToBottomConstant;
- (id)_iconAccessibilityLabel;
- (id)_icon;
- (id)_valueString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

