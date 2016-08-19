//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKit/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKit/PKPaymentVerificationPresentationDelegate-Protocol.h>
#import <PassKit/PSStateRestoration-Protocol.h>
#import <PassKit/UITableViewDataSource-Protocol.h>
#import <PassKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSNumberFormatter, NSObject, NSString, PKPaymentApplication, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentVerificationPresentationController, PKPaymentWebService, PKSettingTableCell, PKVerificationRequestRecord, UIColor;
@protocol OS_dispatch_source, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKPaymentPassDetailViewController : UITableViewController <PKPaymentDataProviderDelegate, PKPaymentVerificationPresentationDelegate, UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, PSStateRestoration>
{
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    _Bool _deepLinkingEnabled;
    _Bool _passDeletionInProgress;
    PKPaymentPass *_pass;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationPresentationController *_verificationPresenter;
    PKVerificationRequestRecord *_verificationRecord;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    NSNumberFormatter *_numberFormatter;
    PKSettingTableCell *_notificationSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    NSArray *_sections;
    id <PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
    NSArray *_transactions;
    NSArray *_paymentApplications;
}

@property(retain, nonatomic) NSArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(copy, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
- (_Bool)canBeShownFromSuspendedState;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didChangeVerificationPresentation;
- (void)_activationFooterPressed:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (void)_notificationSwitchChanged:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (long long)_numberOfRowsForPassStateSection;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_didSelectPassStateSection;
- (id)_headerTitleForPassStateSection;
- (id)_cellForPassStateSection;
- (void)_done:(id)arg1;
- (void)_didSelectDeleteCard;
- (void)_openIssuerWebsite;
- (void)_callIssuer;
- (void)_emailIssuer;
- (void)_didSelectContactBankSection;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (id)_activationFooterView;
- (_Bool)_shouldShowContactCell;
- (_Bool)_shouldShowPrivacyPolicyCell;
- (_Bool)_shouldShowTermsCell;
- (unsigned long long)_indexOfSection:(long long)arg1;
- (_Bool)_doesTableContainSection:(long long)arg1;
- (id)_deleteCardCell;
- (id)_deviceAccountNumberCell;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1;
- (id)_transactionCellForIndexPath:(id)arg1;
- (id)_notificationServicesCell;
- (id)_automaticPresentationCell;
- (id)_cardInfoCells;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (id)_privacyTermsCells;
- (void)_didSelectBillingAddress;
- (id)_billingAddressCell;
- (id)_moreTransactionsCell;
- (void)_setPlaceholderColorForCell:(id)arg1;
- (id)_linkedAppCell;
- (id)_infoCell:(id)arg1 withDetailText:(id)arg2;
- (id)_infoCell:(id)arg1;
- (id)_linkCellWithText:(id)arg1;
- (id)_subtitleCell;
- (id)_defaultCell;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)_updateTransactionsArrayWithTransaction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setupSections;
- (_Bool)_shouldShowAutomaticPresentation;
- (void)dealloc;
- (void)_reloadTransactionSection;
- (void)_reloadView;
- (void)_reloadPassAndView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

