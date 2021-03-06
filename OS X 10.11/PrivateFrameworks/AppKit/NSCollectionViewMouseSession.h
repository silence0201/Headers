//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSCollectionView, NSEvent, NSMutableSet, NSSet, NSView;

__attribute__((visibility("hidden")))
@interface NSCollectionViewMouseSession : NSResponder
{
    long long sessionNumber;
    NSCollectionView *collectionView;
    long long state;
    NSEvent *mouseDownEvent;
    struct CGPoint mouseDownPointInCollectionView;
    NSEvent *lastNonPeriodicEvent;
    NSSet *selectedIndexPathsAtStart;
    NSMutableSet *indexPathsToSelect;
    NSMutableSet *indexPathsToDeselect;
    NSMutableSet *dragCandidateIndexPaths;
    NSSet *indexPathsBeingDragged;
    BOOL unmodifiedMouseDownInAlreadySelectedItem;
    BOOL dragSelectShouldModifyExistingSelection;
    BOOL itemsBeingDraggedAreHidden;
    NSView *rubberbandView;
}

+ (id)mouseSessionWithCollectionView:(id)arg1;
@property(readonly) NSSet *indexPathsBeingDragged; // @synthesize indexPathsBeingDragged;
- (void)dealloc;
- (void)trackWithEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (void)updateDragSelectionForEvent:(id)arg1;
- (void)deselectAllNow;
- (void)clearHighlightingBeforeCompletingDrag;
- (void)commitSelectionAndClearHighlighting;
- (BOOL)addIndexPathToDeselect:(id)arg1;
- (BOOL)addIndexPathToSelect:(id)arg1;
- (id)setHighlightState:(long long)arg1 forItemsAtIndexPaths:(id)arg2;
- (long long)highlightStateForIndexPath:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

