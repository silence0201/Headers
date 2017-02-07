//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKDevice, NSLock, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AKAnisetteProvisioningController : NSObject
{
    NSXPCConnection *_anisetteServiceConnection;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    AKDevice *_targetDevice;
}

- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id *)arg2;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)anisetteDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)anisetteDataWithError:(id *)arg1;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initForDevice:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (id)initForDevice:(id)arg1;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end
