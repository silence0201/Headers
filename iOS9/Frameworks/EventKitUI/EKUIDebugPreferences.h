//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences;

@interface EKUIDebugPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool showReportAProblemNotificationButton;
@property(nonatomic) _Bool verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property(nonatomic) _Bool showInviteesAndMoreRegion;
- (id)init;

@end

