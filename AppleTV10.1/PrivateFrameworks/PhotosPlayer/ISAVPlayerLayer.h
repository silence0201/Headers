//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)setPlayer:(id)arg1;
- (void)__reallySetPlayer:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end
