//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSVBTestedFault : NSObject
{
    double _probability;
    unsigned int _tested;
    unsigned int _taken;
}

+ (id)testedFaultWithProbability:(double)arg1;
- (id)description;
- (id)initWithProbability:(double)arg1;

@end
