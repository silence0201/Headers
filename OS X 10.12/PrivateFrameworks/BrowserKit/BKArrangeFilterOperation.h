//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BKArrangeItems, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BKArrangeFilterOperation : NSOperation
{
    NSArray *_filters;
    NSMutableArray *_items;
    BKArrangeItems *_target;
}

- (void)main;
- (void)dealloc;
- (id)initWithFilters:(id)arg1 items:(id)arg2 target:(id)arg3;

@end
