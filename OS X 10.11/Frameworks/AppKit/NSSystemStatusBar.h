//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStatusBar.h>

@class NSMutableArray, NSMutableSet;

@interface NSSystemStatusBar : NSStatusBar
{
    NSMutableSet *replicantKeys;
    id screenNotificationToken;
    unsigned long long deferringAdjustmentCount;
    BOOL adjustmentDeferred;
    NSMutableArray *_adjustmentCompletionHandlers;
}

- (void)_withAdjustmentDeferred:(CDUnknownBlockType)arg1;
- (void)_requestStatusBarAdjustmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_replicantKeys;
- (void)_updateReplicantKeys;
- (double)_lengthForSize:(struct CGSize)arg1;
- (void)drawBackgroundInRect:(struct CGRect *)arg1 inView:(id)arg2 highlight:(BOOL)arg3;
- (double)thickness;
- (struct CGSize)_initialOffset;
- (long long)_direction;
- (long long)_placement;
- (id)_lockName;
- (id)_name;
- (id)_createStatusItemControlInWindow:(id)arg1;
- (void)dealloc;

@end

