//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface GKLeaderboardUpdate : NSObject
{
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_updatedIndexes;
    NSMutableIndexSet *_removedIndexes;
}

@property(retain, nonatomic) NSMutableIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(retain, nonatomic) NSMutableIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(retain, nonatomic) NSMutableIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
- (id)indexPathsForIndexes:(id)arg1 section:(long long)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end
