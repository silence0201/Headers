//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject
{
    AVAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long currentSize;
@property(nonatomic) long long maxEntrySize;
@property(nonatomic) long long maxSize;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

