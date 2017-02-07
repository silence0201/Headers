//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVContentPartnerKitUI/TVAppTemplateController-Protocol.h>
#import <TVContentPartnerKitUI/TVCKStoreFavoritesViewDelegate-Protocol.h>
#import <TVContentPartnerKitUI/TVSStoreFavoritesControllerDelegate-Protocol.h>

@class NSArray, NSString, TVErrorViewController, TVSStateMachine, TVSStoreFavoritesController;
@protocol TVCKStoreFavoritesViewControllerDelegate;

@interface TVCKStoreFavoritesViewController : UIViewController <TVCKStoreFavoritesViewDelegate, TVSStoreFavoritesControllerDelegate, TVAppTemplateController>
{
    unsigned long long _category;
    id <TVCKStoreFavoritesViewControllerDelegate> _delegate;
    TVSStoreFavoritesController *_favoritesController;
    NSArray *_contentItems;
    UIViewController *_activityIndicatorViewController;
    TVErrorViewController *_errorViewController;
    TVSStateMachine *_stateMachine;
}

+ (struct CGSize)_itemSizeForCategory:(unsigned long long)arg1;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TVErrorViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) UIViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(retain, nonatomic) TVSStoreFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
@property(nonatomic) __weak id <TVCKStoreFavoritesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setTitle:(id)arg1;
- (_Bool)supportsIdleModeVisualEffects;
- (void)storeFavoritesController:(id)arg1 failedToFetchItemsWithError:(id)arg2;
- (void)storeFavoritesController:(id)arg1 finishedFetchingItems:(id)arg2;
- (void)storeFavoritesView:(id)arg1 didEndEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(id)arg1 willBeginEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(id)arg1 didSelectItem:(id)arg2;
- (void)storeFavoritesView:(id)arg1 moveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)storeFavoritesView:(id)arg1 canMoveItemAtIndex:(unsigned long long)arg2;
- (void)_askToRemoveUnavailableItem:(id)arg1;
- (void)_updateItems;
- (void)_displayMessage:(id)arg1;
- (void)_hideSpinner;
- (void)_showSpinner;
- (id)_titleForRemoveUnavailableItemButton;
- (id)_titleForKeepUnavailableItemButton;
- (id)_messageForUnavailableItem;
- (id)_titleForUnavailableItem;
- (id)_errorMessage;
- (id)_messageForZeroItems;
- (void)_favoritesDidChange:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_didSelectItem:(id)arg1;
- (id)favoritesView;
- (void)_setupStateMachine;
- (void)_willEndBackground;
- (void)_willBecomeBackground;
- (void)_willBecomeActive;
- (void)_willEndActive;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentCategory:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
