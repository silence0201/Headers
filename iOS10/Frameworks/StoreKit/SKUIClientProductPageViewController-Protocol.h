//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSString;

@protocol SKUIClientProductPageViewController <NSObject>
- (void)setStatusBarStyle:(NSNumber *)arg1 animated:(NSNumber *)arg2;
- (void)setStatusBarHidden:(NSNumber *)arg1 withAnimation:(NSNumber *)arg2;
- (void)promptForStarRating;
- (void)presentPageWithRequest:(NSDictionary *)arg1 animated:(NSNumber *)arg2;
- (void)loadDidFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)didReceiveTitle:(NSString *)arg1;
- (void)didFinishWithResult:(NSNumber *)arg1;
- (void)didFinish;
@end

