//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, _UIInlineCandidateCell;

__attribute__((visibility("hidden")))
@interface UIInlineCandidateTextView : UIView
{
    int m_type;
    int m_edgeType;
    _Bool m_animating;
    NSMutableArray *_candidateCellArray;
    NSArray *_candidates;
    id _target;
    SEL _action;
    unsigned long long _selectedItem;
    _UIInlineCandidateCell *_currentlyPushedItem;
    _Bool _showingArrow;
    _Bool _arrowHighlighted;
    _Bool _phraseEditable;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (void)redrawArrow;
- (id)findCell:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)selectedItem;
- (void)setSelectedItem:(unsigned long long)arg1;
- (void)showHighlightedArrow;
- (_Bool)_arrowHighlighted;
- (unsigned long long)numberOfShownItems;
- (double)_layoutCandidates:(id)arg1 maxCount:(int)arg2 height:(double)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(_Bool)arg5;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)_cellSelected:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)setEdgeType:(int)arg1;
- (int)textEffectsVisibilityLevel;
- (int)edgeType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andOrientation:(long long)arg2 candidates:(id)arg3 type:(int)arg4 maxScreenWidth:(double)arg5 hasExtensionCandidates:(_Bool)arg6;

@end
