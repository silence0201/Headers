//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIForceLevelClassifier.h>

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier
{
    double _smoothedForce;
    double _maximumForce;
    double _timeMark;
    double _currentTime;
    double _previousTime;
    double _popOffsetInitial;
    double _popOffsetLongterm;
    double _popOffsetDecayAlpha;
    double _lowpassForceAlpha;
    double _popDecayingOffset;
    double _popReductionForce;
    double _progressToStrongThreshold;
    _Bool _allowsPopOffsetDecay;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _hintAndPeekInterval;
    double _hintReductionForce;
    double _transitionInterval;
    double _actualHintForce;
    double _actualPeekForce;
    double _actualPopForce;
    double _actualHintTime;
    double _actualPeekTime;
    double _actualPopTime;
    unsigned long long _peekPopCount;
}

@property(readonly, nonatomic) unsigned long long peekPopCount; // @synthesize peekPopCount=_peekPopCount;
@property(readonly, nonatomic) double actualPopTime; // @synthesize actualPopTime=_actualPopTime;
@property(readonly, nonatomic) double actualPeekTime; // @synthesize actualPeekTime=_actualPeekTime;
@property(readonly, nonatomic) double actualHintTime; // @synthesize actualHintTime=_actualHintTime;
@property(readonly, nonatomic) double actualPopForce; // @synthesize actualPopForce=_actualPopForce;
@property(readonly, nonatomic) double actualPeekForce; // @synthesize actualPeekForce=_actualPeekForce;
@property(readonly, nonatomic) double actualHintForce; // @synthesize actualHintForce=_actualHintForce;
@property(nonatomic) double transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property(nonatomic) double hintReductionForce; // @synthesize hintReductionForce=_hintReductionForce;
@property(nonatomic) double hintAndPeekInterval; // @synthesize hintAndPeekInterval=_hintAndPeekInterval;
@property(nonatomic) double strongThreshold; // @synthesize strongThreshold=_strongThreshold;
@property(nonatomic) double standardThreshold; // @synthesize standardThreshold=_standardThreshold;
@property(nonatomic) double revealThreshold; // @synthesize revealThreshold=_revealThreshold;
- (double)_normalizedTouchForceValue:(double)arg1;
- (double)_denormalizedTouchForceValue:(double)arg1;
- (double)_thresholdForForceLevel:(long long)arg1;
- (long long)_forceLevelForTouchForceValue:(double)arg1;
- (double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (_Bool)wantsUnclampedForceValues;
- (void)touchForceMultiplierDidChange;
- (void)reset;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (id)init;

@end

