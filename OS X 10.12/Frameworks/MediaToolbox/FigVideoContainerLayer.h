//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer
{
    CALayer *_videoLayer;
    BOOL _shouldResizeVideoLayer;
}

+ (id)defaultActionForKey:(id)arg1;
@property(nonatomic) BOOL shouldResizeVideoLayer; // @synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer;
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
- (void)layoutSublayers;
- (void)dealloc;
- (id)actionForKey:(id)arg1;

@end
