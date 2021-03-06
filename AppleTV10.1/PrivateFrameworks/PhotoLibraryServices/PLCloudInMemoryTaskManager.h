//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject
{
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (id)_identifierForResource:(id)arg1;
- (void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)cancelTaskWithTaskIdentifier:(id)arg1;
- (void)setTransferTask:(id)arg1 forResource:(id)arg2;
- (_Bool)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

