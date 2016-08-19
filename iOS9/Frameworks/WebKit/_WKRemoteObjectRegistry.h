//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _WKRemoteObjectRegistry : NSObject
{
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry>> _remoteObjectRegistry;
    struct RetainPtr<NSMapTable> _remoteObjectProxies;
    struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>> _exportedObjects;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_invokeMessageWithInterfaceIdentifier:(const struct String *)arg1 encodedInvocation:(const struct Dictionary *)arg2;
- (_Bool)_invokeMethod:(const struct UserData *)arg1;
@property(readonly, nonatomic) struct RemoteObjectRegistry *remoteObjectRegistry;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)_invalidate;
- (id)_initWithMessageSender:(struct MessageSender *)arg1;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;

@end

