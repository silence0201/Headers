//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MediaUIValueTiming, NSArray, NSError, NSLocale;

@interface MediaUIPlaybackModel : NSObject
{
    double _contentDuration;
    struct CGSize _contentDimensions;
    double _contentFrameRate;
    NSArray *_contentChapters;
    MediaUIValueTiming *_playbackTiming;
    double _playbackVolume;
    NSError *_playbackError;
    double _minimumPlaybackRate;
    double _maximumPlaybackRate;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
    NSLocale *_audioLocale;
    NSLocale *_subtitleLocale;
    NSArray *_contentAudioLocales;
    NSArray *_contentSubtitleLocales;
    BOOL _contentHasClosedCaptions;
}

@property BOOL contentHasClosedCaptions; // @synthesize contentHasClosedCaptions=_contentHasClosedCaptions;
@property(copy) NSArray *contentSubtitleLocales; // @synthesize contentSubtitleLocales=_contentSubtitleLocales;
@property(copy) NSArray *contentAudioLocales; // @synthesize contentAudioLocales=_contentAudioLocales;
@property(copy) NSLocale *subtitleLocale; // @synthesize subtitleLocale=_subtitleLocale;
@property(copy) NSLocale *audioLocale; // @synthesize audioLocale=_audioLocale;
@property double maximumSeekableTime; // @synthesize maximumSeekableTime=_maximumSeekableTime;
@property double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property double maximumPlaybackRate; // @synthesize maximumPlaybackRate=_maximumPlaybackRate;
@property double minimumPlaybackRate; // @synthesize minimumPlaybackRate=_minimumPlaybackRate;
@property(copy) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property double playbackVolume; // @synthesize playbackVolume=_playbackVolume;
@property(copy) MediaUIValueTiming *playbackTiming; // @synthesize playbackTiming=_playbackTiming;
@property(copy) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property double contentFrameRate; // @synthesize contentFrameRate=_contentFrameRate;
@property struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
- (void)setDisplaysClosedCaptions:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDisplaysSubtitles:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectAudioLocale:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectSubtitleLocale:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setRate:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVolume:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)finishGroupingValueChanges;
- (void)beginGroupingValueChanges;
- (void)dealloc;
- (id)init;
- (id)makeVideoLayer;

@end
