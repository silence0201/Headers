//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface NSObservedValue : NSObject
{
    id _contents;
    id _lastOriginator;
    int _tag;
}

- (id)copyToHeap;
- (id)debugDescription;
- (_Bool)_isToManyChangeInformation;
@property _Bool finished;
@property(retain) NSError *error;
@property(retain) id value;
- (void)dealloc;
- (id)description;

@end

