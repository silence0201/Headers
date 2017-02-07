//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PHImageManager : NSObject
{
    int _currentRequestID;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    NSMutableDictionary *_requestedImages;
}

+ (id)defaultManager;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(retain, nonatomic) NSMutableDictionary *requestedImages; // @synthesize requestedImages=_requestedImages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestIsolationQueue; // @synthesize requestIsolationQueue=_requestIsolationQueue;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end
