//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAnimationDelegate : NSObject
{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost *_layerTreeHost;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)invalidate;
- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost *)arg2;

@end
