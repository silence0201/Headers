//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TNChartFormulaTypeEnumerator : NSObject
{
    unsigned long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (unsigned long long)nextFormulaType;
- (void)dealloc;
- (id)initWithChartFormulaStorage:(id)arg1;

@end
