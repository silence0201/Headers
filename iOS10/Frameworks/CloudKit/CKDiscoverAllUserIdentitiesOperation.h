//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation
{
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverAllUserIdentitiesCompletionBlock;
    NSMutableArray *_discoveredIdentities;
}

@property(retain, nonatomic) NSMutableArray *discoveredIdentities; // @synthesize discoveredIdentities=_discoveredIdentities;
@property(copy, nonatomic) CDUnknownBlockType discoverAllUserIdentitiesCompletionBlock; // @synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock; // @synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (Class)operationInfoClass;
- (void)setLongLived:(_Bool)arg1;
- (id)init;

@end

