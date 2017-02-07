//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUCallCapabilitiesXPCServerActions <NSObject>
- (void)endEmergencyCallbackMode;
- (void)cancelPinRequestFromPrimaryDevice;
- (void)requestPinFromPrimaryDevice;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(NSString *)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1;
- (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(NSString *)arg2;
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)setThumperCallingEnabled:(BOOL)arg1;
- (void)setVoLTECallingEnabled:(BOOL)arg1;
- (void)setWiFiCallingRoamingEnabled:(BOOL)arg1;
- (void)setWiFiCallingEnabled:(BOOL)arg1;
@end
