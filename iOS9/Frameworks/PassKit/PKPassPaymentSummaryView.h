//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PKPassPaymentSummaryCellDelegate-Protocol.h>
#import <PassKit/UITableViewDataSource-Protocol.h>
#import <PassKit/UITableViewDelegate-Protocol.h>

@class NSNumberFormatter, NSString, PKPaymentMessage, PKPaymentPass, PKPaymentTransaction, UITableView;
@protocol PKPassPaymentSummaryViewDelegate;

@interface PKPassPaymentSummaryView : UIView <UITableViewDataSource, UITableViewDelegate, PKPassPaymentSummaryCellDelegate>
{
    NSNumberFormatter *_numberFormatter;
    UITableView *_tableView;
    _Bool _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    PKPaymentMessage *_message;
    NSString *_transactionAppLaunchToken;
    NSString *_messageAppLaunchToken;
    id <PKPassPaymentSummaryViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPaymentSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *messageAppLaunchToken; // @synthesize messageAppLaunchToken=_messageAppLaunchToken;
@property(readonly, nonatomic) NSString *transactionAppLaunchToken; // @synthesize transactionAppLaunchToken=_transactionAppLaunchToken;
@property(readonly, nonatomic) PKPaymentMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)_isSectionIndexOfMessage:(long long)arg1;
- (_Bool)_isSectionIndexOfTransaction:(long long)arg1;
- (long long)_sectionIndexOfMessage;
- (long long)_sectionIndexOfTransaction;
- (id)_imageFromTransaction:(id)arg1;
- (id)_amountTextFromTransaction:(id)arg1;
- (id)_detailTextFromTransaction:(id)arg1;
- (id)_primaryTextFromTransaction:(id)arg1;
- (void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(_Bool)arg3;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (void)_configureCell:(id)arg1 forTransaction:(id)arg2;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(_Bool)arg3;
- (void)setTransaction:(id)arg1 appLaunchToken:(id)arg2 animated:(_Bool)arg3;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPaymentPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

