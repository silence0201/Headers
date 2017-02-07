//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSGestureRecognizerTransformAnalyzer : NSObject
{
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly) int dominantComponent; // @synthesize dominantComponent=_dominantComponent;
@property double rotationWeight; // @synthesize rotationWeight=_rotationWeight;
@property double pinchingWeight; // @synthesize pinchingWeight=_pinchingWeight;
@property double translationWeight; // @synthesize translationWeight=_translationWeight;
- (void)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end
