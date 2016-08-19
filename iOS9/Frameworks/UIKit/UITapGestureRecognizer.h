//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <UIKit/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapRecognizer;

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>
{
    struct CGPoint _locationInView;
    UITapRecognizer *_imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    long long _buttonType;
}

- (void).cxx_destruct;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint)_digitizerLocation;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) struct CGPoint location;
@property(readonly, nonatomic) struct CGPoint centroid;
- (void)_appendSubclassDescription:(id)arg1;
@property(nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
- (void)_setDelaysRecognitionForGreaterTapCounts:(_Bool)arg1;
- (_Bool)_delaysRecognitionForGreaterTapCounts;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
@property(nonatomic) double maximumTapDuration;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (double)maximumSingleTapDuration;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (double)_allowableTouchTimeSeparation;
- (void)_setAllowableSeparation:(double)arg1;
- (double)_allowableSeparation;
- (void)setAllowableMovement:(double)arg1;
- (double)allowableMovement;
@property(nonatomic) unsigned long long numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired;
@property(readonly, nonatomic) NSArray *touches;
- (double)_touchSloppinessFactor;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (long long)_finalStateForRecognition;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceivePress:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedPressTypes:(id)arg1;
- (_Bool)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)_resetGestureRecognizer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

