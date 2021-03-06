//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSInternationalization : NSObject
{
}

+ (void)postNotificationForLocaleChange;
+ (void)postNotificationForLanguageChange;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(_Bool)arg1 forPreferredLanguages:(id)arg2;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)arg1;
+ (id)availableRegions;
+ (void)setRegion:(id)arg1;
+ (void)setRegion:(id)arg1 ignoringExistingLocale:(_Bool)arg2;
+ (id)region;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2;
+ (id)displayNameForLanguage:(id)arg1;
+ (id)availableBaseSystemLanguages;
+ (id)availableSystemLanguages;
+ (void)setSystemLanguage:(id)arg1;
+ (id)systemLanguage;
+ (id)deviceLanguageIdentifier;

@end

