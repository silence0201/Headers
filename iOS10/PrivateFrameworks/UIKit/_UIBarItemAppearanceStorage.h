//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject
{
    NSMutableDictionary *textAttributesForState;
}

- (void).cxx_destruct;
- (void)enumerateTextAttributesWithBlock:(CDUnknownBlockType)arg1;
- (id)textAttributeForKey:(id)arg1 state:(unsigned long long)arg2;
- (void)setTextAttribute:(id)arg1 forKey:(id)arg2 state:(unsigned long long)arg3;
- (id)textAttributesForState:(unsigned long long)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end

