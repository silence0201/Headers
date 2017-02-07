//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpotlightUI/UITextFieldDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, SPSearchQueryContext, SPUITextField, UIButton, _UILegibilitySettings;
@protocol SPUISearchHeaderDelegate;

@interface SPUISearchHeader : UIView <UITextFieldDelegate>
{
    _Bool _willClear;
    _Bool _isShowingCornerRadius;
    id <SPUISearchHeaderDelegate> _delegate;
    unsigned long long _suggestionID;
    _UILegibilitySettings *_legibilitySettings;
    SPUITextField *_searchField;
    UIButton *_cancelButton;
    NSLayoutConstraint *_searchFieldTrailingConstraint;
    NSLayoutConstraint *_cancelButtonTrailingConstraint;
    NSLayoutConstraint *_widthConstraint;
}

+ (_Bool)isJ99;
@property(nonatomic) _Bool isShowingCornerRadius; // @synthesize isShowingCornerRadius=_isShowingCornerRadius;
@property _Bool willClear; // @synthesize willClear=_willClear;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *cancelButtonTrailingConstraint; // @synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint;
@property(retain) NSLayoutConstraint *searchFieldTrailingConstraint; // @synthesize searchFieldTrailingConstraint=_searchFieldTrailingConstraint;
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) SPUITextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property unsigned long long suggestionID; // @synthesize suggestionID=_suggestionID;
@property __weak id <SPUISearchHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateKeyboardSuggestions:(id)arg1;
- (double)topPadding;
- (void)searchForSuggestedQuery:(id)arg1;
- (void)showCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)cancelButtonIsVisible;
- (void)updateColors;
- (_Bool)isOnDarkBackground;
- (void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(_Bool)arg2;
- (void)unfocusSearchField;
- (void)focusSearchField;
@property(readonly, nonatomic) SPSearchQueryContext *currentQueryContext;
@property(readonly, nonatomic) NSString *currentQuery;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(_Bool)arg3;
- (void)textDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)addInputMethodInformationToQueryContext:(id)arg1;
- (void)linkWithKeyboardController:(id)arg1;
- (id)nextResponder;
- (void)enableDictationIfRequired;
- (void)textInputModeChanged:(id)arg1;
- (id)backdropVisualEffectView;
- (void)setRoundedCornerVisible:(_Bool)arg1;
- (void)updateBlurProgress:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
