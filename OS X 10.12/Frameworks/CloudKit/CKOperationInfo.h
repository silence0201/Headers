//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerSetupInfo, NSDictionary, NSString;

@interface CKOperationInfo : NSObject <NSSecureCoding>
{
    BOOL _allowsCellularAccess;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    BOOL _isLongLived;
    BOOL _isOutstandingOperation;
    NSString *_operationID;
    NSString *_name;
    NSString *_parentSectionID;
    long long _qualityOfService;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    CKContainerSetupInfo *_setupInfo;
    NSDictionary *_additionalRequestHTTPHeaders;
    NSString *_operationClass;
    NSString *_deviceIdentifier;
    NSDictionary *_MMCSRequestOptions;
    id _parentOperation;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain, nonatomic) NSDictionary *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *operationClass; // @synthesize operationClass=_operationClass;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(retain, nonatomic) CKContainerSetupInfo *setupInfo; // @synthesize setupInfo=_setupInfo;
@property(nonatomic) BOOL isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property(nonatomic) BOOL isLongLived; // @synthesize isLongLived=_isLongLived;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(retain, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
