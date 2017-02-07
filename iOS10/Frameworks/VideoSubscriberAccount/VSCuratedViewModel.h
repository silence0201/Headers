//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSViewModel.h>

#import <VideoSubscriberAccount/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel>
{
    _Bool _beginValidationButtonEnabled;
    _Bool _showDeleteAccountButton;
    _Bool _showFooter;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    NSString *_beginValidationButtonTitle;
    NSString *_identityProviderDisplayName;
    NSString *_message;
    NSString *_notice;
    NSString *_footerText;
}

@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *identityProviderDisplayName; // @synthesize identityProviderDisplayName=_identityProviderDisplayName;
@property(nonatomic) _Bool showDeleteAccountButton; // @synthesize showDeleteAccountButton=_showDeleteAccountButton;
@property(copy, nonatomic) NSString *beginValidationButtonTitle; // @synthesize beginValidationButtonTitle=_beginValidationButtonTitle;
@property(nonatomic, getter=isBeginValidationButtonEnabled) _Bool beginValidationButtonEnabled; // @synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

