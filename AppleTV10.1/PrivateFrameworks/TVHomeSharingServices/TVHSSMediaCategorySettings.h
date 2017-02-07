//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVSPreferences;

@interface TVHSSMediaCategorySettings : NSObject
{
    unsigned long long _preferedDisplayFilter;
    TVSPreferences *_preferences;
    NSString *_mediaCategoryPreferencesKey;
}

@property(copy, nonatomic) NSString *mediaCategoryPreferencesKey; // @synthesize mediaCategoryPreferencesKey=_mediaCategoryPreferencesKey;
@property(readonly, nonatomic) TVSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) unsigned long long preferedDisplayFilter; // @synthesize preferedDisplayFilter=_preferedDisplayFilter;
- (void).cxx_destruct;
- (id)_settingsDictionaryFromPreferences;
- (void)_writeSettingToPreferences:(id)arg1 withKey:(id)arg2;
- (void)_refreshSettingsFromPreferencesAndShouldNotify:(_Bool)arg1;
- (id)_initWithPreferences:(id)arg1 mediaCategoryKey:(id)arg2;
- (id)init;

@end
