//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKCalendar, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventCalendarDetailItem : EKEventDetailItem
{
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (_Bool)_calendarCanBeChanged;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

