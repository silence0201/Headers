//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewTrackedValue : NSObject
{
    double _trackedValue;
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    _Bool _isAccumulating;
}

@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;
@property(nonatomic) _Bool isAccumulating; // @synthesize isAccumulating=_isAccumulating;
- (void).cxx_destruct;
- (double)speed;
- (void)addValue:(double)arg1;
- (id)init;

@end
