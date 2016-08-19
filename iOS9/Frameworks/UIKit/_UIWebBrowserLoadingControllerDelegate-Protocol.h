//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSURLRequest, WebDataSource, _UIWebBrowserLoadingController;

@protocol _UIWebBrowserLoadingControllerDelegate <NSObject>

@optional
- (NSString *)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 userVisibleStringForURL:(NSURL *)arg2;
- (void)browserLoadingControllerDidUpdateLoadingState:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 didFinishLoadingWithError:(NSError *)arg2 dataSource:(WebDataSource *)arg3;
- (void)browserLoadingControllerDidStartLoading:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(_UIWebBrowserLoadingController *)arg1;
- (_Bool)browserLoadingControllerShouldShowProvisionalURLs:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 failedToStartLoadingRequest:(NSURLRequest *)arg2 error:(NSError *)arg3;
- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 willLoadRequest:(NSURLRequest *)arg2 userDriven:(_Bool)arg3;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateSecurity:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURL:(_UIWebBrowserLoadingController *)arg1;
@end

