//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation
{
    CDUnknownBlockType _fetchWhitelistedBundleIDsCompletionBlock;
    NSArray *_bundleIDs;
}

@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(copy, nonatomic) CDUnknownBlockType fetchWhitelistedBundleIDsCompletionBlock; // @synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (id)activityCreate;

@end

