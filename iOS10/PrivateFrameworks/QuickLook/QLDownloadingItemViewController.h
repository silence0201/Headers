//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLDetailItemViewController.h>

@class QLDetailItemViewControllerState, QLRoundProgressView, UIImage, UIImageView, _QLDownloadOperation;
@protocol QLDownloadingItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLDownloadingItemViewController : QLDetailItemViewController
{
    _Bool _downloading;
    _Bool _downloaded;
    _Bool _didDisappear;
    id _progressSubscriber;
    QLRoundProgressView *_progressView;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    _QLDownloadOperation *_downloadOperation;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    _Bool _showsLoadingPreviewSpinner;
    id <QLDownloadingItemViewControllerDelegate> _downloadingDelegate;
}

@property(nonatomic) _Bool showsLoadingPreviewSpinner; // @synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) __weak id <QLDownloadingItemViewControllerDelegate> downloadingDelegate; // @synthesize downloadingDelegate=_downloadingDelegate;
@property(readonly, nonatomic) QLRoundProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (id)_newDownloadOperation;
- (void)_presentConnectivityAlert;
- (void)_resetDownloadOperationBlocks;
- (void)_setDownloading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_stopDownload:(_Bool)arg1;
- (void)_startDownload:(_Bool)arg1;
- (void)_toggleDownload:(_Bool)arg1;
- (void)performAction;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

@end
