//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreChineseEngine/CIMShapeBasedEngine.h>

@interface CIMWubixingEngine : CIMShapeBasedEngine
{
}

- (id)currentInlineText;
- (BOOL)shouldGroupWindowMovement;
- (BOOL)candidateShouldShowInputCode:(id)arg1;
- (void)didHandleCandidateSelectionChanged:(id)arg1;
- (BOOL)handleReturn;
- (BOOL)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (void)commitPinyinInline;
- (id)getCharacterCodeForCharacter:(id)arg1;
- (id)wildcardCharacterSet;
- (BOOL)commitDirectlyWhenExactMatch;
- (unsigned long long)maxLengthOfInline;
- (id)keyboardLayoutName;
- (id)inputCharacterSet;
- (int)mecabraInputMethodType;
- (unsigned long long)analysisOptions;
- (id)helpAnchorName;
- (id)shownInlineText;
@property(readonly, nonatomic) BOOL inPinyinMode;

@end
