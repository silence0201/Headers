//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditor.h>

#import <EventKitUI/EKEventAutocompleteResultsEditItemDelegate-Protocol.h>

@class EKCalendarItemAlarmEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemTitleInlineEditItem, EKEvent, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKEventDateEditItem, EKUIAutocompletePETTracker, EKUIAutocompleteSearchResult, NSString, NSTimer, UIColor;
@protocol EKUIAutocompletePendingSearchProtocol;

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate>
{
    EKEventDateEditItem *_dateItem;
    EKEventAttendeesEditItem *_attendeesEditItem;
    EKEventAutocompleteResultsEditItem *_autocompleteEditItem;
    EKCalendarItemTitleInlineEditItem *_titleInlineEditItem;
    EKCalendarItemLocationInlineEditItem *_locationInlineEditItem;
    EKCalendarItemCalendarEditItem *_calendarEditItem;
    EKCalendarItemAlarmEditItem *_alarmEditItem;
    _Bool _shouldAutocomplete;
    id <EKUIAutocompletePendingSearchProtocol> _pendingSearch;
    NSTimer *_autocompleteTimer;
    NSString *_autocompleteSearchString;
    _Bool _isTransitioning;
    _Bool _autocompleteResultsVisible;
    _Bool _focusTitleOnAppearance;
    EKUIAutocompleteSearchResult *_selectedAutocompleteResult;
    unsigned long long _selectedAutocompleteResultIndex;
    EKUIAutocompletePETTracker *_autocompletePETTracker;
    _Bool _showAttachments;
    UIColor *_backgroundColor;
}

+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(_Bool)arg4;
+ (id)_now;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool showAttachments; // @synthesize showAttachments=_showAttachments;
- (void).cxx_destruct;
- (void)_setAutocompleteResultsVisible:(_Bool)arg1;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)_beginAutocompleteSearch:(id)arg1;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_hideAndCancelAutocompleteResults;
- (void)_showAutocompleteResults;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;
- (id)_viewForSheet;
- (_Bool)_canDetachSingleOccurrence;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
- (void)focusAndSelectTitle;
- (void)prepareEditItems;
- (struct CGSize)preferredContentSize;
- (unsigned long long)entityType;
- (id)notificationNamesForLocaleChange;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)_nameForDeleteButton;
- (id)defaultTitleForCalendarItem;
- (id)preferredTitle;
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;
- (id)_orderedEditItems;
- (id)_editItems;
- (id)_calendarItemIndexSet;
- (void)refreshLocation;
- (void)refreshInvitees;
- (void)refreshStartAndEndDates;
@property(retain, nonatomic) EKEvent *event;
- (void)_updateTitleEditItemSeparatorVisibility;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

