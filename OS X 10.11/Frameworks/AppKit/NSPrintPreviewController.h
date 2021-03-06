//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSMapTable, NSPrintThumbnailView, NSSegmentedControl, NSTextField, NSView;

@interface NSPrintPreviewController : NSViewController
{
    struct CGSize _maxViewFrameSize;
    NSPrintThumbnailView *thumbnailView;
    NSView *pageNumberView;
    NSSegmentedControl *pageNumberLeftControl;
    NSTextField *pageNumberTextField;
    NSSegmentedControl *pageNumberRightControl;
    BOOL _didLoadView;
    double _pageNumberViewLeading;
    BOOL _isPreviewing;
    NSMapTable *_observedKeyPathsPerAccessoryController;
}

- (void)printInfoDidChange:(id)arg1;
- (void)userClickedPageNumberControl:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (void)setMaxViewFrameSize:(struct CGSize)arg1;
- (void)loadView;
- (void)_tileView;
- (void)_updatePageNumberView;
- (long long)_sheetAlignedPageNumberForRawPageNumber:(long long)arg1;
- (long long)_sheetNumberForRawPageNumber:(long long)arg1;
- (long long)_lastPageNumber;
- (long long)_firstPageNumber;
- (long long)_nUpPages;
- (void)setRepresentedObject:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;

@end

