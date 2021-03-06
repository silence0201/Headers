//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVSettingKit/TSKSettingItemEditingController-Protocol.h>
#import <TVSettingKit/TVTextEntryControllerDelegate-Protocol.h>

@class NSString, TSKSettingItem, TVTextEntryController, TVTextEntryHeaderView;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TSKTextInputViewController : UIViewController <TVTextEntryControllerDelegate, TSKSettingItemEditingController>
{
    TVTextEntryHeaderView *_headerView;
    TVTextEntryController *_textEntryController;
    _Bool _secureTextEntry;
    _Bool _allowsEmptyInput;
    TSKSettingItem *_editingItem;
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;
    NSString *_headerText;
    NSString *_messageText;
    NSString *_initialText;
    NSString *_recentsCategory;
    long long _capitalizationType;
    long long _keyboardType;
}

@property(nonatomic) _Bool allowsEmptyInput; // @synthesize allowsEmptyInput=_allowsEmptyInput;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long capitalizationType; // @synthesize capitalizationType=_capitalizationType;
@property(copy, nonatomic) NSString *recentsCategory; // @synthesize recentsCategory=_recentsCategory;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void).cxx_destruct;
- (id)_messageStringAttributes;
- (id)_titleStringAttributes;
- (void)textEntryControllerDidFinish:(id)arg1;
- (void)_configureTextField;
- (void)_configureTitleView;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_menuPressed;
- (void)_donePressed:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)_configureSubmitButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

