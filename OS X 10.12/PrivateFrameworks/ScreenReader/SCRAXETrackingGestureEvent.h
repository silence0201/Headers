//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface SCRAXETrackingGestureEvent : NSObject
{
    BOOL _isSynthetic;
    unsigned long long _source;
    NSDate *_timestamp;
    NSArray *_allTouches;
    NSArray *_touchingTouches;
}

@property(readonly, nonatomic) NSArray *touchingTouches; // @synthesize touchingTouches=_touchingTouches;
@property(readonly, nonatomic) NSArray *allTouches; // @synthesize allTouches=_allTouches;
@property(readonly, nonatomic) BOOL isSynthetic; // @synthesize isSynthetic=_isSynthetic;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)_nameOfSource:(unsigned long long)arg1;
- (id)initWithTouches:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(BOOL)arg3 previousGestureEvent:(id)arg4;
- (id)initWithTouches:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(BOOL)arg3;
- (id)initWithNSEvent:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(BOOL)arg3 previousGestureEvent:(id)arg4;
- (id)description;
- (id)touchMatchingIdentity:(id)arg1 phase:(unsigned long long)arg2;
- (id)touchesMatchingPhase:(unsigned long long)arg1;

@end
