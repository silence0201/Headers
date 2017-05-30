//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMObjectMergeOperations, NSUUID;
@protocol HMObjectMerge;

@protocol HMObjectMerge <NSObject>
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_mergeWithNewObject:(id <HMObjectMerge>)arg1 operations:(HMObjectMergeOperations *)arg2;

@optional
- (void)mergeWithNewObjectNoMergeCount:(id <HMObjectMerge>)arg1;
@end
