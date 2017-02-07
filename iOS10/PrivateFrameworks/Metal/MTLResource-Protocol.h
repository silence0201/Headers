//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLHeap;

@protocol MTLResource <NSObject>
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (_Bool)isAliasable;
- (void)makeAliasable;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@end

