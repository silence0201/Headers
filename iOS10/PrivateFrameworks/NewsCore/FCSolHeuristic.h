//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject
{
    _Bool _alternate;
    NSArray *_groupSizes;
    long long _iterations;
    long long _heuristicSampleSize;
    CDUnknownBlockType _utilityBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType utilityBlock; // @synthesize utilityBlock=_utilityBlock;
@property(readonly, nonatomic) long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) _Bool alternate; // @synthesize alternate=_alternate;
@property(retain, nonatomic) NSArray *groupSizes; // @synthesize groupSizes=_groupSizes;
- (void).cxx_destruct;
- (double)computeScoreWithArticles:(id)arg1 tags:(id)arg2 articlesByTag:(id)arg3;
- (id)fillGroupsWithArticles:(id)arg1 tags:(id)arg2 articlesByTag:(id)arg3 groupSizes:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 heuristicSampleSize:(long long)arg4 utilityBlock:(CDUnknownBlockType)arg5;

@end
