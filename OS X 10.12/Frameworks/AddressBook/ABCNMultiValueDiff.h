//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABCNMultiValueDiff : NSObject
{
    NSArray *_updates;
}

+ (id)emptyDiff;
- (id)description;
- (BOOL)isEmpty;
- (void)applyToABMutableMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithUpdates:(id)arg1;

@end

