//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVNowPlayingInfoPanelFilmStrip, NSString, UIImage;
@protocol AVImageProxyProtocol;

@protocol AVNowPlayingInfoPanelFilmStripDelegate <NSObject>
- (void)filmStrip:(AVNowPlayingInfoPanelFilmStrip *)arg1 didSelectFrameIndex:(unsigned long long)arg2;
- (NSString *)filmStrip:(AVNowPlayingInfoPanelFilmStrip *)arg1 titleForFrame:(unsigned long long)arg2;
- (id <AVImageProxyProtocol>)filmStrip:(AVNowPlayingInfoPanelFilmStrip *)arg1 imageProxyForFrameIndex:(unsigned long long)arg2;
- (UIImage *)filmStrip:(AVNowPlayingInfoPanelFilmStrip *)arg1 imageForFrameIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfFramesForFilmStrip:(AVNowPlayingInfoPanelFilmStrip *)arg1;
@end
