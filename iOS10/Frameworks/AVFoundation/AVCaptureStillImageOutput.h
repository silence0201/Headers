//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal *_internal;
}

+ (struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void *)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (void)initialize;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(_Bool *)arg3;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(_Bool)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (_Bool)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (_Bool)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id *)arg3;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(_Bool)arg1;
- (_Bool)isLensStabilizationDuringBracketedCaptureEnabled;
- (_Bool)isLensStabilizationDuringBracketedCaptureSupported;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (id)firstActiveConnection;
@property(readonly, getter=isCapturingStillImage) _Bool capturingStillImage;
- (_Bool)resumeVideoProcessing;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(_Bool)arg1;
- (_Bool)suspendsVideoProcessingDuringStillImageCapture;
- (void)setShutterSound:(unsigned int)arg1;
- (unsigned int)shutterSound;
- (void)setRawCaptureEnabled:(_Bool)arg1;
- (_Bool)isRawCaptureEnabled;
- (_Bool)isRawCaptureSupported;
- (void)setNoiseReductionEnabled:(_Bool)arg1;
- (_Bool)isNoiseReductionEnabled;
- (_Bool)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
@property(nonatomic, getter=isHighResolutionStillImageOutputEnabled) _Bool highResolutionStillImageOutputEnabled;
@property(nonatomic) _Bool automaticallyEnablesStillImageStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isStillImageStabilizationActive) _Bool stillImageStabilizationActive;
@property(readonly, nonatomic, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
- (void)setEV0CaptureEnabled:(_Bool)arg1;
- (_Bool)isEV0CaptureEnabled;
- (void)setHDRMode:(long long)arg1;
- (long long)HDRMode;
- (_Bool)isHDRSupported;
- (unsigned int)imageDataFormatType;
- (void)setPreviewImageSize:(struct CGSize)arg1;
- (struct CGSize)previewImageSize;
- (void)setSquareCropEnabled:(_Bool)arg1;
- (_Bool)squareCropEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property(copy, nonatomic) NSDictionary *outputSettings;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)clearPreparedBracketIfNeeded;
- (void)updateSISSupportedForSourceDevice:(id)arg1;
- (void)dealloc;
- (id)init;

@end

