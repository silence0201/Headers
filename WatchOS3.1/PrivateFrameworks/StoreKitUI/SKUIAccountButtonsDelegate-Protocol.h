//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIAccountButtonsViewController;

@protocol SKUIAccountButtonsDelegate <NSObject>

@optional
- (void)accountButtonsViewControllerDidTapECommerceLink:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidSignOut:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidSignIn:(SKUIAccountButtonsViewController *)arg1;
@end

