//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ShareKit/NSSharingPlugInViewControllerPrivateProtocol-Protocol.h>
#import <ShareKit/NSTextViewDelegate-Protocol.h>
#import <ShareKit/SHKCompletionPopUpControllerDelegate-Protocol.h>

@class NSButton, NSImage, NSImageView, NSLayoutConstraint, NSPopUpButton, NSProgressIndicator, NSSharingPlugInComposeViewService, NSString, NSTextField, NSTextView, NSTouchBar, NSView, SHKCompletionPopUpController, SHKShareImageView, SHKShareLocationController, SHKShareWindowBackgroundView;

@interface NSSharingComposeViewController : NSViewController <NSTextViewDelegate, SHKCompletionPopUpControllerDelegate, NSSharingPlugInViewControllerPrivateProtocol>
{
    NSLayoutConstraint *_constraintForAccountsPopUpWidth;
    NSLayoutConstraint *_constraintForAudiencePopUpWidth;
    NSLayoutConstraint *_constraintForImagePreviewWidth;
    NSLayoutConstraint *_NCconstraintForAccountsPopUpWidth;
    NSLayoutConstraint *_NCconstraintForAudiencePopUpWidth;
    NSLayoutConstraint *_NCconstraintForTextViewLeadingSpace;
    NSLayoutConstraint *_NCconstraintForLocationContainer;
    NSLayoutConstraint *_NCconstraintForProgressIndicatorToLocationContainerView;
    NSLayoutConstraint *_NCconstraintForProgressIndicatorToSuperView;
    SHKShareWindowBackgroundView *_backgroundView;
    NSTextView *_messageTextView;
    NSTextField *_characterCountTextField;
    NSView *_locationContainerView;
    NSButton *_cancelButton;
    NSButton *_sendButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_titleTextField;
    NSTextField *_errorTextField;
    NSTextField *_accountsFromTextField;
    NSPopUpButton *_accountsPopUpButton;
    NSTextField *_audienceTextField;
    NSPopUpButton *_audiencePopUpButton;
    NSImageView *_titleImageView;
    SHKShareImageView *_imageView;
    NSSharingPlugInComposeViewService *_service;
    double _minWindowHeight;
    double _baseWindowHeight;
    unsigned long long _mainItemIndex;
    BOOL _showsCompletionPopUpInMessage;
    SHKCompletionPopUpController *_completionPopUpController;
    SHKShareLocationController *_locationController;
    NSTouchBar *_composeTouchBar;
    NSButton *_touchBarCancelButton;
    NSButton *_touchBarSendButton;
}

+ (id)keyPathsForValuesAffectingImage;
@property(readonly) NSButton *touchBarSendButton; // @synthesize touchBarSendButton=_touchBarSendButton;
@property(readonly) NSButton *touchBarCancelButton; // @synthesize touchBarCancelButton=_touchBarCancelButton;
@property(readonly) NSTouchBar *composeTouchBar; // @synthesize composeTouchBar=_composeTouchBar;
@property unsigned long long mainItemIndex; // @synthesize mainItemIndex=_mainItemIndex;
@property(readonly) SHKShareLocationController *locationController; // @synthesize locationController=_locationController;
@property(readonly) NSTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(readonly) NSPopUpButton *audiencePopUpButton; // @synthesize audiencePopUpButton=_audiencePopUpButton;
@property(readonly) NSPopUpButton *accountsPopUpButton; // @synthesize accountsPopUpButton=_accountsPopUpButton;
@property(readonly) NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property BOOL showsCompletionPopUpInMessage; // @synthesize showsCompletionPopUpInMessage=_showsCompletionPopUpInMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)makeTouchBar;
- (void)setCompletions:(id)arg1 forText:(id)arg2;
- (void)completionPopUpController:(id)arg1 didSelectCompletionItem:(id)arg2;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_insertCompletion:(id)arg1;
- (void)_validateCompletionPopUpInMessage;
- (id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)contentDidChange;
- (void)viewDidDisappear;
- (void)startAccountSetupAndClose:(id)arg1;
- (void)send:(id)arg1;
- (void)cancel:(id)arg1;
- (id)previewImageLayer;
@property(getter=isPreviewImageVisible) BOOL previewImageVisible;
- (struct CGRect)imageContentFrameForItemProvider:(id)arg1;
- (struct CGRect)imageFrameForItemProvider:(id)arg1;
- (id)imageForItemProvider:(id)arg1;
@property(readonly) struct CGRect imageContentFrame;
@property(readonly) struct CGRect imageFrame;
@property(readonly) NSImage *decoratedImage;
@property(readonly) NSImage *image;
- (id)mainItemProvider;
@property(readonly) SHKShareImageView *imageView;
@property(retain) NSImage *previewImage;
- (void)adjustAudiencePopUpFrame;
- (void)adjustAccountsPopUpFrame;
- (void)adjustTextFrame;
- (double)getLeadingSpaceFromSuperviewForView:(id)arg1 constraints:(id)arg2 markedConstraints:(id)arg3;
- (id)_visibleView;
- (struct CGRect)_imageFrame;
@property BOOL showsAudiencePopUp;
@property BOOL showsAccountsPopUp;
@property BOOL showsProgressIndicator;
- (void)_updateSpaceBetweenImageAndPopUp;
- (void)displayErrorString:(id)arg1;
- (void)makeUIBusy:(BOOL)arg1;
@property BOOL showsLocationPin;
- (void)audiencePopUpChanged:(id)arg1;
- (void)accountsPopUpChanged:(id)arg1;
- (void)_setupUI;
- (id)title;
- (void)_validateUI;
- (void)_updateCharactersCountField;
- (void)_validateSendButton;
@property BOOL showsRemainingCharactersCounter;
- (void)setDisplayState:(id)arg1;
- (id)displayState;
@property(retain) NSString *placeholderString;
@property(retain) NSString *message;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)messageTextViewDidScroll:(id)arg1;
- (void)loadView;
- (void)activateFirstResponder;
@property int textureStyle; // @dynamic textureStyle;
- (id)composeService;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
