//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>

@class MMWebKitViewController, NSString, NSURLRequest;
@protocol MMTermsOfServiceControllerDelegate;

@interface MMTermsOfServiceController : NSObject <MMWebKitViewControllerDelegate>
{
    id <MMTermsOfServiceControllerDelegate> _delegate;
    MMWebKitViewController *_webKitViewController;
    NSURLRequest *_tosURLRequest;
    struct {
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int padding:6;
    } _flags;
}

@property(retain, nonatomic) NSURLRequest *tosURLRequest; // @synthesize tosURLRequest=_tosURLRequest;
@property(retain, nonatomic) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
@property(nonatomic) id <MMTermsOfServiceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
@property(readonly) NSString *accountID; // @dynamic accountID;
- (void)closeTermsOfServiceDialog;
- (void)showTermsOfServiceDialogForWindow:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequestInfo:(id)arg1 accountID:(id)arg2 password:(id)arg3 authenticationResults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
