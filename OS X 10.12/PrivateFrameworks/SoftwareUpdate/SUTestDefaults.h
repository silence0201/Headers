//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SUTestDefaults : NSObject
{
    NSString *_testMode;
}

+ (id)sharedDefaults;
- (int)requiredPackageTrustLevelForCurrentMode;
- (BOOL)okayToUseNonProductionMode;
- (BOOL)inThirdPartyMode;
- (BOOL)inDevKeyMode;
- (BOOL)inProductionMode;
- (void)exitTestMode;
- (id)currentTestMode;
- (BOOL)attemptToEnterTestMode:(id)arg1;
- (void)dealloc;

@end

