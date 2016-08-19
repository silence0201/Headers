//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKNavigationController.h>

#import <PassKit/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate>
{
    long long _context;
    _Bool _showsWelcomeViewController;
    _Bool _allowsManualEntry;
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupDelegate> _setupDelegate;
}

+ (id)viewControllerForPresentingPaymentError:(id)arg1;
@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property(nonatomic) _Bool showsWelcomeViewController; // @synthesize showsWelcomeViewController=_showsWelcomeViewController;
@property(nonatomic) id <PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_reconfigureRootViewController;
- (void)_handleAssociatedCredentialsDidChangeNotification:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

