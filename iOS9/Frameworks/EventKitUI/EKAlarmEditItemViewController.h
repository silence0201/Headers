//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/CalendarEventAlarmTableDelegate-Protocol.h>

@class CalendarEventAlarmTable, EKCalendar, EKUIAlarm, NSString;

__attribute__((visibility("hidden")))
@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate>
{
    CalendarEventAlarmTable *_table;
    _Bool _immediateAlarmCreation;
    _Bool _allDay;
    _Bool _shouldAllowAlarmsTriggeringAfterStartDate;
    _Bool _shouldShowLeaveNowOption;
    _Bool _eventHasTravelTime;
    EKUIAlarm *_alarm;
    EKUIAlarm *_previousAlarm;
    EKCalendar *_calendar;
    unsigned long long _alarmIndex;
}

@property(nonatomic) _Bool eventHasTravelTime; // @synthesize eventHasTravelTime=_eventHasTravelTime;
@property(nonatomic) _Bool shouldShowLeaveNowOption; // @synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption;
@property(nonatomic) _Bool shouldAllowAlarmsTriggeringAfterStartDate; // @synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) unsigned long long alarmIndex; // @synthesize alarmIndex=_alarmIndex;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) EKUIAlarm *previousAlarm; // @synthesize previousAlarm=_previousAlarm;
@property(retain, nonatomic) EKUIAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (void)alarmTableDidChangeAlarm:(id)arg1;
@property(nonatomic) long long presetIdentifier;
- (_Bool)customSelected;
- (void)setCustomString:(id)arg1;
- (id)tableHeaderView;
- (void)_storeChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

