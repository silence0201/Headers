//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;
@protocol LAContextCallbackXPC;

@protocol LADaemonXPC
- (void)prearmTouchIdWithReply:(void (^)(id <LAPrearmContextXPC>, NSError *))arg1;
- (void)connectToExistingContext:(NSData *)arg1 callback:(id <LAContextCallbackXPC>)arg2 reply:(void (^)(id <LAContextXPC>, NSError *))arg3;
@end

