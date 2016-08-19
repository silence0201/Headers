//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
}

- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)arg1;
- (id)grabberImage;

@end

