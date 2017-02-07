//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUNowPlayingTitlesView.h>

#import <MediaPlayerUI/MPUContentSizeCategoryChanging-Protocol.h>

@class CALayer, NSString;
@protocol MPUMediaControlsTitlesViewDelegate;

@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView <MPUContentSizeCategoryChanging>
{
    CALayer *_edgesLayerMask;
    NSString *_appDisplayName;
    _Bool _displayingAppName;
    _Bool _highlighted;
    long long _mediaControlsStyle;
    id <MPUMediaControlsTitlesViewDelegate> _delegate;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak id <MPUMediaControlsTitlesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long mediaControlsStyle; // @synthesize mediaControlsStyle=_mediaControlsStyle;
- (void).cxx_destruct;
- (id)_createEdgesLayerMask;
- (void)_touchControlTapped:(id)arg1;
- (void)_touchControlDeactivate:(id)arg1;
- (void)_touchControlActivate:(id)arg1;
- (void)_setGlowEnabled:(_Bool)arg1 forLabel:(id)arg2;
- (id)_detailTextAttributes;
- (id)_titleTextAttributes;
- (_Bool)_isLockScreenMediaControlStyle;
- (void)updateTextForContentSizeCategory:(id)arg1;
- (void)updateTrackInformationWithNowPlayingInfo:(id)arg1;
- (void)updateNowPlayingAppDisplayName:(id)arg1;
- (id)detailTextColorHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithMediaControlsStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
