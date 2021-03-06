//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupFieldsViewController.h>

@class PKPaymentCredential;

@interface PKPaymentCardOnFileDetailsViewController : PKPaymentSetupFieldsViewController
{
    PKPaymentCredential *_paymentCredential;
}

@property(retain, nonatomic) PKPaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
- (id)_localPassCredentialDefaultHeaderViewSubTitle;
- (id)_remoteCredentialDefaultHeaderViewSubTitle;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)preflightRequiredFieldsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool needsRequiredFieldsPreflight;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

