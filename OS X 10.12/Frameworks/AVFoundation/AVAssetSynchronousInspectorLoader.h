//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader
{
    AVAssetInspector *_assetInspector;
}

- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)lyrics;
- (CDStruct_1b6d18a9)duration;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)assetInspector;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAssetInspector:(id)arg1;

@end
