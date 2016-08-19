//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, _UIButtonBar, _UIButtonBarButtonVisualProvider;

@interface _UIGroupedBar : UIView
{
    _UIButtonBar *_leftBar;
    _UIButtonBar *_centerBar;
    _UIButtonBar *_rightBar;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_leadingLimitConstraint;
    NSLayoutConstraint *_trailingLimitConstraint;
    _Bool _independentGroupSizes;
    double _margin;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    double _leadingBarSizeLimit;
    double _trailingBarSizeLimit;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property(copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic) double trailingBarSizeLimit; // @synthesize trailingBarSizeLimit=_trailingBarSizeLimit;
@property(nonatomic) double leadingBarSizeLimit; // @synthesize leadingBarSizeLimit=_leadingBarSizeLimit;
@property(nonatomic) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property(nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool independentGroupSizes; // @synthesize independentGroupSizes=_independentGroupSizes;
- (void).cxx_destruct;
- (id)_debug;
- (void)_setButtonAlpha:(double)arg1;
- (void)validateAllItems;
@property(copy, nonatomic) NSArray *trailingBarButtonGroups;
@property(copy, nonatomic) NSArray *centerBarButtonGroups;
@property(copy, nonatomic) NSArray *leadingBarButtonGroups;
- (void)didMoveToSuperview;
- (void)layoutMarginsDidChange;
- (void)_updateVisualProvider;
- (void)_updateBarMargins;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

