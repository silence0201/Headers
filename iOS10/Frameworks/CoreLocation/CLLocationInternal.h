//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject
{
    CDStruct_05ee51d2 fLocation;
    CLLocationMatchInfo *fMatchInfo;
    double fTrustedTimestamp;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithClientLocation:(CDStruct_05ee51d2)arg1;

@end

