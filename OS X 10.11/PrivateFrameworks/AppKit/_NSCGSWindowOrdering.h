//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowOrdering : NSObject
{
    unsigned long long _count;
    NSPointerArray *_reorderedWindows;
    NSPointerArray *_ops;
    NSPointerArray *_fixedWindows;
    unsigned int _batch:1;
}

- (void)apply;
- (void)addWindow:(id)arg1 ordered:(int)arg2 againstWindow:(id)arg3;
- (void)dealloc;
- (id)init;

@end
