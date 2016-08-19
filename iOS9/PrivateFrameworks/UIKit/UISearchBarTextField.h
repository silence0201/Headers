//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView;

__attribute__((visibility("hidden")))
@interface UISearchBarTextField : UITextField
{
    NSMutableDictionary *_customClearButtons;
    NSMutableDictionary *_iconOffsets;
    NSValue *_searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;
    _Bool _deferringFirstResponder;
    _Bool _animatePlaceholderOnResignFirstResponder;
    _Bool __preventSelectionViewActivation;
}

@property(nonatomic, setter=_setPreventSelectionViewActivation:) _Bool _preventSelectionViewActivation; // @synthesize _preventSelectionViewActivation=__preventSelectionViewActivation;
- (void).cxx_destruct;
- (id)textInputTraits;
- (void)_setBottomEffectBackgroundVisible:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)_activateSelectionView;
- (void)_removeEffectsBackgroundViews;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(_Bool)arg1;
- (void)updateForBackdropStyle:(unsigned long long)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)_placeholderColor;
- (Class)_systemBackgroundViewClass;
- (Class)_placeholderLabelClass;
- (void)tintColorDidChange;
- (long long)_suffixLabelTextAlignment;
- (struct CGRect)_suffixFrame;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (_Bool)_becomeFirstResponderWhenPossible;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (_Bool)_shouldCenterPlaceholder;
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (_Bool)_hasActionForEventMask:(unsigned long long)arg1;
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
