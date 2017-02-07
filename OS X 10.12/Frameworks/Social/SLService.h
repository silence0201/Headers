//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SLService : NSObject
{
}

+ (id)allServices;
+ (id)serviceForServiceType:(id)arg1;
- (BOOL)supportsVideoURL:(id)arg1;
- (BOOL)supportsImageURL:(id)arg1;
- (long long)maximumVideoTimeLimit;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoCount;
- (long long)maximumImageDataSize;
- (long long)maximumImageCount;
- (long long)maximumURLCount;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (id)accountType;
- (id)serviceType;
- (BOOL)isFirstClassService;
- (BOOL)hasAccounts;

@end
