//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, QLPageNumberView, QLThumbnailView;
@protocol QLScrubViewDataSource;

__attribute__((visibility("hidden")))
@interface QLScrubView : UIView <UIGestureRecognizerDelegate>
{
    id <QLScrubViewDataSource> _dataSource;
    id _delegate;
    _Bool _runOnMainThread;
    _Bool _needsThumbLayout;
    double _thumbOrigin;
    double _thumbEnd;
    double _thumbHeight;
    long long _pageCount;
    long long _selectedPage;
    NSOperationQueue *_queue;
    NSMutableSet *_operations;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
    double _topOffset;
}

+ (double)defaultWidth;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property id delegate; // @synthesize delegate=_delegate;
@property id <QLScrubViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)drawRect:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateSelectedThumbnailView;
- (void)layoutSubviews;
- (void)_hidePageLabel;
- (void)_updatePageLabelPosition;
- (void)_showPageLabel;
- (struct CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longTapReceived:(id)arg1;
- (void)tapReceived:(id)arg1;
- (void)panReceived:(id)arg1;
- (void)_handleSwipAtLocation:(struct CGPoint)arg1;
- (void)_notifyScrubingEnded;
- (void)_notifyPageChanged;
- (void)_notifyScrubingStarted;
- (void)selectPageNumber:(long long)arg1;
- (void)reloadThumbnails;
- (void)_removeThumbviews;
@property _Bool runOnMainThread;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)_cancelAllOperations;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

