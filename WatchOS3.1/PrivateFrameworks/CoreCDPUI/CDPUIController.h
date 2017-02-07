//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPUI/CDPUIBaseController.h>

#import <CoreCDPUI/CDPDevicePickerDelegate-Protocol.h>
#import <CoreCDPUI/CDPRemoteSecretEntryDelegate-Protocol.h>

@class CDPDevicePickerViewController, CDPRemoteDeviceSecretValidator, NSArray, UINavigationController;
@protocol CDPUIDelegate;

@interface CDPUIController : CDPUIBaseController <CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate>
{
    NSArray *_devices;
    UINavigationController *_navController;
    CDPRemoteDeviceSecretValidator *_remoteSecretValidator;
    CDPDevicePickerViewController *_devicePicker;
    _Bool _forceInlinePresentation;
    id <CDPUIDelegate> _delegate;
}

@property(retain, nonatomic) CDPRemoteDeviceSecretValidator *remoteSecretValidator; // @synthesize remoteSecretValidator=_remoteSecretValidator;
@property(nonatomic) _Bool forceInlinePresentation; // @synthesize forceInlinePresentation=_forceInlinePresentation;
@property(nonatomic) __weak id <CDPUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (void)finishValidation:(id)arg1 withError:(id)arg2;
- (void)performAccountReset:(id)arg1;
- (_Bool)performingAccountRecovery;
- (void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
- (void)cancelledRemoteSecretEntry:(id)arg1;
- (void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
- (void)cancelSignInFromDevicePicker;
- (void)_setupDevicePickerController:(CDUnknownBlockType)arg1;
- (void)_presentRootController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (id)_remoteSecretControllerForDevice:(id)arg1;
- (id)_remoteSecretControllerForNewestDevice:(id)arg1;
- (void)_dismissPresentedViewControllerCompletion:(CDUnknownBlockType)arg1;
- (void)_promptForRemoteApproval;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;

@end
