//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UISearchControllerDelegate-Protocol.h>

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSearchPaletteView, _UIDocumentPickerSortOrderView;
@protocol _UIDocumentPickerContainedViewController, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate>
{
    long long _explicitDisplayMode;
    _Bool _rootContainer;
    id <_UIDocumentPickerServiceViewController> _serviceViewController;
    _UIDocumentPickerContainerModel *_model;
    UIViewController<_UIDocumentPickerContainedViewController> *_childViewController;
    _UIDocumentPickerSortOrderView *_sortView;
    _UIDocumentPickerSearchPaletteView *_searchView;
}

+ (id)userDefaults;
@property(retain, nonatomic) _UIDocumentPickerSearchPaletteView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic, getter=isRootContainer) _Bool rootContainer; // @synthesize rootContainer=_rootContainer;
@property(retain, nonatomic) UIViewController<_UIDocumentPickerContainedViewController> *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) long long explicitDisplayMode; // @synthesize explicitDisplayMode=_explicitDisplayMode;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <_UIDocumentPickerServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (void).cxx_destruct;
- (long long)displayMode;
- (long long)defaultDisplayMode;
- (void)setDefaultDisplayMode:(long long)arg1;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
@property(nonatomic) struct CGPoint contentOffset;
- (void)_pickCurrentLocationForUpload:(id)arg1;
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateForServiceView;
- (void)teardownToolbar;
- (void)setupToolbar;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)_sortOrderViewChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setupSearchController:(_Bool)arg1;
- (void)ensureChildViewController;
- (void)displayModeChanged;
- (id)url;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

