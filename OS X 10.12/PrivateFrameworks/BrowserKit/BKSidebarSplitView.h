//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProKit/NSProSplitView.h>

__attribute__((visibility("hidden")))
@interface BKSidebarSplitView : NSProSplitView
{
    double _lastDividerPosition;
}

- (void)mouseDown:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)adjustSubviews;
- (double)dividerThickness;
- (void)toggleSplitterPosition;
@property double lastDividerPercentage;
@property BOOL firstViewVisible;
- (void)_toggleButtonAction:(id)arg1;
- (void)_updateShowHideToggle;
- (BOOL)_firstViewCovered;
- (void)_setSplitterPosition:(double)arg1 animate:(BOOL)arg2;

@end
