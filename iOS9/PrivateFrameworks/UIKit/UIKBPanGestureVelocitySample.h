//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBPanGestureVelocitySample : NSObject
{
    struct CGPoint start;
    struct CGPoint end;
    double dt;
    double force;
    double majorRadius;
}

@property double majorRadius; // @synthesize majorRadius;
@property double force; // @synthesize force;
@property double dt; // @synthesize dt;
@property struct CGPoint end; // @synthesize end;
@property struct CGPoint start; // @synthesize start;
- (void)resetValues;
- (void)pullValuesFrom:(id)arg1;

@end

