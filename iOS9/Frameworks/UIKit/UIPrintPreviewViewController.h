//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UIKit/PageRangeDelegate-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSObject, NSString, NSURL, UIDocumentInteractionController, UILabel, UIPrintPanelViewController, UIPrintPaper, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController : UICollectionViewController <UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UIScrollViewDelegate, PageRangeDelegate, UINavigationControllerDelegate>
{
    long long _numPages;
    struct CGSize _pageSize;
    _Bool _grayscalePreview;
    _Bool _accessibilityScrollTriggered;
    UIPrintPanelViewController *_printPanelViewController;
    UIView *_pageLabelBackgroundView;
    UILabel *_pageLabel;
    long long _pageIndexOnPageLabel;
    NSURL *_pdfURL;
    struct CGPDFDocument *_pdfDocRef;
    NSObject<OS_dispatch_queue> *_pageRendererQueue;
    NSLayoutConstraint *_pageLabelBadgeVerticalPositionConstraint;
    UIDocumentInteractionController *_documentInteractionController;
    id previousNavigationControllerDelegate;
    NSURL *_sharePDFFileURL;
    _Bool _scaleUpOnDestinationPaper;
    NSMutableArray *_arrayOfPageImages;
    NSURL *_quickLookPDFURL;
    UIPrintPaper *_destinationPaper;
    NSString *_pdfPassword;
    long long _initialPageIndexToCenter;
}

@property(readonly) long long numPages; // @synthesize numPages=_numPages;
@property long long initialPageIndexToCenter; // @synthesize initialPageIndexToCenter=_initialPageIndexToCenter;
@property(retain) NSString *pdfPassword; // @synthesize pdfPassword=_pdfPassword;
@property _Bool scaleUpOnDestinationPaper; // @synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper;
@property(retain) UIPrintPaper *destinationPaper; // @synthesize destinationPaper=_destinationPaper;
@property(retain) NSURL *quickLookPDFURL; // @synthesize quickLookPDFURL=_quickLookPDFURL;
@property(retain) NSMutableArray *arrayOfPageImages; // @synthesize arrayOfPageImages=_arrayOfPageImages;
- (void).cxx_destruct;
- (id)indexPathNearestToPointInCollectionView:(struct CGPoint)arg1;
@property(readonly) long long currentCenterPageIndex;
- (_Bool)accessibilityScroll:(long long)arg1;
- (long long)_adjustScrollDirectionForLayout:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)sharePressed:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct _NSRange)validRenderRange;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageRangeUpdated;
- (_Bool)canShowMenuBar;
- (void)addAllPages:(id)arg1;
- (_Bool)canAddAllPages:(id)arg1;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (_Bool)pageIndexIsInRange:(long long)arg1;
- (id)pathOfCenterCell;
- (void)trackCenterCell;
- (id)getPageImageForPage:(long long)arg1;
@property(retain) NSURL *pdfURL;
- (void)resetAllPageImages;
@property _Bool grayscalePreview;
- (void)didReceiveMemoryWarning;
- (void)updatePageNumberBadgeLocation;
- (void)dealloc;
- (void)updateLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)pageLabelBottomSpace;
- (id)initWithPageSize:(struct CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(struct CGSize)arg3 printPanelViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

