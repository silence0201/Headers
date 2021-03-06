//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setWritesMediaDataToBeginningOfFile:(_Bool)arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (_Bool)canPerformMultiplePasses;
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setAlternateGroupID:(short)arg1;
- (void)setLayer:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (_Bool)_validateLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (long long)status;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithConfigurationState:(id)arg1;

@end

