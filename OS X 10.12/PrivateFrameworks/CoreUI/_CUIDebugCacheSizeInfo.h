//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _CUIDebugCacheSizeInfo : NSObject <NSCoding>
{
    unsigned long long cacheSize;
    NSSet *keySignatures;
}

@property(readonly) NSSet *keySignatures; // @synthesize keySignatures;
@property(readonly) unsigned long long cacheSize; // @synthesize cacheSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCacheSize:(unsigned long long)arg1 keySignatures:(id)arg2;

@end

