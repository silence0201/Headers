//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource
{
    CALayer *_layer;
    double _lastUpdate;
    double _nextUpdateDate;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct CGSize)layerSizeInPixels;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (double)__updateTextureWithLayer:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;
- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 nextFrameTime:(double *)arg2;
- (_Bool)prefersGL3;
- (_Bool)supportsMetal;
- (void)dealloc;

@end
