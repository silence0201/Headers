//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class EKEvent, NSDate;

@protocol EKViewWindowController <NSObject>

@optional
- (void)startDateChangedTo:(NSDate *)arg1;
- (void)eventSpanHasChanged:(EKEvent *)arg1;
- (BOOL)displayApplyButton;
- (void)showEvent:(EKEvent *)arg1;
- (BOOL)displayShowButton;
- (void)eventDidBecomeNil;
- (void)didSaveItem;
- (void)didCommitItem;
@end

