//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject
{
    int _pid;
    int _recordingPath;
    NSXPCConnection *connection;
    id _delegate;
}

+ (id)resumableActivitiesControlManager;
@property int recordingPath; // @synthesize recordingPath=_recordingPath;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) NSXPCConnection *connection; // @synthesize connection;
- (void).cxx_destruct;
- (void)setLocalReflect:(_Bool)arg1;
- (void)synchronize;
- (void)replayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1;
- (void)getCurrentPeersAndClear:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopAdvertisingPing;
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;
- (void)rendevous:(id)arg1 domain:(id)arg2 active:(_Bool)arg3;
- (void)connectToRemote:(id)arg1 port:(long long)arg2;
- (void)broadcastPing:(CDUnknownBlockType)arg1;
- (void)callDidSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callWillSaveDelegate:(id)arg1;
- (void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (void)setDebugOption:(id)arg1 value:(id)arg2;
- (void)terminateServer;
- (void)restartServer;
- (void)setDefault:(id)arg1 value:(id)arg2;
- (id)defaults:(_Bool)arg1;
- (id)simulatorStatus;
- (id)status;
- (id)dynamicUserActivities;
- (id)debuggingInfo;
- (id)currentAdvertisedItemUUID;
- (id)enabledUUIDs;
- (id)allUUIDsOfType:(unsigned long long)arg1;
- (id)advertisedItemUUID;
- (id)matchingUUIDForString:(id)arg1;
@property(readonly) int serverPID;
- (id)init;

@end
