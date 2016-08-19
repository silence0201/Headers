//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileController.h>

@class NSArray, NSTimer, UIView;

@interface PUTileViewController : PUTileController
{
    _Bool _contentViewEnabled;
    _Bool _isReadyForDisplay;
    _Bool __loadingView;
    _Bool __edgeAntialiasingEnabled;
    NSArray *_gestureRecognizers;
    UIView *_view;
    UIView *_contentView;
    UIView *_loadedView;
    UIView *__tintView;
    UIView *__visibleRectView;
    CDUnknownBlockType __onReadyToDisplayBlock;
    NSTimer *__readinessTimer;
    UIView *__maskView;
}

@property(retain, nonatomic, setter=_setMaskView:) UIView *_maskView; // @synthesize _maskView=__maskView;
@property(nonatomic, setter=_setEdgeAntialiasingEnabled:) _Bool _edgeAntialiasingEnabled; // @synthesize _edgeAntialiasingEnabled=__edgeAntialiasingEnabled;
@property(retain, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer; // @synthesize _readinessTimer=__readinessTimer;
@property(copy, nonatomic, setter=_setOnReadyToDisplayBlock:) CDUnknownBlockType _onReadyToDisplayBlock; // @synthesize _onReadyToDisplayBlock=__onReadyToDisplayBlock;
@property(retain, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView; // @synthesize _visibleRectView=__visibleRectView;
@property(retain, nonatomic, setter=_setTintView:) UIView *_tintView; // @synthesize _tintView=__tintView;
@property(nonatomic, getter=_isLoadingView, setter=_setLoadingView:) _Bool _loadingView; // @synthesize _loadingView=__loadingView;
@property(retain, nonatomic, setter=_setLoadedView:) UIView *loadedView; // @synthesize loadedView=_loadedView;
@property(nonatomic, setter=_setReadyForDisplay:) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
- (void)_setContentView:(id)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isContentViewEnabled) _Bool contentViewEnabled; // @synthesize contentViewEnabled=_contentViewEnabled;
- (void)_setView:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void).cxx_destruct;
- (void)_handleReadinessForced:(_Bool)arg1;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateVisibleRectView;
- (void)_invalidateTintView;
- (void)_updateTintView;
- (void)didChangeVisibleRect;
- (_Bool)wantsVisibleRectChanges;
- (struct CGRect)visibleRect;
- (void)removeAllAnimations;
- (void)applyLayoutInfo:(id)arg1;
- (_Bool)isPresentationActive;
- (id)presentationLayoutInfo;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(retain, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (id)loadView;
- (void)addToTilingView:(id)arg1;
- (void)dealloc;

@end

