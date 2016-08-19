//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupTableViewController.h>

@class NSArray, PKPaymentPass, PKPaymentWebService, PKTableHeaderView, PKWeakReference, UIActivityIndicatorView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController
{
    PKPaymentPass *_pass;
    PKPaymentWebService *_paymentWebService;
    PKWeakReference *_setupDelegate;
    PKTableHeaderView *_tableHeader;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_verificationChannels;
    unsigned long long _selectedIndex;
    _Bool _existingVerificationMethod;
    _Bool _loadingChannels;
    UIImage *_passSnapshot;
    CDUnknownBlockType _verificationRequestHandler;
}

@property(copy, nonatomic) CDUnknownBlockType verificationRequestHandler; // @synthesize verificationRequestHandler=_verificationRequestHandler;
@property(retain, nonatomic) UIImage *passSnapshot; // @synthesize passSnapshot=_passSnapshot;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate;
- (void)_showSendCodeError:(id)arg1;
- (void)_showRequestError:(id)arg1;
- (void)_enableCells;
- (void)_disableCells;
- (void)_terminateFlow;
- (void)send:(id)arg1;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3;

@end

