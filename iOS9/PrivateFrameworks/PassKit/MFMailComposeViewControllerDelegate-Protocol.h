//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class MFMailComposeViewController, NSError;

@protocol MFMailComposeViewControllerDelegate <NSObject>

@optional
- (void)mailComposeController:(MFMailComposeViewController *)arg1 didFinishWithResult:(int)arg2 error:(NSError *)arg3;
@end

