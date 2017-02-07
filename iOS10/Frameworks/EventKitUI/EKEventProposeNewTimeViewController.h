//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>
#import <EventKitUI/EKEventDateEditItemDelegate-Protocol.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKEvent, EKEventDateEditItem, EKInviteeAlternativeTimeSearcher, EKUIEventStatusButtonsView, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSString, SingleToolbarItemContainerView;
@protocol EKEditItemViewControllerDelegate;

@interface EKEventProposeNewTimeViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol>
{
    _Bool _resetConflictResolutionSections;
    _Bool _viewIsVisible;
    NSDate *_selectedStartDate;
    NSDate *_selectedEndDate;
    NSDate *_originalDate;
    EKEvent *_event;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    NSDate *_proposedStartDate;
    NSArray *_sections;
    EKEventDateEditItem *_proposeTimeItem;
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property(retain, nonatomic) EKEventDateEditItem *proposeTimeItem; // @synthesize proposeTimeItem=_proposeTimeItem;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSDate *proposedStartDate; // @synthesize proposedStartDate=_proposedStartDate;
@property(nonatomic) double statusButtonsViewCachedFontSize; // @synthesize statusButtonsViewCachedFontSize=_statusButtonsViewCachedFontSize;
@property(retain, nonatomic) SingleToolbarItemContainerView *statusButtonsContainerView; // @synthesize statusButtonsContainerView=_statusButtonsContainerView;
@property(retain, nonatomic) EKUIEventStatusButtonsView *statusButtonsView; // @synthesize statusButtonsView=_statusButtonsView;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) _Bool resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property(retain, nonatomic) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(readonly, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property(readonly, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;
- (void)updateCheckmark;
- (void)_searcherStateChanged:(long long)arg1;
- (void)_refreshIfNeeded;
- (id)_attendeesWithoutOrganizerAndLocations;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (long long)_indexForSection:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (void)_eventModified:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateCustomBackButton;
- (_Bool)proposedTimeChanged;
- (void)viewDidLoad;
- (void)dateChangedTo:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)_updateStatusButtons;
- (id)_statusButtons;
- (void)dealloc;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentModally;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useCustomBackButton;

@end

