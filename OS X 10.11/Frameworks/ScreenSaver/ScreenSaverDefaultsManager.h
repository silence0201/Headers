//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ScreenSaverDefaultsManager : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)defaultsManager;
- (void)_appWillTerminate:(id)arg1;
- (void)synchronize;
- (void)setDefaults:(id)arg1 forKey:(id)arg2;
- (id)defaultsForKey:(id)arg1;
- (id)init;

@end
