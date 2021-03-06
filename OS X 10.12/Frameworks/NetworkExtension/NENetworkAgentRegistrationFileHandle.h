//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSUUID;

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle
{
    NSNumber *_sessionType;
    NSUUID *_configurationIdentifier;
    NSUUID *_agentUUID;
}

@property(readonly) NSUUID *agentUUID; // @synthesize agentUUID=_agentUUID;
@property(readonly) NSUUID *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property(readonly) NSNumber *sessionType; // @synthesize sessionType=_sessionType;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4;

@end

