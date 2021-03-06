//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QLDismissTrackingInformation;

__attribute__((visibility("hidden")))
@interface QLDismissGestureRecognizer : NSObject
{
    NSMutableArray *_actions;
    long long _state;
    QLDismissTrackingInformation *_trackingInformation;
}

@property(retain) QLDismissTrackingInformation *trackingInformation; // @synthesize trackingInformation=_trackingInformation;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)dealloc;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;

@end

