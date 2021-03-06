//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider, MRReflectionsRenderable, NSMutableDictionary;

@interface MREffectReflections : MREffect
{
    NSMutableDictionary *mSprites;
    BOOL mSpeedUpRight;
    BOOL mIsLoaded;
    NSMutableDictionary *mLayoutInfo;
    NSMutableDictionary *mBreakInformation;
    BOOL mHasBreak;
    BOOL mShrink;
    long long mTilt;
    long long mPhaseOutType;
    long long mDirection;
    long long mLayout;
    long long mAspect;
    MRImageProvider *mGroundShadowCenterProvider;
    MRImageProvider *mGroundShadowLeftProvider;
    MRImageProvider *mGroundShadowRightProvider;
    MRReflectionsRenderable *mHead;
    MRReflectionsRenderable *mTail;
}

+ (void)initialize;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)renderStuffAtTime:(double)arg1 alpha:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderKey:(id)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 yRot:(double)arg4 tX:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 flipped:(BOOL)arg9 shadow:(BOOL)arg10;
- (double)_yOffsetForTime:(double)arg1 layout:(id)arg2 size:(struct CGSize)arg3 position:(struct CGPoint)arg4 aspectRatio:(double)arg5;
- (double)_tXForTime:(double)arg1 layout:(id)arg2;
- (double)_yRotationForTime:(double)arg1 layout:(id)arg2;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_applySizeScripts:(double)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setAttributes:(id)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

@end

