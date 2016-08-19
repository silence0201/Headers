//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject <NSSecureCoding>
{
    long long _state;
    unsigned long long _activityType;
    NSDate *_startDate;
    NSArray *_workoutEvents;
}

+ (_Bool)supportsSecureCoding;
+ (id)workoutSnapshotWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4;
@property(readonly, nonatomic) NSArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)durationForDate:(id)arg1;
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4;

@end

