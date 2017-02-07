//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUI/NSObject-Protocol.h>

@class UIColor, UNNotification, UNNotificationResponse;

@protocol UNNotificationContentExtension <NSObject>
- (void)didReceiveNotification:(UNNotification *)arg1;

@optional
@property(readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property(readonly, nonatomic) struct CGRect mediaPlayPauseButtonFrame;
@property(readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
- (void)mediaPause;
- (void)mediaPlay;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end

