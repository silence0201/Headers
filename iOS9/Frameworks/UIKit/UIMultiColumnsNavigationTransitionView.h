//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, UIColor;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding>
{
    long long _transition;
    UIView *_firstResponderViewToRestore;
    unsigned int _isTransitioning:1;
    NSArray *_fromViews;
    NSArray *_toViews;
    NSArray *_viewsToRemove;
    NSArray *_viewsToAdd;
    NSArray *_displayedViews;
    struct __CFDictionary *_dividerViews;
    struct __CFDictionary *_containerViews;
    UIColor *_dividersColor;
    double _dividersWidth;
    int _columnCount;
    id _delegate;
    double _columnWidth;
}

+ (double)defaultDurationForTransition:(long long)arg1;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeContainerViewForView:(id)arg1;
- (id)_containerViewForView:(id)arg1;
- (void)_removeDividerViewForView:(id)arg1;
- (id)_dividerViewForView:(id)arg1;
- (void)_navigationTransitionDidStop;
- (_Bool)_isTransitioningFromView:(id)arg1;
- (_Bool)isTransitioning;
- (_Bool)transition:(long long)arg1 fromViews:(id)arg2 toViews:(id)arg3;
- (_Bool)transition:(long long)arg1 toViews:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

