//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Shortcut/SCTAnimatable-Protocol.h>

@class CIImage, NSImage, NSShadow;

@interface SCTHelpPointerView : NSView <SCTAnimatable>
{
    struct CGRect mInitialBounds;
    NSImage *mRHSPointerImage;
    NSImage *mLHSPointerImage;
    CIImage *mRHSPointerCIImage;
    NSShadow *mShadow;
    struct CGRect mPreviousRect;
    BOOL mIsRightHandSide;
    unsigned int mCurrentMode;
    unsigned long long mControlTint;
    float mAnimationProgress;
    float mScale;
}

- (void)updateProgress:(float)arg1;
- (void)updateScale:(float)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIsOnRightHandSide:(BOOL)arg1;
- (BOOL)wantsDefaultClipping;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
