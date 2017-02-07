//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface PHAssetResourceManager : NSObject
{
    NSMutableDictionary *_requestsById;
    NSOperationQueue *_resourceRequestQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _currentRequestID;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)assetUUIDsWithNonLocalResourcesForAssetUUIDs:(id)arg1 cplResourceTypes:(id)arg2;
- (int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelDataRequest:(int)arg1;
- (void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_streamWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)photoLibrary;
- (void)_synchronized:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

