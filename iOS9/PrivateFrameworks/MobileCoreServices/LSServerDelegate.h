//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSDXPCServer, LSDatabaseBuilder, LSInstallProgressDelegate, _LSInstallationService;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface LSServerDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcListenerQueue;
    NSObject<OS_dispatch_queue> *_databaseAccessQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_xpc_object> *_listenerArray;
    unsigned char _runAsRoot;
    int _msgsReceived;
    LSDXPCServer *_server;
    LSDatabaseBuilder *_dbBuilder;
    LSInstallProgressDelegate *_progressDelegate;
    _LSInstallationService *_instalationService;
}

- (void)dispatchMessage:(id)arg1 withConnection:(id)arg2;
- (void)handleAdvertisingEvent:(id)arg1;
- (void)handleOpenURLEvent:(id)arg1;
- (void)handleOpenEvent:(id)arg1;
- (void)handleModifyDBEvent:(id)arg1;
- (void)handleMapDBEvent:(id)arg1;
- (void)beginListeningOnInterface:(unsigned short)arg1 eventHandler:(SEL)arg2;
- (void)beginListening;
- (void)languagePrefChanged;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 asRoot:(unsigned char)arg2;

@end

