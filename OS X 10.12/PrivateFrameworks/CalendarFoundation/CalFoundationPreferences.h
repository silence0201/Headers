//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences, NSArray, NSString;

@interface CalFoundationPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) double simulatedDateForNowOffset;
@property(readonly, nonatomic) NSArray *logSimpleConfiguration;
@property(readonly, nonatomic) NSString *logFilePath;
@property(readonly, nonatomic) BOOL logEmitUserNotifications;
@property(readonly, nonatomic) BOOL logAutoFlush;
- (id)init;

@end

