//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/NSObject-Protocol.h>

@class CSIndexJob;

@protocol CSSearchableIndexServiceInterface <NSObject>
- (void)performIndexJob:(CSIndexJob *)arg1 acknowledgementHandler:(void (^)(NSError *))arg2;
- (void)performIndexJob:(CSIndexJob *)arg1;
@end

