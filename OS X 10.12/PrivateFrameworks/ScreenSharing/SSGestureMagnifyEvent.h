//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/SSGestureEvent.h>

__attribute__((visibility("hidden")))
@interface SSGestureMagnifyEvent : SSGestureEvent
{
    double mMagnification;
    void *mReservedForInstanceVariablesGestureMagnify;
}

+ (id)gestureMagnifyEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;
@property(readonly) double magnification; // @synthesize magnification=mMagnification;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;

@end

