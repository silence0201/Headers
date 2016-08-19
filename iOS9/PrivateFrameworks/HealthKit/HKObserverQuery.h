//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface HKObserverQuery : HKQuery
{
    CDUnknownBlockType _updateHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (CDUnknownBlockType)_queue_errorHandler;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end

