//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/EKUIInviteesViewConflictResolutionSection-Protocol.h>

@class EKInviteeAlternativeTimeSearcher, NSArray, NSDate, NSMutableSet, NSString, NSTimeZone;

@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection>
{
    _Bool _checked;
    _Bool _conflictFound;
    NSString *_title;
    NSTimeZone *_timeZone;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_busyParticipants;
    NSMutableSet *_rowsShowingAllParticipants;
    NSString *_cachedCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime; // @synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime;
@property(copy, nonatomic) CDUnknownBlockType newTimeChosen; // @synthesize newTimeChosen=_newTimeChosen;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;
@property(nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property(retain, nonatomic) NSString *cachedCellReuseIdentifier; // @synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier;
@property(nonatomic) _Bool conflictFound; // @synthesize conflictFound=_conflictFound;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // @synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants;
@property(retain, nonatomic) NSArray *busyParticipants; // @synthesize busyParticipants=_busyParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)_isValidRow:(long long)arg1;
- (void)refreshCellsAfterStateChange;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)clearCheckmark;
- (void)cancelOutstandingOperations;
- (double)estimatedHeightForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (void)selectRow:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (unsigned long long)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (id)headerTitle;
- (id)debugTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

