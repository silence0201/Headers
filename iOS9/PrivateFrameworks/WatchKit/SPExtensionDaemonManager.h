//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPExtensionDaemonManager : NSObject
{
    _Bool _active;
    long long _refCount;
    NSObject<OS_dispatch_source> *_transactionTimer;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableSet *_transactionObservers;
    NSMutableDictionary *_coreLocationAsserts;
    NSObject<OS_dispatch_queue> *_coreLocationAssertsQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coreLocationAssertsQueue; // @synthesize coreLocationAssertsQueue=_coreLocationAssertsQueue;
@property(retain, nonatomic) NSMutableDictionary *coreLocationAsserts; // @synthesize coreLocationAsserts=_coreLocationAsserts;
@property(retain, nonatomic) NSMutableSet *transactionObservers; // @synthesize transactionObservers=_transactionObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *transactionTimer; // @synthesize transactionTimer=_transactionTimer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long refCount; // @synthesize refCount=_refCount;
- (void).cxx_destruct;
- (void)startTransactionTimer;
- (void)keepAlive;
- (void)transactionTimeOut;
- (void)endTransaction;
- (void)beginTransaction;
- (void)removeTransactionObserver:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (id)init;

@end

