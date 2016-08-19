//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class GCController, NSDictionary, NSNumber, NSString;

@protocol GameControllerDaemon <NSObject>
- (void)requestConnectedHosts;
- (void)appDidEnterBackgroundWithPID:(int)arg1;
- (void)appWillEnterForegroundWithPID:(int)arg1;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(_Bool)arg4;
- (void)removeController:(GCController *)arg1 forward:(_Bool)arg2;
- (void)addController:(GCController *)arg1 forward:(_Bool)arg2;
- (void)setUserActivityUserInfo:(NSDictionary *)arg1;
- (void)startBonjourService;
- (void)startForwardingToApplicationNamed:(NSString *)arg1 pid:(NSNumber *)arg2 bundlePath:(NSString *)arg3;
- (void)ping;
@end

