//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter
{
    double _threshold;
    double _minimumChangeValue;
}

@property(nonatomic) double minimumChangeValue; // @synthesize minimumChangeValue=_minimumChangeValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end

