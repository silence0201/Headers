//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, PHFetchResult;

@interface PHFetchResultChangeDetails : NSObject
{
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousItems;
    NSArray *_currentItems;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSArray *_changedItems;
    NSIndexSet *_changedIndexes;
    _Bool _skipIncrementalChanges;
}

+ (id)_identifiersForPHObjects:(id)arg1;
+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasDiffs;
- (void)calculateDiffs;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
@property(readonly) _Bool hasMoves;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct __CFArray *movedFromIndexes;
@property(readonly, nonatomic) NSIndexSet *movedIndexes;
@property(readonly) NSArray *changedObjects;
@property(readonly) NSIndexSet *changedIndexes;
@property(readonly) NSArray *insertedObjects;
@property(readonly) NSIndexSet *insertedIndexes;
@property(readonly) NSArray *removedObjects;
@property(readonly) NSIndexSet *removedIndexes;
- (id)currentItems;
@property(readonly) PHFetchResult *fetchResultAfterChanges;
@property(readonly) PHFetchResult *fetchResultBeforeChanges;
@property(readonly) _Bool hasIncrementalChanges;
- (_Bool)shouldReload;
- (void)dealloc;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(_Bool)arg4;

@end

