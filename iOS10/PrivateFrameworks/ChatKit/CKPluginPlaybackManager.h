//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol CKPluginPlaybackManagerDelegate;

@interface CKPluginPlaybackManager : NSObject
{
    unsigned long long _currentIndex;
    _Bool _isPlayingBack;
    id <CKPluginPlaybackManagerDelegate> _delegate;
    NSMutableArray *__pluginItems;
}

@property(retain, nonatomic, setter=_setPluginItems:) NSMutableArray *_pluginItems; // @synthesize _pluginItems=__pluginItems;
@property(nonatomic, setter=_setPlayingBack:) _Bool isPlayingBack; // @synthesize isPlayingBack=_isPlayingBack;
@property(nonatomic) __weak id <CKPluginPlaybackManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopPlayback;
- (void)addPluginItem:(id)arg1;
- (void)startPlayback;
- (void)_cleanup;
- (id)initWithPluginItems:(id)arg1;

@end
