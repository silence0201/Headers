//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoVitalityBehaviorDelegate;

@interface ISLivePhotoVitalityBehavior : ISBehavior
{
    _Bool _prepared;
    _Bool _playing;
    _Bool _preparing;
    _Bool __shouldPlayAfterPreparation;
    float _playRate;
    double _photoTime;
    double _photoTransitionDuration;
    CDStruct_1b6d18a9 _playDuration;
}

@property(nonatomic, setter=_setShouldPlayAfterPreparation:) _Bool _shouldPlayAfterPreparation; // @synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation;
@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool preparing; // @synthesize preparing=_preparing;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isPrepared, setter=_setPrepared:) _Bool prepared; // @synthesize prepared=_prepared;
@property(readonly, nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playDuration; // @synthesize playDuration=_playDuration;
@property(readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToEnd;
- (void)_startVideoPlayback;
- (void)playVitality;
- (long long)behaviorType;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToStartTime;
- (void)prepareForVitality;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:(id)arg1 photoTime:(double)arg2 playDuration:(CDStruct_1b6d18a9)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5;

// Remaining properties
@property(nonatomic) __weak id <ISLivePhotoVitalityBehaviorDelegate> delegate; // @dynamic delegate;

@end
