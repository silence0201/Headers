//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <CharacterPicker/NSTableViewDataSource-Protocol.h>
#import <CharacterPicker/NSTableViewDelegate-Protocol.h>

@class CPKDiversityAlertController, CPKHorizontalPopupMenu, CPKMatrixSearchView, CPKSearchField, NSButton, NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTextField;
@protocol CPKDataSourceProtocol, CPKMatrixViewDelegate, CPKSearchFieldDelegate;

__attribute__((visibility("hidden")))
@interface CPKMatrixView : NSTableView <NSTableViewDelegate, NSTableViewDataSource>
{
    id <CPKDataSourceProtocol> _cvDataSource;
    id <CPKMatrixViewDelegate> _cvDelegate;
    id <CPKMatrixViewDelegate> _fallbackDelegate;
    double _fontSize;
    BOOL _active;
    BOOL _forceResizeMode;
    BOOL _ignoreNoGlyphCell;
    BOOL _readyForLayout;
    BOOL _layoutDone;
    double _defaultMatrixSize;
    double _verticalMargin;
    double _matrixLineGap;
    long long _sectionCount;
    double *_sectionHeights;
    struct CVSectionMatrixGeometry *_sectionGeometries;
    NSMutableDictionary *_sectionViews;
    BOOL _showSectionHeader;
    double _sectionHeaderHeight;
    NSString *_sectionTitleLocTable;
    BOOL _useFullFallback;
    NSMutableArray *_fallbackFonts;
    NSMutableDictionary *_specificFonts;
    NSOperationQueue *_fallbackSearchQueue;
    unsigned long long _fallbackSearchTransactionID;
    long long _selectedSection;
    long long _selectedIndex;
    long long _topIndexOnResize;
    long long _topSectionOnResize;
    unsigned long long _draggingSourceLocalMask;
    BOOL _draggedItemAccepting;
    CPKMatrixSearchView *_searchSectionView;
    CPKSearchField *_searchField;
    NSDictionary *_emojiBarState;
    CPKSearchField *_altSearchField;
    id <CPKSearchFieldDelegate> _searchDelegate;
    NSTextField *_messageField;
    BOOL _searchedInCategory;
    BOOL _hasCVButtonAtTop;
    BOOL _inDetachedWindow;
    BOOL _draggingDetachedWindow;
    BOOL _hasNavigationFocus;
    BOOL _confirmingByKeyboard;
    BOOL _confirmingByMouse;
    BOOL _waitingForConfirm;
    BOOL _blockingDataReset;
    struct CGPoint _lastMouseDownPos;
    NSButton *_showCVButton;
    long long _currentTopSection;
    CPKHorizontalPopupMenu *_variationPopupMenu;
    struct CGRect _visibleWindowContentRect;
    CPKDiversityAlertController *_diversityAlertController;
    BOOL _showDiversityAlertLocalFlag;
    id _AXLinkedElement;
    BOOL _axAttributeGetInOpening;
    BOOL _scrollStateSetInOpening;
}

+ (id)transformWindowButtonToExpand:(BOOL)arg1;
+ (id)enclosingScrollViewWithFrame:(struct CGRect)arg1;
@property id AXLinkedElement; // @synthesize AXLinkedElement=_AXLinkedElement;
@property BOOL showDiversityAlertLocalFlag; // @synthesize showDiversityAlertLocalFlag=_showDiversityAlertLocalFlag;
@property(retain) CPKDiversityAlertController *diversityAlertController; // @synthesize diversityAlertController=_diversityAlertController;
@property struct CGRect visibleWindowContentRect; // @synthesize visibleWindowContentRect=_visibleWindowContentRect;
@property BOOL blockingDataReset; // @synthesize blockingDataReset=_blockingDataReset;
@property(retain) CPKHorizontalPopupMenu *variationPopupMenu; // @synthesize variationPopupMenu=_variationPopupMenu;
@property BOOL waitingForConfirm; // @synthesize waitingForConfirm=_waitingForConfirm;
@property(nonatomic) BOOL draggingDetachedWindow; // @synthesize draggingDetachedWindow=_draggingDetachedWindow;
@property BOOL hasNavigationFocus; // @synthesize hasNavigationFocus=_hasNavigationFocus;
@property BOOL inDetachedWindow; // @synthesize inDetachedWindow=_inDetachedWindow;
@property struct CGPoint lastMouseDownPos; // @synthesize lastMouseDownPos=_lastMouseDownPos;
@property(nonatomic) BOOL hasCVButtonAtTop; // @synthesize hasCVButtonAtTop=_hasCVButtonAtTop;
@property(retain) NSDictionary *emojiBarState; // @synthesize emojiBarState=_emojiBarState;
@property(readonly) CPKSearchField *altSearchField; // @synthesize altSearchField=_altSearchField;
@property(readonly) CPKSearchField *searchField; // @synthesize searchField=_searchField;
@property id <CPKSearchFieldDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(nonatomic) BOOL searchedInCategory; // @synthesize searchedInCategory=_searchedInCategory;
@property(retain) NSString *sectionTitleLocTable; // @synthesize sectionTitleLocTable=_sectionTitleLocTable;
@property BOOL draggedItemAccepting; // @synthesize draggedItemAccepting=_draggedItemAccepting;
@property BOOL ignoreNoGlyphCell; // @synthesize ignoreNoGlyphCell=_ignoreNoGlyphCell;
@property BOOL forceResizeMode; // @synthesize forceResizeMode=_forceResizeMode;
@property(readonly) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly) long long selectedSection; // @synthesize selectedSection=_selectedSection;
@property id fallbackDelegate; // @synthesize fallbackDelegate=_fallbackDelegate;
@property id CVDelegate; // @synthesize CVDelegate=_cvDelegate;
@property(retain) id CVDataSource; // @synthesize CVDataSource=_cvDataSource;
- (void)_scrollToPosition:(double)arg1 allowAnimation:(BOOL)arg2;
- (id)_fallbackAndSpecificFonts;
- (id)_characterSpecificFontAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (id)_menuForItemAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (void)_moveItemAtIndex:(long long)arg1 ofSection:(long long)arg2 toIndex:(long long)arg3;
- (void)_removeItemAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (void)_didDoubleClick;
- (void)_confirmCharacterEntity:(id)arg1;
- (void)_confirmItemAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (id)_viewForSection:(long long)arg1;
- (long long)_rowForSection:(long long)arg1;
- (long long)_sectionForRow:(long long)arg1;
- (const struct CVSectionMatrixGeometry *)_geometryInfoForSection:(long long)arg1;
- (void)_handleMyMouseEvent:(id)arg1;
- (void)_layout;
- (void)didDoubleClickOnMenu:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)windowWillClosed:(id)arg1;
- (void)windowDidChangedKeyStatus:(id)arg1;
- (void)_characterViewerButtonClicked:(id)arg1;
- (void)_searchFieldTextDidChange:(id)arg1;
- (void)_searchFieldTextChangedImmediately:(id)arg1;
- (void)_shortDelayedConfirm;
- (void)navigationSelectionDidConfirmed:(id)arg1;
- (void)_highlightAndShowIndex:(long long)arg1 ofSection:(long long)arg2;
- (void)navigationSelectionDidMoved:(id)arg1;
- (void)navigationFocusDidMoved:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)viewWillStartLiveResize;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (BOOL)allowsVibrancy;
- (void)_privateInitWithOptionalFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)firstCharacterAXElementOfSection:(long long)arg1;
- (void)parentWindowWillClose;
- (void)reloadDataWithResettingDataSource:(BOOL)arg1 restoreScrollPos:(BOOL)arg2 fromEdge:(unsigned long long)arg3;
- (void)setState:(id)arg1;
- (id)stateForPersistent:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (id)viewDescriptionForSection:(long long)arg1;
- (id)headerTitleForSection:(long long)arg1;
- (double)headerHeightForSection:(long long)arg1;
@property unsigned long long draggingSourceLocalMask; // @synthesize draggingSourceLocalMask=_draggingSourceLocalMask;
@property BOOL active; // @synthesize active=_active;
@property double fontSize; // @synthesize fontSize=_fontSize;
- (double)viewHeightForLines:(double)arg1;
- (BOOL)index:(long long *)arg1 ofSection:(long long *)arg2 atPoint:(struct CGPoint)arg3 isOnHeader:(char *)arg4;
- (id)characterDataAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (id)itemNameAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (unsigned int)glyphAtIndex:(long long)arg1 ofSection:(long long)arg2 actualFont:(id *)arg3;
- (id)stringAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (struct CGRect)frameRectAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (void)scrollToIndex:(long long)arg1 ofSection:(long long)arg2 allowAnimation:(BOOL)arg3;
- (void)highlightIndex:(long long)arg1 ofSection:(long long)arg2 byMouse:(BOOL)arg3;
- (void)setCVDataSource:(id)arg1 fontList:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

