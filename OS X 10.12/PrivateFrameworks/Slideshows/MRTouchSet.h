//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface MRTouchSet : NSObject
{
    NSMutableSet *_touches;
    NSMutableDictionary *_touchesForNSTouches;
}

@property(readonly) NSSet *touches; // @synthesize touches=_touches;
- (id)description;
@property(readonly) BOOL isActive;
@property(readonly) double rotation;
@property(readonly) double scale;
@property(readonly) struct CGPoint centroid;
@property(readonly) unsigned long long countOfActiveTouches;
- (id)updateWithPosition:(struct CGPoint)arg1 andCountOfTouches:(unsigned long long)arg2;
- (id)initWithPosition:(struct CGPoint)arg1 andCountOfTouches:(unsigned long long)arg2;
- (id)updateWithNSTouches:(id)arg1 inView:(id)arg2;
- (id)initWithNSTouches:(id)arg1 inView:(id)arg2;
- (void)cancelAllTouches;
- (void)removeAllTouches;
- (void)removeTouch:(id)arg1;
- (void)addTouch:(id)arg1;
- (void)dealloc;
- (id)initWithTouches:(id)arg1;
- (id)initWithTouch:(id)arg1;

@end
