//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import <EventKitUI/CalendarPublishingActivityDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate>
{
    _Bool _published;
    UIView *_footerView;
    UILabel *_descriptionLabel;
    UILabel *_publishingLabel;
    UIActivityIndicatorView *_spinner;
}

@property(nonatomic) _Bool published; // @synthesize published=_published;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)pubishURL;
- (id)calendarTitle;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)_publishChanged:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1;
@property(readonly, nonatomic) UIView *footerView;
- (void)layoutForWidth:(double)arg1;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
