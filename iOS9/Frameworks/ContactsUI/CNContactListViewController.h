//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNAvatarCardControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactDataSourceDelegate-Protocol.h>
#import <ContactsUI/CNContactListBannerViewDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ContactsUI/UISearchBarDelegate-Protocol.h>
#import <ContactsUI/UISearchControllerDelegate-Protocol.h>
#import <ContactsUI/UISearchResultsUpdating-Protocol.h>

@class CNAvatarCardController, CNContact, CNContactFormatter, CNContactListBannerView, NSArray, NSObject, NSString, UISearchBar, UISearchController, _UIContentUnavailableView;
@protocol CNContactDataSource, CNContactListViewControllerDelegate;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactPickerDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shouldRefreshMeContact;
    _Bool _shouldDisplayMeContactBanner;
    _Bool _shouldAutoHideMeContactBanner;
    _Bool _allowsSearching;
    _Bool _presentsSearchUI;
    NSObject<CNContactDataSource> *_dataSource;
    _UIContentUnavailableView *_noContactsView;
    CNContact *_meContact;
    id <CNContactListViewControllerDelegate> _delegate;
    NSString *_meContactBannerFootnoteLabel;
    NSString *_meContactBannerFootnoteValue;
    CNContactFormatter *_contactFormatter;
    CNContactListViewController *_searchResultsController;
    UISearchController *_searchController;
    UISearchBar *_searchBar;
    CDUnknownBlockType _searchCompletionBlock;
    CNContactListBannerView *_meContactBanner;
    double _contentOffsetDueToMeContactBanner;
    CNAvatarCardController *_cardController;
}

@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(readonly, nonatomic) _Bool presentsSearchUI; // @synthesize presentsSearchUI=_presentsSearchUI;
@property(readonly, nonatomic) double contentOffsetDueToMeContactBanner; // @synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner;
@property(retain, nonatomic) CNContactListBannerView *meContactBanner; // @synthesize meContactBanner=_meContactBanner;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) CNContactListViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(nonatomic) _Bool allowsSearching; // @synthesize allowsSearching=_allowsSearching;
@property(copy, nonatomic) NSString *meContactBannerFootnoteValue; // @synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue;
@property(copy, nonatomic) NSString *meContactBannerFootnoteLabel; // @synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel;
@property(nonatomic) _Bool shouldAutoHideMeContactBanner; // @synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner;
@property(nonatomic) __weak id <CNContactListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldRefreshMeContact; // @synthesize shouldRefreshMeContact=_shouldRefreshMeContact;
- (void).cxx_destruct;
- (void)cancelSearch:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)bannerViewWasSelectedToPresentPeoplePicker:(id)arg1;
- (void)userHasSelectedToSetupMeContact;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
@property(nonatomic) _Bool shouldDisplayMeContactBanner; // @synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner;
- (void)refreshMeContactBanner;
- (void)refreshMeContactAndMeContactBanner;
- (void)refreshMeContactAndMeContactBannerIfVisible;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (id)_sections;
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;
- (void)contactDataSourceDidChange:(id)arg1;
- (_Bool)updateFrameAndDisplayNoContactsViewIfNeeded;
@property(readonly, nonatomic) _UIContentUnavailableView *noContactsView; // @synthesize noContactsView=_noContactsView;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)searchForString:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)_applicationEnteringForeground:(id)arg1;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)_updateCountString;
- (void)reloadContacts;
- (_Bool)selectContact:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
@property(readonly, nonatomic) NSArray *selectedContacts;
- (void)setupForMultiSelection;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)isHandlingSearch;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 searchable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

