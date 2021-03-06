//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class AVPlayerItem, NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderPlayerItemDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation
{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    AVPlayerItem *__resultPlayerItem;
    NSDictionary *__resultInfo;
}

@property(copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // @synthesize _resultInfo=__resultInfo;
@property(retain, nonatomic, setter=_setResultPlayerItem:) AVPlayerItem *_resultPlayerItem; // @synthesize _resultPlayerItem=__resultPlayerItem;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalResultHandler; // @synthesize internalResultHandler=_internalResultHandler;
@property(copy, nonatomic) CDUnknownBlockType externalResultHandler; // @synthesize externalResultHandler=_externalResultHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalProgressHandler; // @synthesize internalProgressHandler=_internalProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType externalProgressHandler; // @synthesize externalProgressHandler=_externalProgressHandler;
- (void).cxx_destruct;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_handleResultPlayerItem:(id)arg1 info:(id)arg2;
- (id)init;

@end

