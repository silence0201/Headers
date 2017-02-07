//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSError, NSUUID;

@interface _HKWorkoutEvent : NSObject <NSSecureCoding>
{
    NSUUID *_sessionId;
    long long _eventType;
    NSDate *_date;
    NSError *_error;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithSessionId:(id)arg1 error:(id)arg2;
- (id)initWithEventType:(long long)arg1 sessionId:(id)arg2 date:(id)arg3 metadata:(id)arg4;

@end

