//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSURL, _SFSafeBrowsingController;

@protocol _SFSafeBrowsingControllerDelegate <NSObject>
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerClosePage:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerGoBack:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingController:(_SFSafeBrowsingController *)arg1 didIgnoreWarningWithURL:(NSURL *)arg2;
@end

