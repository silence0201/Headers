//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BridgePreferences/NSObject-Protocol.h>

@class UIViewController;
@protocol BPSBuddyControllerDelegate;

@protocol BPSBuddyController <NSObject>
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;
- (id <BPSBuddyControllerDelegate>)delegate;

@optional
+ (_Bool)controllerNeedsToRun;
- (_Bool)holdBeforeDisplaying;
- (_Bool)controllerAllowsNavigatingBackFrom;
- (_Bool)controllerAllowsNavigatingBackTo;
- (UIViewController *)viewController;
@end
