//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@interface _HKWorkoutGoalTypeFilter : _HKFilter
{
    unsigned long long _goalType;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithGoalType:(unsigned long long)arg1 operatorType:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end

