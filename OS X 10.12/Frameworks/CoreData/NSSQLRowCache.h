//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache : NSPersistentStoreCache
{
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;
- (id)sqlCore;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1;

@end
