//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DirectoryEditor/ODQueryDelegate-Protocol.h>

@class DEProgressSheetController, DirEditorPlugin, NSArray, NSArrayController, NSButton, NSDictionary, NSIndexSet, NSMenu, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSProgressIndicator, NSSearchField, NSSegmentedControl, NSString, NSTableView, NSTextField, NSTimer, NSView, ODNode, ODQuery, ODSession, SFAuthorization;

@interface DirectoryEditorViewController : NSObject <ODQueryDelegate>
{
    NSView *_view;
    NSMenu *_nodeSubmenu;
    NSPopUpButton *_nodePopUp;
    NSMenu *_recordTypeSubmenu;
    NSPopUpButton *_recordTypePopUp;
    NSButton *_authButton;
    NSTextField *_authedAs;
    NSArrayController *_foundRecordsController;
    NSTableView *_foundRecordsTableView;
    NSView *_foundRecordsSplitViewSubview;
    NSSearchField *_searchField;
    NSProgressIndicator *_spinner;
    NSTextField *_searchResultsSummary;
    NSView *_pluginView;
    NSProgressIndicator *_progressBar;
    NSTextField *_progressStatus;
    NSSegmentedControl *_addRemoveRecordsSegmentedControl;
    NSButton *_revertButton;
    ODNode *_currentNode;
    ODQuery *_mainListODQuery;
    NSMutableDictionary *_openNodes;
    NSTimer *_searchTimer;
    BOOL _searchTextChanged;
    DirEditorPlugin *_plugin;
    ODQuery *_recordsDetailsODQuery;
    NSMutableArray *_recordsDetails;
    struct __ODTrigger *_odRecordModifyTrigger;
    NSDictionary *_searchResultsSummaryStringAttrs;
    NSMutableArray *_deleteRecordsQueries;
    ODQuery *_unusedRecordNameQuery;
    unsigned long long _lastUnusedRecordNameNumber;
    NSMutableArray *_unusedRecordNameResults;
    DEProgressSheetController *_progressSheetController;
    BOOL _ignoreRecordSelectionChanges;
    BOOL _askingToSaveChanges;
    NSString *_askToSaveReason;
    NSIndexSet *_askToSaveProposedRowSelectionIndexes;
    NSString *_osVersion;
    NSView *superview;
    BOOL isDirty;
    BOOL authed;
    NSArray *_attributesSupportedByNodeAndRecordType;
    NSString *currentRecordType;
    struct __ODTrigger *_odRecordAddTrigger;
    struct __ODTrigger *_odRecordDeleteTrigger;
    struct __ODTrigger *_odRecordFullNameModifyTrigger;
    NSString *sessionName;
    NSString *docDisplayName;
    NSArray *attributesToFetchDuringSearch;
    ODSession *_odSession;
    struct __ODTrigger *_odNodeRegisterTrigger;
    struct __ODTrigger *_odNodeUnregisterTrigger;
    SFAuthorization *_authForLocalNode;
}

@property(retain, nonatomic) SFAuthorization *authForLocalNode; // @synthesize authForLocalNode=_authForLocalNode;
@property(retain, nonatomic) ODSession *odSession; // @synthesize odSession=_odSession;
@property(retain) NSView *superview; // @synthesize superview;
@property(retain) NSArray *attributesToFetchDuringSearch; // @synthesize attributesToFetchDuringSearch;
@property(retain) NSString *docDisplayName; // @synthesize docDisplayName;
@property(retain) NSString *sessionName; // @synthesize sessionName;
@property(retain, nonatomic) NSString *currentRecordType; // @synthesize currentRecordType;
@property(readonly) BOOL authed; // @synthesize authed;
@property BOOL isDirty; // @synthesize isDirty;
- (void)query:(id)arg1 foundResults:(id)arg2 error:(id)arg3;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (id)displayName;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)windowNibName;
- (void)startSearch;
- (id)recordWithName:(id)arg1 ofType:(id)arg2;
@property(readonly, retain) NSArray *attributesSupportedByCurrentNodeAndRecordType;
- (void)setNode:(id)arg1 isAuthed:(BOOL)arg2 authedAs:(id)arg3;
- (void)selectRecordType:(id)arg1;
- (void)reportError:(id)arg1 withParameters:(id)arg2;
- (void)reportError:(id)arg1 withParameter:(id)arg2;
- (void)reportErrorParamDict:(id)arg1;
- (void)deleteRecordButtonHit:(id)arg1;
- (void)createRecordButtonHit:(id)arg1;
- (void)createDeleteRecordSegmentCtrlHit:(id)arg1;
- (void)revertButtonHit:(id)arg1;
- (void)saveButtonHit:(id)arg1;
- (void)authButtonHit:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)updateRevertButtonTitle;
- (void)saveChangesAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)askToSaveChanges;
- (void)updateSearchResultsSummary:(unsigned long long)arg1;
- (void)lookForUnusedRecordName;
- (void)recordFullNameModified:(id)arg1 withType:(id)arg2 inNode:(id)arg3;
- (void)recordDeleted:(id)arg1 withType:(id)arg2 inNode:(id)arg3;
- (void)recordAdded:(id)arg1 withType:(id)arg2 inNode:(id)arg3;
- (void)removeRecordFromSearchResults:(id)arg1 recordType:(id)arg2;
- (void)deleteRecordsWithNames:(id)arg1 ofType:(id)arg2 inNode:(id)arg3;
- (void)sureToDeleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)askToDeleteSelectedRecords;
- (void)createNewRecordDict;
- (id)updateRecord:(id)arg1 fromOldValues:(id)arg2 toNewValues:(id)arg3;
- (void)loadCurrentTabForRecords:(id)arg1;
- (void)tryToAutoAuthToLocalNode;
- (void)setNodeIsAuthed:(id)arg1;
- (void)updateAuthState;
- (BOOL)isAuthedToNode:(id)arg1 authedAs:(id *)arg2;
- (void)loadSelectedRecordDataForCurrentPluginTab;
- (void)loadPluginForRecordType:(id)arg1;
- (void)recordTypeChanged;
- (void)nodeMenuItemSelected:(id)arg1;
- (void)recordTypeMenuItemSelected:(id)arg1;
- (void)searchTimer:(id)arg1;
- (void)startOrExtendSearchTimer;
- (void)doSearch;
- (id)selectNodeWithPath:(id)arg1;
- (void)populateRecordTypePopUp;
- (void)markRecordTypeSelected:(id)arg1;
- (void)markNodeSelected:(id)arg1;
- (void)currentNodeChanged;
- (void)nodeUnregistered:(id)arg1;
- (void)nodeRegistered:(id)arg1;
- (void)odSessionChanged:(id)arg1;
- (BOOL)shouldShowNodeName:(id)arg1;
- (void)reportLoginError:(id)arg1;
- (void)createODSession:(id)arg1;
- (void)threadedCreateODSession:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
