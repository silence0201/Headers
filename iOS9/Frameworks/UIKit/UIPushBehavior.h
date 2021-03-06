//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior
{
    double _angle;
    double _magnitude;
    _Bool _active;
    long long _mode;
    struct CGVector _forceVector;
    double _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}

+ (_Bool)_isPrimitiveBehavior;
- (void).cxx_destruct;
- (id)description;
- (void)_step;
@property(nonatomic) double magnitude;
@property(nonatomic) double angle;
- (void)setYComponent:(double)arg1;
- (void)setXComponent:(double)arg1;
- (double)yComponent;
- (double)xComponent;
@property(nonatomic) struct CGVector pushDirection;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)_dissociate;
- (void)_associate;
- (void)setTargetPoint:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct CGPoint)targetPointForItem:(id)arg1;
- (void)setTargetOffsetFromCenter:(struct UIOffset)arg1 forItem:(id)arg2;
- (struct UIOffset)targetOffsetFromCenterForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) long long mode;
@property(nonatomic) _Bool active;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 mode:(long long)arg2;
- (id)init;

@end

