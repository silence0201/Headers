//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator
{
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithKeyplaneCache:(id)arg1;

@end

