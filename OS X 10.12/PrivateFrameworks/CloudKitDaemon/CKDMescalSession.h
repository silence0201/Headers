//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, NSError, NSOperationQueue;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDMescalSession : NSObject
{
    BOOL _isSetup;
    BOOL _renewing;
    CKDClientContext *_context;
    NSError *_lastSetupError;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_renewalGroup;
    NSOperationQueue *_renewQueue;
    struct FPSAPContextOpaque_ *_mescalSession;
    struct FairPlayHWInfo_ _mescalHWInfo;
}

@property(nonatomic) struct FairPlayHWInfo_ mescalHWInfo; // @synthesize mescalHWInfo=_mescalHWInfo;
@property(nonatomic) struct FPSAPContextOpaque_ *mescalSession; // @synthesize mescalSession=_mescalSession;
@property(retain, nonatomic) NSOperationQueue *renewQueue; // @synthesize renewQueue=_renewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *renewalGroup; // @synthesize renewalGroup=_renewalGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue; // @synthesize opQueue=_opQueue;
@property(retain, nonatomic) NSError *lastSetupError; // @synthesize lastSetupError=_lastSetupError;
@property BOOL renewing; // @synthesize renewing=_renewing;
@property BOOL isSetup; // @synthesize isSetup=_isSetup;
@property(readonly, nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)processSignedData:(id)arg1 signature:(id)arg2 forRequest:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_reallyProcessSignedData:(id)arg1 signature:(id)arg2 qualityOfService:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_reallySignData:(id)arg1 qualityOfService:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)signatureHeadersForRequest:(id)arg1;
- (void)renewMescalSessionForRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)_renewMescalSessionForRequestLocked:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (void)exchangeData:(id)arg1 serverVersion:(int)arg2 qualityOfService:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_reallyExchangeData:(id)arg1 serverVersion:(int)arg2 qualityOfService:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_teardown;
- (void)_teardownLocked;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
