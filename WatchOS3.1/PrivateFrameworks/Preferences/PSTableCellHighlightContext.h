//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject
{
    NSTimer *_timer;
    _Bool _animateUnhighlight;
    _Bool _valid;
    UITableViewCell *_cell;
    long long _originalSelectionStyle;
}

+ (id)contextWithCell:(id)arg1;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) long long originalSelectionStyle; // @synthesize originalSelectionStyle=_originalSelectionStyle;
@property(readonly, nonatomic) _Bool animateUnhighlight; // @synthesize animateUnhighlight=_animateUnhighlight;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)_killTimer;
- (void)invalidate;
- (void)_timerFired;
- (void)performHighlightForDuration:(double)arg1 animateUnhighlight:(_Bool)arg2;
- (void)dealloc;

@end
