//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class NSError, NSMutableURLRequest, NSString;

@protocol MBWebKitViewControllerDelegate <NSObject>

@optional
- (void)mbWebkitViewControllerModifyURLRequest:(NSMutableURLRequest *)arg1;
- (void)mbWebkitViewControllerSkipSignIn;
- (void)mbWebkitViewControllerDidFailWithError:(NSError *)arg1;
- (void)mbWebkitViewControllerDidFinishLoading;
- (void)mbWebkitViewControllerDidSucceed;
- (void)mbWebkitViewControllerDidDismissWithReason:(NSString *)arg1;
- (void)mbWebkitViewControllerDidCancel;
@end
