//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLocale.h>

@class NSString;

@interface NSLocale (IntlPreferencesAdditions)
+ (void)setLocaleOnly:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)renderableLocaleLanguages;
+ (id)renderableUILanguages;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4;
+ (id)supportedCJLanguageIdentifiers;
+ (id)deviceLanguageIdentifier;
+ (id)deviceLanguageLocale;
@property(readonly, nonatomic) NSString *languageIdentifier;
- (id)localeByChangingLanguageTo:(id)arg1;
@end

