//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>
#import <WebKit/UITextInputTraits-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage;
@protocol UITextInputTraits;

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>
- (void)takeTraitsFrom:(id <UITextInputTraits>)arg1;

@optional
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool disablePrediction;
@property(copy, nonatomic) NSString *responseContext;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool deferBecomingResponder;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) struct _NSRange validTextRange;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@end

