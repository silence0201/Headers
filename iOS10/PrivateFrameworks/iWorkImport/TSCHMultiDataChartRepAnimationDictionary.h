//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSURetainedPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepAnimationDictionary : NSObject
{
    TSURetainedPointerKeyDictionary *mEntries;
}

+ (id)dictionary;
- (void)addEntriesFromAnimationDictionary:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 interpolations:(id)arg4;
- (id)animationDictionaryForBuildEngine;
- (id)nonretainedValueForObject:(id)arg1;
- (void)addAnimation:(id)arg1 animationInfo:(id)arg2 forLayer:(id)arg3;
- (id)entryForLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
