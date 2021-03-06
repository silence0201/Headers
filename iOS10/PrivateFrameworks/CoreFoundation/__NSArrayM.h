//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray
{
    unsigned long long _used;
    unsigned long long _offset;
    unsigned int _size:60;
    unsigned int _unused:4;
    unsigned long long _mutations;
    id *_list;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(unsigned long long)arg2:(_Bool)arg3;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_mutate;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@end

