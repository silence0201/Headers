//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject
{
    CMExerciseMinuteInternal *_internal;
}

+ (id)maxExerciseMinuteDataEntries;
+ (_Bool)isExerciseMinuteAvailable;
@property(readonly, nonatomic) CMExerciseMinuteInternal *_internal; // @synthesize _internal;
- (void)queryExerciseMinutesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

