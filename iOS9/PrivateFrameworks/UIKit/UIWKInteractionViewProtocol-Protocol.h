//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, UIView;

@protocol UIWKInteractionViewProtocol
- (void)_cancelLongPressGestureRecognizer;
- (NSArray *)webSelectionRects;
- (_Bool)pointIsInAssistedNode:(struct CGPoint)arg1;
- (_Bool)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (_Bool)hasMarkedText;
- (NSString *)markedText;
- (void)applyAutocorrection:(NSString *)arg1 toString:(NSString *)arg2 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg3;
- (void)requestAutocorrectionRectsForString:(NSString *)arg1 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg2;
- (void)requestAutocorrectionContextWithCompletionHandler:(void (^)(UIWKAutocorrectionContext *))arg1;
- (struct CGRect)textLastRect;
- (struct CGRect)textFirstRect;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(_Bool)arg3;
- (void)changeSelectionWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;

@optional
- (void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(void (^)(void))arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint)arg3 completionHandler:(void (^)(void))arg4;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(void (^)(void))arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(void (^)(void))arg2;
- (void)moveByOffset:(long long)arg1;
- (struct CGRect)unobscuredContentRect;
- (double)inverseScale;
- (UIView *)unscaledView;
- (void)selectWordBackward;
- (_Bool)isReplaceAllowed;
- (void)selectWordForReplacement;
- (void)replaceText:(NSString *)arg1 withText:(NSString *)arg2;
- (NSString *)selectedText;
- (_Bool)pointIsNearMarkedText:(struct CGPoint)arg1;
- (void)requestDictationContext:(void (^)(NSString *, NSString *, NSString *))arg1;
- (void)replaceDictatedText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)clearSelection;
- (void)changeBlockSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 forHandle:(long long)arg3;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(_Bool)arg3 withFlags:(long long)arg4;
@end

