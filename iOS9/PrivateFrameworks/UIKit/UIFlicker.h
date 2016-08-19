//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface UIFlicker : NSObject
{
    UIView *_target;
    struct CGPoint _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint _offset;
}

- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setDelay:(float)arg1;
- (void)setIterations:(int)arg1;
- (void)setStartLocation:(struct CGPoint)arg1;
- (void)setTarget:(id)arg1;
- (void)setOffset:(struct CGPoint)arg1;
- (struct CGPoint)offset;
- (id)init;

@end

