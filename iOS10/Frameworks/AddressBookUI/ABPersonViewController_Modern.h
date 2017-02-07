//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AddressBookUI/ABContactViewControllerDelegate-Protocol.h>
#import <AddressBookUI/CNContactViewControllerPrivateDelegate-Protocol.h>
#import <AddressBookUI/UIViewControllerRestoration-Protocol.h>

@class ABContactViewController, CNContactViewController, NSArray, NSString, UIFont, UIImage, UIView;
@protocol ABPersonViewControllerDelegate;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, UIViewControllerRestoration>
{
    _Bool _badgeEmailPropertiesForMailVIP;
    _Bool _allowsEditing;
    _Bool _allowsActions;
    _Bool _shouldShowLinkedPeople;
    _Bool _highlightedImportant;
    _Bool _allowsSharing;
    _Bool _allowsAddToFavorites;
    _Bool _allowsDeletion;
    _Bool _allowsConferencing;
    _Bool _allowsContactBlocking;
    int _style;
    int _highlightedProperty;
    int _highlightedMultiValueIdentifier;
    const void *_addressBook;
    const void *_displayedPerson;
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    NSArray *_displayedProperties;
    CNContactViewController *_cnContactViewController;
    ABContactViewController *_contactViewController;
    UIView *_personHeaderView;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property(retain, nonatomic) ABContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(nonatomic) _Bool allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) _Bool allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(nonatomic) _Bool allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(nonatomic) _Bool allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
@property(nonatomic) _Bool allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(retain, nonatomic) CNContactViewController *cnContactViewController; // @synthesize cnContactViewController=_cnContactViewController;
@property(nonatomic) _Bool highlightedImportant; // @synthesize highlightedImportant=_highlightedImportant;
@property(nonatomic) int highlightedMultiValueIdentifier; // @synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier;
@property(nonatomic) int highlightedProperty; // @synthesize highlightedProperty=_highlightedProperty;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate; // @synthesize personViewDelegate=_personViewDelegate;
- (void)cancelEditing:(_Bool)arg1;
- (void)personViewController:(id)arg1 willSetEditing:(_Bool)arg2 animated:(_Bool)arg3;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)shareContactByEmail:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willWeiboLocationCallback;
@property(copy, nonatomic) CDUnknownBlockType willTweetLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody;
@property(nonatomic) _Bool shareMessageBodyIsHTML;
- (_Bool)makeFirstFieldBecomeFirstResponder;
- (_Bool)handleExternalChange;
- (_Bool)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (_Bool)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(copy, nonatomic) NSString *attribution;
@property(retain, nonatomic) UIView *customFooterView;
@property(retain, nonatomic) UIView *customHeaderView;
@property(nonatomic) _Bool shouldAlignPersonHeaderViewToImage;
@property(readonly, nonatomic) UIView *tableHeaderView;
- (void)setCardContentProvider:(id)arg1;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(copy, nonatomic) NSString *messageDetail;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *message;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (_Bool)allowsSettingAsPreferredCardForName;
- (void)setAllowsSettingAsPreferredCardForName:(_Bool)arg1;
@property(nonatomic) _Bool allowsVibrations;
@property(nonatomic) _Bool allowsSounds;
@property(nonatomic) _Bool allowsCancel;
- (id)editDelegate;
- (void)setEditDelegate:(id)arg1;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2;
- (_Bool)manuallyLinkPerson:(id)arg1;
- (void)setShouldShowLinkingUIOnCard:(_Bool)arg1;
- (_Bool)shouldShowLinkingUIOnCard;
- (void)setAppearsInLinkingPeoplePicker:(_Bool)arg1;
- (_Bool)appearsInLinkingPeoplePicker;
- (void)reloadContactViewController;
@property(nonatomic) _Bool badgeEmailPropertiesForMailVIP; // @synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(_Bool)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(_Bool)arg3;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)loadView;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
@property(nonatomic) const void *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property(nonatomic) const void *addressBook; // @synthesize addressBook=_addressBook;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
- (id)init;
- (id)newActionButton;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(_Bool)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

