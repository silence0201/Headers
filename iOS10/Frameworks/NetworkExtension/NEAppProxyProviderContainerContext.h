//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>

@class NEAppProxyProvider, NEAppProxyProviderContainerHostContext;

@interface NEAppProxyProviderContainerContext : NEExtensionAppProxyProviderContext
{
    NEAppProxyProvider *_provider;
    NEAppProxyProviderContainerHostContext *_containerHostContext;
}

@property(readonly) __weak NEAppProxyProviderContainerHostContext *containerHostContext; // @synthesize containerHostContext=_containerHostContext;
@property(readonly) NEAppProxyProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)_principalObject;
- (id)hostContext;
- (id)initWithHostContext:(id)arg1 providerClass:(Class)arg2;

@end

