//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAsset;

@interface _ISPlayerItemChefOperation : NSOperation
{
    _Bool _includeVideo;
    _Bool _includeAudio;
    AVAsset *_asset;
    CDUnknownBlockType _resultHandler;
    CDStruct_e83c9415 _trimmedTimeRange;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) _Bool includeAudio; // @synthesize includeAudio=_includeAudio;
@property(readonly, nonatomic) _Bool includeVideo; // @synthesize includeVideo=_includeVideo;
@property(readonly, nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleValuesDidLoad;
- (void)main;
- (id)initWithAsset:(id)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 includeAudio:(_Bool)arg3 includeVideo:(_Bool)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

