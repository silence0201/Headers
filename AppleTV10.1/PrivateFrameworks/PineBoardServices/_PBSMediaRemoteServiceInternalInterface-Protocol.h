//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary, PBSMediaRemoteSiriContext;

@protocol _PBSMediaRemoteServiceInternalInterface <NSObject>
- (void)__noteUserPresenceDetected;
- (void)__dismissPinDialogWithToken:(id)arg1;
- (void)__showPinDialogWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)__stopSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__startSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__activateSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
@end

