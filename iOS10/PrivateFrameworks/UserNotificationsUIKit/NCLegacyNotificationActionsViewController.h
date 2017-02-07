//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCLegacyNotificationActionsViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSString;
@protocol NCNotificationCustomContentDelegate;

@interface NCLegacyNotificationActionsViewController : UIViewController <NCLegacyNotificationActionsViewDelegate, NCNotificationCustomContent>
{
    id <NCNotificationCustomContentDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
}

@property(readonly, nonatomic) __weak NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notificationActionsView:(id)arg1 performAction:(id)arg2;
- (void)loadView;
- (unsigned long long)customContentLocation;
- (_Bool)allowManualDismiss;
- (_Bool)defaultContentHidden;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *contentExtensionIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak NCNotificationAction *presentationSourceAction;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
