//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : NSObject
{
    _Bool _previouslySentReachability;
    _Bool _currentReachability;
    NSString *_accessoryUUID;
}

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(_Bool)arg2;
@property(nonatomic) _Bool currentReachability; // @synthesize currentReachability=_currentReachability;
@property(nonatomic) _Bool previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

