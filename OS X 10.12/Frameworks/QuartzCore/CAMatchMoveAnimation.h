//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation
{
}

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)arg1;
@property(getter=isAdditive) BOOL additive;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesY;
@property BOOL appliesX;
@property BOOL targetsSuperlayer;
@property(copy) NSString *keyPath;
@property(copy) NSArray *sourcePoints;
@property __weak CALayer *sourceLayer;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

@end

