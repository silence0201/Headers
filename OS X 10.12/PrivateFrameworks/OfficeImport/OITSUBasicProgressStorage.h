//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBasicProgressStorage : NSObject
{
    double mValue;
    double mMaxValue;
    BOOL mIndeterminate;
}

@property(getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=mIndeterminate;
@property double maxValue; // @synthesize maxValue=mMaxValue;
@property double value; // @synthesize value=mValue;

@end

