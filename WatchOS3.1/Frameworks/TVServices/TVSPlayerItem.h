//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

@class AVMediaSelectionOption, TVSImageProxy, TVSMediaItemLoader;

@interface TVSPlayerItem : AVPlayerItem
{
    _Bool _muted;
    _Bool _audioSelectionIsAutomatic;
    TVSMediaItemLoader *_mediaItemLoader;
    long long _previousStatus;
    TVSImageProxy *_posterProxyToCancelAtDealloc;
    id _scrubImageLoader;
    AVMediaSelectionOption *_savedManualAudioSelection;
}

@property(retain, nonatomic) AVMediaSelectionOption *savedManualAudioSelection; // @synthesize savedManualAudioSelection=_savedManualAudioSelection;
@property(nonatomic) _Bool audioSelectionIsAutomatic; // @synthesize audioSelectionIsAutomatic=_audioSelectionIsAutomatic;
@property(retain, nonatomic) id scrubImageLoader; // @synthesize scrubImageLoader=_scrubImageLoader;
@property(retain, nonatomic) TVSImageProxy *posterProxyToCancelAtDealloc; // @synthesize posterProxyToCancelAtDealloc=_posterProxyToCancelAtDealloc;
@property(nonatomic) long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak TVSMediaItemLoader *mediaItemLoader; // @synthesize mediaItemLoader=_mediaItemLoader;
- (void).cxx_destruct;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end
