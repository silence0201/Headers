//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

__attribute__((visibility("hidden")))
@interface CKFetchServerEnvironmentOperation : CKOperation
{
    long long _environment;
    CDUnknownBlockType _fetchServerEnvironmentCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchServerEnvironmentCompletionBlock; // @synthesize fetchServerEnvironmentCompletionBlock=_fetchServerEnvironmentCompletionBlock;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (id)init;

@end
