//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface _HKSampleTypeQuery : HKQuery
{
    CDUnknownBlockType _resultsHandler;
}

+ (Class)_queryServerDataObjectClass;
@property(copy) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (void).cxx_destruct;
- (void)deliverSampleTypes:(id)arg1 forQuery:(id)arg2;
- (_Bool)_requiresValidSampleType;
- (CDUnknownBlockType)_queue_errorHandler;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;

@end

