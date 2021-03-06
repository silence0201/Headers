//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface QLLoadingItemViewController : QLItemViewController
{
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)_updateLoadingLabel;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;

@end

