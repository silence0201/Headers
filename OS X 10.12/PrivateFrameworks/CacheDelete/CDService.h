//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CacheDelete/CDService-Protocol.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue;

@interface CDService : NSObject <CDService>
{
    BOOL _doesPeriodic;
    BOOL _doesPurge;
    BOOL _doNotQuery;
    BOOL _rootOnly;
    BOOL _userAgent;
    BOOL __inFlight;
    BOOL __dead;
    NSString *_ID;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSSet *_desiredNotifications;
    CDUnknownBlockType _serviceInvalidationHandler;
}

+ (id)serviceWithInfo:(id)arg1 extension:(id)arg2;
+ (id)serviceWithInfo:(id)arg1 endpoint:(id)arg2;
+ (id)serviceWithInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType serviceInvalidationHandler; // @synthesize serviceInvalidationHandler=_serviceInvalidationHandler;
@property(nonatomic) BOOL _dead; // @synthesize _dead=__dead;
@property(nonatomic) BOOL _inFlight; // @synthesize _inFlight=__inFlight;
@property(nonatomic) BOOL userAgent; // @synthesize userAgent=_userAgent;
@property(readonly) NSSet *desiredNotifications; // @synthesize desiredNotifications=_desiredNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(nonatomic) BOOL rootOnly; // @synthesize rootOnly=_rootOnly;
@property(nonatomic) BOOL doNotQuery; // @synthesize doNotQuery=_doNotQuery;
@property(nonatomic) BOOL doesPurge; // @synthesize doesPurge=_doesPurge;
@property(nonatomic) BOOL doesPeriodic; // @synthesize doesPeriodic=_doesPeriodic;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL inFlight;
- (void)_serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_servicePing:(CDUnknownBlockType)arg1;
- (void)_serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)servicePing:(CDUnknownBlockType)arg1;
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
