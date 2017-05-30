//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPAVController, UIImageView, UILabel;

@interface MPVideoPlaybackBackgroundView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets _edgeInsets;
    MPAVController *_player;
}

@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (void)_updateDisplay;
- (id)_imageNamed:(id)arg1;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
