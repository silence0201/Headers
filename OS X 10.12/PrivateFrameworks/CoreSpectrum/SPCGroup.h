//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSArray, NSMutableArray;

@interface SPCGroup : SPCObject
{
    NSMutableArray *_childItemStorage;
    NSArray *_childItemCache;
}

@property(retain) NSArray *childItemCache; // @synthesize childItemCache=_childItemCache;
@property(retain) NSMutableArray *childItemStorage; // @synthesize childItemStorage=_childItemStorage;
- (void)removeChildItem:(id)arg1;
- (void)insertChildItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildItem:(id)arg1;
@property(readonly) NSArray *childItems;
- (void)dealloc;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end
