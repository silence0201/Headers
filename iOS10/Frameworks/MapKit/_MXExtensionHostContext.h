//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MXExtensionBaseContext.h>

#import <MapKit/_MXExtensionHostContextProtocol-Protocol.h>

@class NSString;
@protocol _MXExtensionVendorXPCProtocol;

@interface _MXExtensionHostContext : _MXExtensionBaseContext <_MXExtensionHostContextProtocol>
{
    id <_MXExtensionVendorXPCProtocol> _vendorProxy;
}

- (void).cxx_destruct;
- (void)connectVendorProxyWithProtocol:(id)arg1;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)vendorContext;

// Remaining properties
@property(nonatomic) __weak id connectionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

