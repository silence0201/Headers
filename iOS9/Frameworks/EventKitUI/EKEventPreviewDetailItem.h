//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKDayPreviewController, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPreviewDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    _Bool _showsInlineDayView;
    _Bool _inlineDayViewRespectsSelectedCalendarsFilter;
}

@property(nonatomic) _Bool inlineDayViewRespectsSelectedCalendarsFilter; // @synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter;
@property(nonatomic) _Bool showsInlineDayView; // @synthesize showsInlineDayView=_showsInlineDayView;
- (void).cxx_destruct;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end
