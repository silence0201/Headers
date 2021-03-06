//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAnimationPath, MCPlugParallel, MRAnimationContext, MRAnimationPathScalar;

@interface MRParallelPlugger : NSObject
{
    MCAnimationPath *mAnimationPathParam1;
    MCAnimationPath *mAnimationPathParam2;
    MCAnimationPath *mAnimationPathXY;
    MRAnimationPathScalar *mAnimationPathX;
    MRAnimationPathScalar *mAnimationPathY;
    MRAnimationPathScalar *mAnimationPathZ;
    MRAnimationPathScalar *mAnimationPathScale;
    MRAnimationPathScalar *mAnimationPathRX;
    MRAnimationPathScalar *mAnimationPathRY;
    MRAnimationPathScalar *mAnimationPathRZ;
    MRAnimationPathScalar *mAnimationPathOpacity;
    MRAnimationContext *mAnimationContext;
    BOOL mPlugWasSetSinceLastRendering;
    unsigned char mCurrentLayoutIndex;
    BOOL mNeedsUpdate;
    MCPlugParallel *mPlug;
}

@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=mNeedsUpdate;
@property(nonatomic) unsigned char currentLayoutIndex; // @synthesize currentLayoutIndex=mCurrentLayoutIndex;
@property(copy, nonatomic) MCPlugParallel *plug; // @synthesize plug=mPlug;
- (BOOL)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3;
- (void)setOpacityAnimationPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

