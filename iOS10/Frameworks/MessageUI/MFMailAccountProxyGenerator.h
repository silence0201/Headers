//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject
{
    _MFMailAccountProxySource *_proxySource;
    _Bool _allowsRestrictedAccounts;
}

- (id)allAccountProxies;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)dealloc;
- (id)initWithAllowsRestrictedAccounts:(_Bool)arg1;
- (id)init;

@end

