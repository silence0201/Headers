//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UIKeyboardCandidateGridLayoutDelegate-Protocol.h>
#import <UIKit/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSString, TIKeyboardCandidateResultSet, UIButton, UIKBCandidateCollectionView, UIKeyboardCandidateGridCollectionView, UIKeyboardCandidateGridLayout, UIView;
@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate>
{
    _Bool _layoutExtensionCandidates;
    _Bool _hasSecondaryCandidates;
    _Bool _singleLineMode;
    _Bool _supportsNumberKeySelection;
    _Bool _secondaryCandidatesViewIsCurrent;
    _Bool __usesDeemphasizedTextAppearance;
    int _candidatesVisualStyle;
    NSArray *_filteredCandidates;
    id <UIKeyboardCandidateGridCollectionViewControllerDelegate> _delegate;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSArray *_candidateGroups;
    double _rowHeight;
    CDStruct_961fb75c _visualStyling;
    UIButton *_padInlineFloatingArrowButton;
    UIView *_headerView;
    UIKBCandidateCollectionView *_secondaryCandidatesView;
    double _groupBarWidth;
}

@property(nonatomic) _Bool _usesDeemphasizedTextAppearance; // @synthesize _usesDeemphasizedTextAppearance=__usesDeemphasizedTextAppearance;
@property(nonatomic) _Bool secondaryCandidatesViewIsCurrent; // @synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent;
@property(nonatomic) _Bool supportsNumberKeySelection; // @synthesize supportsNumberKeySelection=_supportsNumberKeySelection;
@property(nonatomic) double groupBarWidth; // @synthesize groupBarWidth=_groupBarWidth;
@property(nonatomic) _Bool singleLineMode; // @synthesize singleLineMode=_singleLineMode;
@property(retain, nonatomic) UIKBCandidateCollectionView *secondaryCandidatesView; // @synthesize secondaryCandidatesView=_secondaryCandidatesView;
@property(nonatomic) _Bool hasSecondaryCandidates; // @synthesize hasSecondaryCandidates=_hasSecondaryCandidates;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIButton *padInlineFloatingArrowButton; // @synthesize padInlineFloatingArrowButton=_padInlineFloatingArrowButton;
@property(nonatomic) _Bool layoutExtensionCandidates; // @synthesize layoutExtensionCandidates=_layoutExtensionCandidates;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSArray *candidateGroups; // @synthesize candidateGroups=_candidateGroups;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(nonatomic) id <UIKeyboardCandidateGridCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIKeyboardCandidateGridLayout *collectionViewGridLayout;
@property(readonly, nonatomic) UIKeyboardCandidateGridCollectionView *collectionView;
- (id)secureCandidateRenderTraits;
- (unsigned long long)maxNumberOfProactiveCells;
- (void)revealHiddenCandidates;
- (_Bool)handleNumberKey:(unsigned long long)arg1;
- (unsigned long long)rowIndexForCellAtIndexPath:(id)arg1;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)reloadData;
- (void)candidatesDidChange;
@property(readonly, nonatomic) NSArray *filteredCandidates; // @synthesize filteredCandidates=_filteredCandidates;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (_Bool)hasNextPage;
- (_Bool)hasPreviousPage;
- (void)showNextRow;
- (void)showPreviousRow;
- (void)showNextPage;
- (void)showPreviousPage;
- (void)stepOneLine:(_Bool)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (_Bool)showCandidate:(id)arg1;
- (_Bool)isExtendedList;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)updateIndexTitles;
- (void)updateHeaderView;
- (void)layout;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)lastCandidateIndexPath;
- (id)firstCandidateIndexPath;
- (id)lastCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (id)firstCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (id)selectedItemIndexPath;
- (id)indexPathForCandidate:(id)arg1;
- (id)candidateAtIndexPath:(id)arg1;
- (unsigned long long)candidateIndexOffset;
- (id)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupsCount;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)rowSizeForGridLayout;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)padInlineHighlightedRowIndex;
- (void)padInlineFloatingExpand;
- (_Bool)padInlineFloatingIsExpanded;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)scrollToBottomWithAnimation:(_Bool)arg1;
- (void)scrollToTopWithAnimation:(_Bool)arg1;
- (void)scrollToTopWithAnimation:(_Bool)arg1 revealHeaderView:(_Bool)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadSecondaryCandidatesView;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

