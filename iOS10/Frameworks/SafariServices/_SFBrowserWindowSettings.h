//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject
{
    NSMutableDictionary *_settingsDictionary;
}

+ (void)setSharedSettings:(id)arg1;
+ (id)settings;
- (void).cxx_destruct;
- (void)synchronize;
@property(readonly, nonatomic) _Bool hasPrivateBrowsingWindow;
- (void)removeWindowWithUUID:(id)arg1;
- (void)setIsShowingTabView:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (_Bool)isShowingTabViewForWindowWithUUID:(id)arg1;
- (void)setActiveDocumentIsValid:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (_Bool)activeDocumentIsValidForWindowWithUUID:(id)arg1;
- (void)setPrivateBrowsingEnabled:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (_Bool)privateBrowsingEnabledForWindowWithUUID:(id)arg1;
- (_Bool)_boolValueForKey:(id)arg1 windowUUID:(id)arg2;
- (id)_numberForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (void)_initializeSettingsDictionaryIfNeeded;
- (void)validateWindowSettingsWithUUIDs:(id)arg1;
- (id)init;

@end

