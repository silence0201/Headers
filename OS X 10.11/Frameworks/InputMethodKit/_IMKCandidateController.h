//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFont, NSString, _IMKCandidateControllerInfo;
@protocol _IMKCandidateDelegate;

@interface _IMKCandidateController : NSObject
{
    id <_IMKCandidateDelegate> _delegate;
    void *_userInfo;
    NSArray *_sortStyleNames;
    double _maxNumberOfRows;
    double _minNumberOfRows;
    long long _maxNumberOfColumns;
    double _minWindowWidth;
    double _maxWindowWidth;
    double _maxRowContentWidth;
    double _minWindowHeight;
    long long _windowLevel;
    NSFont *_textFont;
    NSString *_groupLabelFontName;
    NSString *_noCandidateMessage;
    NSString *_axDescription;
    BOOL _windowShown;
    BOOL _sortStyleBarVisible;
    BOOL _guideNumberVisible;
    BOOL _descriptionEnabled;
    BOOL _textLayoutVertical;
    BOOL _calcAllCandidatesWidth;
    struct CGSize _fixedSize;
    BOOL _useExplicitSize;
    BOOL _resizeOnCandidateChange;
    BOOL _animateOnFrameChange;
    long long _sortStyle;
    long long _selectedIndex;
    long long _visibleTopRow;
    struct __DCSDictionary *_definitionDictionary;
    _IMKCandidateControllerInfo *_privateInfo;
}

@property(nonatomic) BOOL animateOnFrameChange; // @synthesize animateOnFrameChange=_animateOnFrameChange;
@property(nonatomic) BOOL resizeOnCandidateChange; // @synthesize resizeOnCandidateChange=_resizeOnCandidateChange;
@property(nonatomic) BOOL useExplicitSize; // @synthesize useExplicitSize=_useExplicitSize;
@property(nonatomic) struct __DCSDictionary *definitionDictionary; // @synthesize definitionDictionary=_definitionDictionary;
@property(nonatomic) long long sortStyle; // @synthesize sortStyle=_sortStyle;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) BOOL calcAllCandidatesWidth; // @synthesize calcAllCandidatesWidth=_calcAllCandidatesWidth;
@property(nonatomic, getter=isTextLayoutVertical) BOOL textLayoutVertical; // @synthesize textLayoutVertical=_textLayoutVertical;
@property(nonatomic, getter=isDescriptionEnabled) BOOL descriptionEnabled; // @synthesize descriptionEnabled=_descriptionEnabled;
@property(nonatomic, getter=isGuideNumberVisible) BOOL guideNumberVisible; // @synthesize guideNumberVisible=_guideNumberVisible;
@property(nonatomic, getter=isSortStyleBarVisible) BOOL sortStyleBarVisible; // @synthesize sortStyleBarVisible=_sortStyleBarVisible;
@property(nonatomic, getter=isWindowShown) BOOL windowShown; // @synthesize windowShown=_windowShown;
@property(copy, nonatomic) NSString *axDescription; // @synthesize axDescription=_axDescription;
@property(copy, nonatomic) NSString *noCandidateMessage; // @synthesize noCandidateMessage=_noCandidateMessage;
@property(copy, nonatomic) NSString *groupLabelFontName; // @synthesize groupLabelFontName=_groupLabelFontName;
@property(retain, nonatomic) NSFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) long long windowLevel; // @synthesize windowLevel=_windowLevel;
@property(nonatomic) double maxRowContentWidth; // @synthesize maxRowContentWidth=_maxRowContentWidth;
@property(nonatomic) double maxWindowWidth; // @synthesize maxWindowWidth=_maxWindowWidth;
@property(nonatomic) double minWindowHeight; // @synthesize minWindowHeight=_minWindowHeight;
@property(nonatomic) double minWindowWidth; // @synthesize minWindowWidth=_minWindowWidth;
@property(nonatomic) long long maxNumberOfColumns; // @synthesize maxNumberOfColumns=_maxNumberOfColumns;
@property(nonatomic) double minNumberOfRows; // @synthesize minNumberOfRows=_minNumberOfRows;
@property(nonatomic) double maxNumberOfRows; // @synthesize maxNumberOfRows=_maxNumberOfRows;
@property(copy, nonatomic) NSArray *sortStyleNames; // @synthesize sortStyleNames=_sortStyleNames;
@property void *userInfo; // @synthesize userInfo=_userInfo;
@property id <_IMKCandidateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGRect sortbarFrame;
@property(readonly, nonatomic) struct CGRect windowFrame;
- (struct CGSize)_layoutCellsForVisibleSize:(struct CGSize)arg1 minRowWidth:(double)arg2 specificCell:(id)arg3;
- (void)_layout;
- (void)_layoutAndResize;
- (void)_setNeedsLayoutWithResize:(BOOL)arg1 reflow:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)needsResizeOnLayout;
- (id)_popoverContoller;
- (void)_addAccessoryView;
- (struct CGSize)_adjustScrollersVisibilityWithCurrentSize:(BOOL)arg1;
- (void)_updateWindowMinSize;
- (void)_showCandidateAtIndex:(long long)arg1 byClick:(BOOL)arg2;
- (long long)_scrollToTopRow:(long long)arg1;
- (double)_visibleRowsForRowCount:(long long)arg1;
- (void)_sortBarButtonSelected:(id)arg1;
- (void)changeSettingsInBlock:(CDUnknownBlockType)arg1;
- (double)groupLabelWidth;
- (double)cellHeight;
- (id)standardCellTextAttributes;
- (void)delayedLayoutRowAtCell:(id)arg1;
- (void)_adjustWindowFrameTo:(struct CGRect)arg1 animation:(BOOL)arg2;
- (struct CGRect)_callDelegateToLocateWindowForContentSize:(struct CGSize)arg1 inOutAnimation:(char *)arg2;
- (void)adjustWindowForContentSize:(struct CGSize)arg1 animation:(BOOL)arg2;
- (void)scrolledWithTopRow:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 confirm:(BOOL)arg2 byClick:(BOOL)arg3;
- (id)candidateCellForCandidate:(id)arg1;
- (id)candidateCellAtIndex:(long long)arg1;
- (id)candidateCells;
- (id)privateInfo;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long visibleTopRow; // @synthesize visibleTopRow=_visibleTopRow;
- (void)setDescriptionStyleSheet:(id)arg1;
- (struct CGSize)windowSizeForCandidates:(id)arg1;
- (BOOL)isEnabledForSortStyle:(long long)arg1;
- (void)setEnabled:(BOOL)arg1 forSortStyle:(long long)arg2;
- (void)moveSelection:(int)arg1;
- (long long)columnForIndex:(long long)arg1;
- (long long)rowForIndex:(long long)arg1;
- (long long)indexForGuideNumber:(long long)arg1;
- (void)showCandidateAtIndex:(long long)arg1;
- (id)candidateAtIndex:(long long)arg1;
- (void)_setController:(id)arg1 inCandidateCells:(id)arg2;
- (void)_addCandidates:(id)arg1 groupLabel:(id)arg2 groupIndex:(long long)arg3;
- (void)_adoptPendingCandidates;
- (void)setCandidates:(id)arg1 visibleTopRow:(long long)arg2 selection:(long long)arg3 resizeWindow:(BOOL)arg4;
- (void)setCandidates:(id)arg1 visibleTopRow:(long long)arg2 selection:(long long)arg3;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)setWindowContentMargin:(double)arg1 forEdge:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSortStyleNames:(id)arg1;

@end
