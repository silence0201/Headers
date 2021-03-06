//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEPluginPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    NSString *_pluginType;
}

+ (_Bool)isEnabledForPluginType:(id)arg1 applicationRemoved:(_Bool)arg2;
+ (_Bool)isAppInstalled:(id)arg1;
+ (id)copyIdentifiersOfInstalledVPNApps;
+ (void)removePreferencesForPluginType:(id)arg1;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property struct __SCPreferences *prefs; // @synthesize prefs=_prefs;
- (void).cxx_destruct;
- (struct __CFDictionary *)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2;
- (_Bool)setPreferences:(struct __CFDictionary *)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3;
- (_Bool)isFlagSet:(struct __CFString *)arg1;
- (id)copyAppURL;
- (void)setPluginTypeEnabled:(_Bool)arg1 appURLData:(id)arg2;
- (_Bool)isPluginTypeEnabled;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1;

@end

