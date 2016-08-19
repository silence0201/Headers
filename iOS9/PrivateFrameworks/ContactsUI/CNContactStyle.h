//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/NSSecureCoding-Protocol.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding>
{
    _Bool _usesOpaqueBackground;
    _Bool _usesTranslucentBarStyle;
    _Bool _shouldPresentInCurrentContext;
    _Bool _blurSupported;
    UIColor *_textColor;
    UIColor *_disabledTextColor;
    UIColor *_placeholderTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_suggestedLabelTextColor;
    UIColor *_suggestedValueTextColor;
    UIColor *_readOnlyTextColor;
    UIColor *_notesTextColor;
    UIColor *_backgroundColor;
    long long _separatorBackdropOverlayBlendMode;
    UIColor *_headerBackgroundColor;
    UIColor *_separatorColor;
    long long _separatorStyle;
    UIColor *_sectionBackgroundColor;
    UIColor *_selectedCellBackgroundColor;
    long long _barStyle;
    long long _keyboardAppearance;
}

+ (id)currentStyle;
+ (void)setCurrentStyle:(id)arg1;
+ (id)testStyle;
+ (id)siriStyle;
+ (id)starkStyle;
+ (id)watchStyle;
+ (id)faceTimeStyle;
+ (id)darkStyle;
+ (id)defaultStyle;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool blurSupported; // @synthesize blurSupported=_blurSupported;
@property(nonatomic) _Bool shouldPresentInCurrentContext; // @synthesize shouldPresentInCurrentContext=_shouldPresentInCurrentContext;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) _Bool usesTranslucentBarStyle; // @synthesize usesTranslucentBarStyle=_usesTranslucentBarStyle;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) UIColor *selectedCellBackgroundColor; // @synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor;
@property(retain, nonatomic) UIColor *sectionBackgroundColor; // @synthesize sectionBackgroundColor=_sectionBackgroundColor;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *headerBackgroundColor; // @synthesize headerBackgroundColor=_headerBackgroundColor;
@property(nonatomic) long long separatorBackdropOverlayBlendMode; // @synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode;
@property(nonatomic) _Bool usesOpaqueBackground; // @synthesize usesOpaqueBackground=_usesOpaqueBackground;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *notesTextColor; // @synthesize notesTextColor=_notesTextColor;
@property(retain, nonatomic) UIColor *readOnlyTextColor; // @synthesize readOnlyTextColor=_readOnlyTextColor;
@property(retain, nonatomic) UIColor *suggestedValueTextColor; // @synthesize suggestedValueTextColor=_suggestedValueTextColor;
@property(retain, nonatomic) UIColor *suggestedLabelTextColor; // @synthesize suggestedLabelTextColor=_suggestedLabelTextColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(retain, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *boldTextFont;
@property(readonly, nonatomic) UIFont *textFont;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

