//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SODownloadDisplayManager : NSObject
{
    double _currentBytesPerSecondValue;
    double _timeRemainingAvergingWindow[7];
}

- (double)_averagedTimeInterval;
- (void)_appendAveragingTimeInterval:(double)arg1;
- (void)reset;
- (double)timeRemainingForActiveInstallations:(id)arg1 withTagPrefix:(id)arg2;
- (void)dealloc;
- (id)init;

@end
