//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface CalendarNotificationMessageTracer : NSObject
{
    PETScalarEventTracker *_predictionTracker;
}

+ (id)_eventTypeProperties;
+ (void)messageTraceEventType:(unsigned long long)arg1;
@property(retain, nonatomic) PETScalarEventTracker *predictionTracker; // @synthesize predictionTracker=_predictionTracker;
- (void).cxx_destruct;

@end
