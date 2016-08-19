//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIViewControllerRestoration-Protocol.h>
#import <UIKit/_UIDocumentPickerServiceViewController-Protocol.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerContainerViewController;
@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration>
{
    id <_UIDocumentListControllerDelegate> _delegate;
    _UIDocumentListController *_rootListController;
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    struct CGPoint _stateRestoredContentOffset;
}

+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)_listControllerForURL:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) __weak _UIDocumentListController *rootListController; // @synthesize rootListController=_rootListController;
@property(nonatomic) __weak id <_UIDocumentListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_updateScrollPositionForStateRestoration;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property(nonatomic) long long listMode;
@property(retain, nonatomic) NSArray *selectedItems;
@property(nonatomic) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *containedItems;
@property(readonly, nonatomic) NSURL *presentedURL;
- (id)model;
- (void)itemsOrSelectionDidChange:(_Bool)arg1;
- (_Bool)shouldShowAction:(long long)arg1;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldShowSearch;
- (void)didSelectItem:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSURL *uploadURL;
@property(nonatomic) long long availableActions;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
- (void)_setContainerViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerViewController:(id)arg1;
- (id)init;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
