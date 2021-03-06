//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSNetServiceDelegate-Protocol.h>

@class HMFNetAddress, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNetService, NSString;
@protocol HMFNetServiceDelegate, OS_dispatch_queue;

@interface HMFNetService : NSObject <NSNetServiceDelegate>
{
    NSString *_type;
    NSString *_name;
    NSString *_domain;
    unsigned long long _port;
    NSArray *_addresses;
    NSMutableDictionary *_TXTRecord;
    NSNetService *_internal;
    _Bool _resolving;
    HMFNetAddress *_hostName;
    id <HMFNetServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableArray *_resolveBlocks;
}

+ (id)shortDescription;
+ (id)errorFromNetServiceErrorDict:(id)arg1;
@property(nonatomic, getter=isResolving) _Bool resolving; // @synthesize resolving=_resolving;
@property(readonly, nonatomic) NSMutableArray *resolveBlocks; // @synthesize resolveBlocks=_resolveBlocks;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property __weak id <HMFNetServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSNetService *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)confirmWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bestAddress;
- (void)notifyUpdatedTXTRecord:(id)arg1;
- (void)updateTXTRecordWithData:(id)arg1;
- (void)removeAllTXTRecordObjects;
- (void)setTXTRecord:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)notifyUpdatedAddresses:(id)arg1;
- (void)setAddresses:(id)arg1;
@property(readonly, copy) NSArray *addresses;
- (void)setHostname:(id)arg1;
@property(readonly, copy) HMFNetAddress *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) unsigned long long port;
- (void)startMonitoring;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

