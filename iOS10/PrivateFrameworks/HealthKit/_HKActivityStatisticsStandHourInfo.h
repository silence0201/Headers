//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding>
{
    double _timeStamp;
    long long _state;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 state:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;

@end
