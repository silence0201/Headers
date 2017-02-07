//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPModelLibraryTransientStateController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_registeredTransientState;
}

+ (id)sharedDeviceLibraryController;
- (void).cxx_destruct;
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;
- (long long)transientKeepLocalStateForModelObject:(id)arg1;
- (long long)transientAddStateForModelObject:(id)arg1;
- (void)unregisterTransientState:(id)arg1;
- (id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;
- (void)addOperation:(id)arg1;
- (id)init;

@end
