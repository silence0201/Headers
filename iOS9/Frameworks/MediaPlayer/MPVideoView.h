//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPAVController, NSDictionary, NSString;

@interface MPVideoView : UIView
{
    MPAVController *_player;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    unsigned long long _scaleMode;
}

+ (Class)layerClass;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) NSString *movieSubtitle; // @synthesize movieSubtitle=_movieSubtitle;
@property(retain, nonatomic) NSDictionary *AVURLAssetOptions; // @synthesize AVURLAssetOptions=_AVURLAssetOptions;
- (void).cxx_destruct;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) struct CGRect movieContentFrame;
@property(readonly, nonatomic) struct CGRect movieFrame;
@property(readonly, nonatomic) unsigned long long effectiveScaleMode;
- (void)toggleScaleMode:(_Bool)arg1;
- (void)setScaleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setScaleMode:(unsigned long long)arg1 duration:(float)arg2;
@property(readonly, nonatomic) _Bool canChangeScaleMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

