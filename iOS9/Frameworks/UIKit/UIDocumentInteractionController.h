//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/QLPreviewControllerDelegate-Protocol.h>
#import <UIKit/UIActionSheetDelegate-Protocol.h>

@class LSApplicationProxy, NSArray, NSString, NSURL, QLPreviewController, UIActivityViewController, UIBarButtonItem, UIPopoverController, UIView, UIViewController, _UIPreviewItemProxy;
@protocol QLPreviewItem, UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, UIActionSheetDelegate>
{
    id <UIDocumentInteractionControllerDelegate> _delegate;
    id _previewItemProxy;
    NSArray *_icons;
    id _annotation;
    NSString *_uniqueIdentifier;
    UIViewController *_presentingViewController;
    QLPreviewController *_previewController;
    NSArray *_gestureRecognizers;
    struct CGRect _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSArray *_availableApplications;
    UIPopoverController *_popoverController;
    UIActivityViewController *_activityViewController;
    _Bool _shouldUnzipDocument;
    _Bool _sourceIsManaged;
    NSURL *_unzippedDocumentURL;
    LSApplicationProxy *_applicationToOpen;
    NSURL *_tmpURLToDeleteOnDealloc;
    struct {
        unsigned int delegateViewControllerForPreview:1;
        unsigned int delegateRectForPreview:1;
        unsigned int delegateViewForPreview:1;
        unsigned int transitionImageForPreview:1;
        unsigned int documentProxyForPreview:1;
        unsigned int delegateWillBeginPreview:1;
        unsigned int delegateDidEndPreviewPreview:1;
        unsigned int delegateWillEndPreviewPreview:1;
        unsigned int delegateWillPresentOptionsMenu:1;
        unsigned int delegateDidDismissOptionsMenu:1;
        unsigned int delegateWillPresentOpenInMenu:1;
        unsigned int delegateDidDismissOpenInMenu:1;
        unsigned int delegateWillBeginSendingToApplication:1;
        unsigned int delegateDidEndSendingToApplication:1;
        unsigned int delegateCanPerformAction:1;
        unsigned int delegatePerformAction:1;
        unsigned int delegateUnzipURL:1;
        unsigned int showingOptionsMenu:1;
        unsigned int showingOpenInMenu:1;
        unsigned int delegateExcludesActivities:1;
        unsigned int delegateCanBlockRemoteImages:1;
        unsigned int delegateAddsActivities:1;
        unsigned int delegateProvidesActivityItem:1;
        unsigned int delegateProvidesPrintInfo:1;
        unsigned int performingActivity:1;
    } _documentInteractionControllerFlags;
    _Bool previewsPresentWithMarkup;
    _Bool _disableFilteringDotFilesInArchives;
    CDUnknownBlockType _completionWithItemsHandler;
}

+ (id)_pathFilterPredicate:(_Bool)arg1;
+ (id)_unzippingQueue;
+ (id)_UTIForFileURL:(id)arg1;
+ (id)interactionControllerWithURL:(id)arg1;
+ (void)initialize;
+ (id)allActionSelectorNames;
+ (id)_applicationsForDocumentProxy:(id)arg1;
@property(nonatomic, getter=_disableFilteringDotFilesInArchives, setter=_setDisableFilteringDotFilesInArchives:) _Bool disableFilteringDotFilesInArchives; // @synthesize disableFilteringDotFilesInArchives=_disableFilteringDotFilesInArchives;
@property(nonatomic) _Bool previewsPresentWithMarkup; // @synthesize previewsPresentWithMarkup;
@property(copy, nonatomic, getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:) CDUnknownBlockType _completionWithItemsHandler; // @synthesize _completionWithItemsHandler;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(nonatomic) __weak id <UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fixupFileExtensionIfNeeded;
@property(readonly, nonatomic) _UIPreviewItemProxy<QLPreviewItem> *previewItemProxy;
@property(readonly, nonatomic) id previewController;
- (void)_activityControllerViewDidDismiss;
- (_Bool)_delegatePerformAction:(SEL)arg1;
- (_Bool)_delegateCanPerformAction:(SEL)arg1;
- (_Bool)_delegateImplementsLegacyActions;
- (_Bool)_canSaveToCameraRollForType;
- (_Bool)_isValidURL:(id)arg1;
- (_Bool)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(_Bool)arg2;
- (_Bool)_isPackageArchive:(id)arg1;
- (_Bool)_documentNeedsHelpUnzippingForPreview;
- (_Bool)_canUnzipDocumentForPreview;
- (_Bool)_canUnzipDocument;
- (id)_unzippedDocumentURL;
- (void)_setUnzippedDocumentURL:(id)arg1;
- (void)_setApplicationToOpen:(id)arg1;
- (id)_applicationToOpen;
- (void)_interfaceOrientationWillChange:(id)arg1;
- (void)_invalidate;
- (void)_unzipFileAndSetupPayload:(CDUnknownBlockType)arg1;
- (id)_unzipFileAndSetupPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pathsInArchive:(CDUnknownBlockType)arg1;
- (_Bool)_setupPreviewController;
- (_Bool)_setupForOpenInMenu;
- (_Bool)_setupForOptionsMenu;
- (void)_finishedCopyingResource;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_openDocumentWithCurrentApplication;
- (void)_openDocumentInPlaceWithApplication:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)_callFinishSelectorForOpenInPlace:(id)arg1;
- (void)_callBeginSelector:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1 userInfo:(id)arg2;
- (id)_applications:(_Bool)arg1;
- (void)_presentOptionsMenu:(id)arg1;
- (void)_presentOpenIn:(id)arg1;
- (void)_presentPreview:(id)arg1;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (void)dismissMenuAnimated:(_Bool)arg1;
- (void)dismissPreviewAnimated:(_Bool)arg1;
- (_Bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentPreviewAnimated:(_Bool)arg1;
- (id)presentingNavigationController;
- (_Bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_canUnzipDocumentAndPresentOpenIn;
- (_Bool)_canUnzipDocumentAndPresentOptions;
- (_Bool)_canPreviewUnzippedDocument;
@property(nonatomic) _Bool shouldUnzipDocument; // @synthesize shouldUnzipDocument=_shouldUnzipDocument;
@property(nonatomic, getter=_performingActivity, setter=_setPerformingActivity:) _Bool performingActivity;
- (_Bool)_isImageOrVideo;
- (_Bool)_isVideo;
- (_Bool)_isImage;
@property(readonly, nonatomic) NSArray *icons;
@property(copy) NSString *name;
@property(copy, nonatomic) NSString *UTI;
@property(retain) NSURL *URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)markupAction:(id)arg1;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(_Bool)arg1;
- (id)_defaultApplication;
- (_Bool)defaultApplicationSupportsOpenInPlace;
- (void)openDocumentWithDefaultApplication;
- (unsigned long long)applicationCount;
- (void)setPreviewURLOverride:(id)arg1;
- (_Bool)_delegateExistsAndImplementsRequiredMethods:(id *)arg1;
- (id)_documentProxySourceIsManaged:(_Bool)arg1;
- (id)extractSubitemFromArchive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subitemsInArchive:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isArchive) _Bool archive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

