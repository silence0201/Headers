//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSWindowDelegate-Protocol.h>

@class NSDictionary, NSRemoteView, NSString, NSViewRemoteBridge;

@protocol NSRendezvousWindowDelegate <NSWindowDelegate>
@property(readonly) BOOL isSettingValue;
- (void)observeValueForKeyPath:(NSString *)arg1 ofObject:(NSViewRemoteBridge *)arg2 change:(NSDictionary *)arg3 context:(NSRemoteView *)arg4;
@end
