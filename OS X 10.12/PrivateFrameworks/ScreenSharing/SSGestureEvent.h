//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/SSMouseEvent.h>

__attribute__((visibility("hidden")))
@interface SSGestureEvent : SSMouseEvent
{
    long long mSubType;
    void *mReservedForInstanceVariablesGesture;
}

+ (id)gestureEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2;
@property(readonly) long long subType; // @synthesize subType=mSubType;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2;

@end
