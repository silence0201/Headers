//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface NSUIActivityInfo : NSObject
{
    NSHashTable *_providers;
    BOOL _isAutomatic;
}

@property(getter=isAutomaticallyGenerated) BOOL automaticallyGenerated; // @synthesize automaticallyGenerated=_isAutomatic;
@property(readonly) unsigned long long providerCount;
@property(readonly, copy) NSArray *providers; // @dynamic providers;
- (void)removeProvider:(id)arg1;
- (void)addProvider:(id)arg1;
- (void)dealloc;
- (id)init;

@end
