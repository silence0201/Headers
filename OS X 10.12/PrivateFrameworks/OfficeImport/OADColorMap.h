//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject
{
    NSMutableDictionary *mMappings;
}

- (void)addDefaultMappings:(BOOL)arg1;
- (id)description;
- (_Bool)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (int)mappingForIndex:(int)arg1;
- (void)dealloc;
- (id)init;

@end
