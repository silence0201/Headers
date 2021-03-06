//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class NSString;

@interface HMFMessage (IPCUtils)
@property(readonly, copy, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *teamIdentifier;
@property(readonly, copy, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) int sourcePid;
@property(readonly, nonatomic, getter=isEntitledForBridgeSPIAccess) _Bool entitledForBridgeSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
@property(readonly, nonatomic, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
- (id)proxyConnection;
@end

