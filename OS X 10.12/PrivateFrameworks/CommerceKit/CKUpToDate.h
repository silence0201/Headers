//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKUpToDate : NSObject
{
    CDUnknownBlockType _callbackBlock;
}

+ (BOOL)isEligibleForItemID:(id)arg1;
+ (id)eligibleUpToDateAppsForServer;
+ (id)eligibleUpToDateApps;
+ (void)startCheckIgnoringTimestamps:(BOOL)arg1;
+ (id)sharedInstance;
+ (BOOL)usePorco;
@property(copy) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (void)claimItems:(id)arg1 withDownloadItems:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
