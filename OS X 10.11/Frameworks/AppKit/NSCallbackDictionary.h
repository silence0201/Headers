//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSCallbackDictionary : NSDictionary
{
    id _delegate;
    const struct __CFDictionary *_keyToSelectorMap;
    id _context;
}

+ (id)dictionaryWithDelegate:(id)arg1 keyToSelectorMap:(struct __CFDictionary *)arg2 context:(id)arg3;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 keyToSelectorMap:(struct __CFDictionary *)arg2 context:(id)arg3;

@end
