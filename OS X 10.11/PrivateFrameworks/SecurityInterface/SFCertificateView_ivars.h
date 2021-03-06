//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSButton, NSImage, NSImageCell, NSMutableArray, NSPopUpButton, NSTextFieldCell, NSView, SFCertificateData;

__attribute__((visibility("hidden")))
@interface SFCertificateView_ivars : NSObject
{
    SFCertificateData *_certData;
    NSImageCell *_certImage;
    struct CGRect _certImageRect;
    NSTextFieldCell *_titleText;
    struct CGRect _titleTextRect;
    NSTextFieldCell *_issuerText;
    struct CGRect _issuerTextRect;
    NSTextFieldCell *_dateText;
    struct CGRect _dateTextRect;
    NSTextFieldCell *_statusText;
    struct CGRect _statusTextRect;
    NSButton *_detailsButton;
    struct CGRect _detailsButtonRect;
    NSTextFieldCell *_detailsLabel;
    struct CGRect _detailsLabelRect;
    NSView *_detailsContainer;
    struct CGRect _detailsContainerRect;
    NSTextFieldCell *_popupLabel;
    struct CGRect _popupLabelRect;
    NSTextFieldCell *_popupText;
    struct CGRect _popupTextRect;
    NSPopUpButton *_popupButton;
    struct CGRect _popupButtonRect;
    NSButton *_helpButton;
    struct CGRect _helpButtonRect;
    NSButton *_disclosureButton;
    struct CGRect _disclosureButtonRect;
    NSTextFieldCell *_disclosureLabel;
    struct CGRect _disclosureLabelRect;
    NSView *_policyContainer;
    struct CGRect _policyContainerRect;
    NSMutableArray *_policyLabels;
    NSMutableArray *_policyValues;
    NSMutableArray *_policyPopUps;
    struct CGRect *_plrects;
    struct CGRect *_pvrects;
    struct CGRect *_pprects;
    struct CGRect _dividerRect;
    int _extDividerIndex;
    int _minBoundsHeight;
    int _minVisibleHeight;
    BOOL _trustNotSet;
    BOOL _uniformTrust;
    BOOL _editableTrust;
    BOOL _policiesDisplayed;
    BOOL _policiesDisclosed;
    BOOL _detailsDisplayed;
    BOOL _detailsDisclosed;
    BOOL _certPathDisplayed;
    BOOL _certPathDisclosed;
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    struct CGRect *_lrects;
    struct CGRect *_frects;
    NSImage *_dragImage;
    NSArray *_policies;
    struct __SecTrust *_trust;
    BOOL _rebuildTrust;
    unsigned int _domain;
}

- (void)dealloc;

@end

