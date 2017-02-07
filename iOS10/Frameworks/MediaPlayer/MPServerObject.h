//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MPServerObject : NSObject
{
    int _clientPID;
    CDStruct_6ad76789 *_clientAuditToken;
    NSString *_clientBundleIdentifier;
    NSString *_clientBundleVersion;
    NSMutableArray *_deferredInvocations;
}

+ (id)_center;
@property(retain, nonatomic) NSMutableArray *deferredInvocations; // @synthesize deferredInvocations=_deferredInvocations;
@property(readonly, copy, nonatomic) NSString *clientBundleVersion; // @synthesize clientBundleVersion=_clientBundleVersion;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) CDStruct_6ad76789 *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, nonatomic) int clientPID; // @synthesize clientPID=_clientPID;
- (void)performDelayedInvocationsIfNeeded;
- (_Bool)shouldDelayInvocation:(id)arg1;
- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;
- (void)_registerNotificationsForSelectors;
- (id)init;

@end

