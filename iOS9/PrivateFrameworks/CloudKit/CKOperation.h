//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CKContainer, CKOperationInfo, CKOperationMetrics, CKPlaceholderOperation, CKTimeLogger, NSArray, NSDictionary, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface CKOperation : NSOperation
{
    NSObject<OS_os_transaction> *_isExecuting;
    unsigned long long _activityID;
    _Bool _allowsCellularAccess;
    _Bool _longLived;
    _Bool _isFinished;
    _Bool _isDiscretionary;
    _Bool _preferAnonymousRequests;
    _Bool _allowsBackgroundNetworking;
    _Bool _isOutstandingOperation;
    CKContainer *_container;
    NSString *_operationID;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKTimeLogger *_timeLogger;
    NSArray *_requestUUIDs;
    NSDictionary *_additionalRequestHTTPHeaders;
    CKOperationMetrics *_metrics;
    NSDictionary *_w3cNavigationTimingByRequestUUID;
    NSDictionary *_responseHTTPHeadersByRequestUUID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _usesBackgroundSessionOverride;
}

@property(nonatomic) _Bool isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property(nonatomic) long long usesBackgroundSessionOverride; // @synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) _Bool allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) _Bool preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(retain, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSDictionary *responseHTTPHeadersByRequestUUID; // @synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID;
@property(retain, nonatomic) NSDictionary *w3cNavigationTimingByRequestUUID; // @synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID;
@property(retain, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(retain, nonatomic) NSArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(nonatomic) _Bool isDiscretionary; // @synthesize isDiscretionary=_isDiscretionary;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) CKPlaceholderOperation *placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property(copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock; // @synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock;
@property(nonatomic, getter=isLongLived) _Bool longLived; // @synthesize longLived=_longLived;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
@property(nonatomic) _Bool usesBackgroundSession;
- (id)daemon;
- (id)description;
- (id)CKPropertiesDescription;
- (void)processOperationResult:(id)arg1;
@property(nonatomic) _Bool isExecuting;
- (void)_installTimeoutSource;
- (void)_uninstallTimeoutSource;
- (void)cancel;
@property(readonly, nonatomic) CKOperationInfo *operationInfo;
- (Class)operationClass;
- (Class)operationInfoClass;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (_Bool)isConcurrent;
- (void)main;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (void)start;
- (void)_start;
- (unsigned long long)activityStart;
- (void)dealloc;
- (id)init;

@end

