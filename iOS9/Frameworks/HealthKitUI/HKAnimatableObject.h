//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HKAnimatableObject : NSObject
{
    NSMutableDictionary *_animatableProperties;
}

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (id)endingValueForPropertyType:(unsigned long long)arg1;
- (id)_animatablePropertyForType:(unsigned long long)arg1;
- (_Bool)areAnimationsInProgress;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (void)update:(double)arg1;

@end

