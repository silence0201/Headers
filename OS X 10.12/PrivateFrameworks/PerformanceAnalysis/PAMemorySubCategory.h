//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PerformanceAnalysis/NSCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString, PAProcess;

@interface PAMemorySubCategory : NSObject <NSCoding>
{
    NSString *name;
    PAProcess *process;
    NSMutableSet *_memRegions;
    NSMutableSet *_memObjects;
    long long totalDirtySize;
    long long totalSwappedSize;
    long long totalCleanSize;
    long long totalReclaimableSize;
}

@property(readonly) long long totalReclaimableSize; // @synthesize totalReclaimableSize;
@property(readonly) long long totalCleanSize; // @synthesize totalCleanSize;
@property(readonly) long long totalSwappedSize; // @synthesize totalSwappedSize;
@property(readonly) long long totalDirtySize; // @synthesize totalDirtySize;
@property(readonly) NSSet *memObjects; // @synthesize memObjects=_memObjects;
@property(readonly) NSSet *memRegions; // @synthesize memRegions=_memRegions;
@property(readonly) PAProcess *process; // @synthesize process;
@property(readonly) NSString *name; // @synthesize name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_sortedMemRegions:(id)arg1;
- (id)_sortedMemObjectsForFlavor:(int)arg1;
- (id)detailStringForFlavor:(int)arg1 andCallOutSwapped:(BOOL)arg2 andShowRegions:(BOOL)arg3;
- (void)addMemoryObject:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 forProcess:(id)arg2;

@end
