//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell
{
    EKUIDividedGridViewController *_gridViewController;
    UIView *_topDivider;
    UIView *_bottomDivider;
}

@property(retain, nonatomic) UIView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(retain, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain) EKUIDividedGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (_Bool)wantsDrawBackground;
- (struct CGRect)_separatorFrame;
@property(nonatomic) _Bool drawsTopDivider;
- (void)setDrawBottomDivider:(_Bool)arg1;
- (_Bool)drawBottomDivider;
- (_Bool)_isWiderThanMaximum;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5;

@end

