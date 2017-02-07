//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface HKWorkoutEvent : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSDate *_date;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (void)_assertPropertiesValid;
@property(readonly, copy) NSDate *date;
@property(readonly) long long type;
- (id)init;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

