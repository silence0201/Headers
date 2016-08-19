//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>
{
    long long _terminalStatus;
    _Bool _didRequestMediaDataOnce;
}

- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1;
- (_Bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isReadyForMoreMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (long long)status;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

