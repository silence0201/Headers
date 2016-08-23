//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSFilePresenter-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter>
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_presentedItemURL;
    struct dispatch_queue_s *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}

+ (void)registerInitialSyncHandlerForURL:(id)arg1 andContainerID:(id)arg2 onQueue:(struct dispatch_queue_s *)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)cloudDocsRootFolder;
+ (int)usesCloudDocsFramework;
+ (void)startDownloadForItems:(id)arg1 onQueue:(struct dispatch_queue_s *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)sharedPrivateOperationQueue;
+ (void)initialize;
@property(readonly, nonatomic) NSDictionary *locationToSafeSaveFile; // @synthesize locationToSafeSaveFile=_locationToSafeSaveFile;
@property(readonly, nonatomic) NSDictionary *locationToStatus; // @synthesize locationToStatus=_locationToStatus;
@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
- (void)unregisterSafeSaveFile:(id)arg1;
- (void)registerSafeSaveFile:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logWasExported:(id)arg1;
- (void)exporterDidMoveLog:(id)arg1;
- (id)copyStatusDictionary;
- (id)retainedStatusForLocation:(id)arg1;
- (BOOL)isiCloudExtension:(id)arg1;
- (void)processPendingURLs;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(struct dispatch_queue_s *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
