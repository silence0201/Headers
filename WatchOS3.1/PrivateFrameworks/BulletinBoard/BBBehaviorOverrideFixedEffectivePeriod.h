//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBBehaviorOverrideEffectivePeriod-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod>
{
    NSDate *_startDate;
    double _effectiveInterval;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double effectiveInterval; // @synthesize effectiveInterval=_effectiveInterval;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

