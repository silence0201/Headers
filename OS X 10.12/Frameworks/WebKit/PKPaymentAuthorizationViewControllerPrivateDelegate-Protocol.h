//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, PKPaymentAuthorizationViewController;

@protocol PKPaymentAuthorizationViewControllerPrivateDelegate <NSObject>
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 willFinishWithError:(NSError *)arg2;

@optional
- (void)paymentAuthorizationViewController:(PKPaymentAuthorizationViewController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
@end
