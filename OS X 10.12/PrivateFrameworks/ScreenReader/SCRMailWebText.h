//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRWebText.h>

#import <ScreenReader/SCRMailMessageContent-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SCRMailWebText : SCRWebText <SCRMailMessageContent>
{
    struct CGPoint _currentTextMarkerCenterPoint;
    NSNumber *_previousBlockQuoteLevel;
}

+ (BOOL)uiElementIsNoteEditor:(id)arg1;
+ (BOOL)uiElementIsNoteContainer:(id)arg1;
+ (BOOL)_uiElementIsNoteType:(id)arg1 type:(id)arg2;
- (BOOL)isMailWebText;
- (void)addContentToRequest:(id)arg1;
- (void)echoDataInRange:(id)arg1 request:(id)arg2 showOnScreen:(BOOL)arg3 feedbackType:(long long)arg4 withScrolling:(BOOL)arg5;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (id)helpDescription;
- (id)characterFromPosition:(id)arg1 next:(BOOL)arg2 attributed:(BOOL)arg3;
- (void)_storeCharacterInCache:(id)arg1 forRange:(id)arg2 attributed:(BOOL)arg3;
- (id)_characterFromCacheForPosition:(id)arg1 next:(BOOL)arg2 attributed:(BOOL)arg3 range:(id *)arg4;
- (id)_characterMarkerCache;
- (BOOL)_mailTextWorkaround_characterCountCanChange;
- (unsigned long long)groupBehavior;
- (void)setCurrentVOPosition:(id)arg1 synchKeyboard:(BOOL)arg2;
- (id)currentVOPosition;
- (id)childrenInReadContentsOrder;
- (void)setKeyboardFocus:(BOOL)arg1;
- (BOOL)readyToHaveKeyboardFocus;
- (id)lastPosition;
- (id)firstPosition;
- (BOOL)isNoteEditor;
- (id)fullItemDescriptionForMenu;
- (id)firstChildForFocusing;
- (BOOL)shouldAutoFocusOnChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

