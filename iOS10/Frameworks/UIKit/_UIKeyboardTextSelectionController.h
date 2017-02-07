//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIResponder, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;
@protocol UISelectionInteractionAssistant, UITextInput;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionController : NSObject
{
    _Bool _hasInteractionAssistant;
    _Bool _hasSelectionInteractionAssistant;
    _Bool _hasTextInputView;
    UITextPosition *_cursorPosition;
    long long _selectionGranularity;
    UITextRange *_initialSelection;
    UITextRange *_selectionBase;
    UIResponder<UITextInput> *_inputDelegate;
    struct CGRect _caretRectForCursorPosition;
}

@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) UITextRange *selectionBase; // @synthesize selectionBase=_selectionBase;
@property(retain, nonatomic) UITextRange *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(nonatomic) struct CGRect caretRectForCursorPosition; // @synthesize caretRectForCursorPosition=_caretRectForCursorPosition;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
- (void)endSelection;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint)arg3 executionContext:(id)arg4;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)restartSelection;
- (void)beginSelection;
- (struct CGPoint)boundedDeltaForTranslation:(struct CGPoint)arg1 cursorLocationBase:(struct CGPoint)arg2;
- (void)endLoupeGestureAtPoint:(struct CGPoint)arg1;
- (void)updateLoupeGestureAtPoint:(struct CGPoint)arg1;
- (_Bool)beginLoupeGestureAtPoint:(struct CGPoint)arg1;
- (void)endRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)scrollSelectionToVisible;
- (void)updateGestureRecognizers;
- (void)willHandoffLoupeMagnifier;
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;
- (void)switchToRangedSelection;
- (void)updateSelectionRects;
- (void)showSelectionCommands;
- (void)textDidChange;
- (void)selectionDidChange;
@property(readonly, nonatomic) struct CGRect caretRectForRightmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLeftmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLastSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForFirstSelectedPosition;
@property(readonly, nonatomic) _Bool hasRangedSelection;
@property(readonly, nonatomic) _Bool hasCaretSelection;
@property(readonly, nonatomic) UIView *textInputView;
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;
- (void)resetCursorPosition;
@property(retain, nonatomic) UITextPosition *cursorPosition;
- (void)endSelectionChange;
- (void)beginSelectionChange;
@property(readonly, nonatomic) id <UISelectionInteractionAssistant> selectionInteractionAssistant;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)initWithInputDelegate:(id)arg1;
- (void)dealloc;

@end

