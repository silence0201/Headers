//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/RPPreviewViewControllerDelegate-Protocol.h>
#import <ReplayKit/UINavigationControllerDelegate-Protocol.h>
#import <ReplayKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSDate, NSString, RPBroadcastController, RPPipViewController, RPSystemRecordingIndicatorWindow, UIView, UIWindow;
@protocol RPScreenRecorderDelegate;

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _available;
    _Bool _recording;
    _Bool _microphoneEnabled;
    _Bool _cameraEnabled;
    _Bool _broadcasting;
    _Bool _systemRecording;
    _Bool _hasUserConsentForCamera;
    _Bool _hasUserConsentForMicrophone;
    _Bool _paused;
    int _processIDForAudioCapture;
    id <RPScreenRecorderDelegate> _delegate;
    UIView *_cameraPreviewView;
    unsigned long long _previousAudioSessionOptions;
    NSString *_previousAudioCategory;
    UIWindow *_windowToRecord;
    RPPipViewController *_pipViewController;
    CDUnknownBlockType _saveVideoToCameraRollCompletionBlock;
    NSDate *_systemRecordingControlCenterStartClipStartTime;
    NSDate *_systemRecordingControlCenterStartClipEndTime;
    NSDate *_systemRecordingControlCenterEndClipStartTime;
    NSDate *_systemRecordingControlCenterEndClipEndTime;
    RPSystemRecordingIndicatorWindow *_systemRecordingIndicatorWindow;
    RPBroadcastController *_activeBroadcastController;
}

+ (id)sharedRecorder;
@property(nonatomic, setter=updateProcessIDForAudioCapture:) int processIDForAudioCapture; // @synthesize processIDForAudioCapture=_processIDForAudioCapture;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) RPBroadcastController *activeBroadcastController; // @synthesize activeBroadcastController=_activeBroadcastController;
@property(nonatomic) _Bool hasUserConsentForMicrophone; // @synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForCamera; // @synthesize hasUserConsentForCamera=_hasUserConsentForCamera;
@property(retain, nonatomic) RPSystemRecordingIndicatorWindow *systemRecordingIndicatorWindow; // @synthesize systemRecordingIndicatorWindow=_systemRecordingIndicatorWindow;
@property(retain, nonatomic) NSDate *systemRecordingControlCenterEndClipEndTime; // @synthesize systemRecordingControlCenterEndClipEndTime=_systemRecordingControlCenterEndClipEndTime;
@property(retain, nonatomic) NSDate *systemRecordingControlCenterEndClipStartTime; // @synthesize systemRecordingControlCenterEndClipStartTime=_systemRecordingControlCenterEndClipStartTime;
@property(retain, nonatomic) NSDate *systemRecordingControlCenterStartClipEndTime; // @synthesize systemRecordingControlCenterStartClipEndTime=_systemRecordingControlCenterStartClipEndTime;
@property(retain, nonatomic) NSDate *systemRecordingControlCenterStartClipStartTime; // @synthesize systemRecordingControlCenterStartClipStartTime=_systemRecordingControlCenterStartClipStartTime;
@property(copy, nonatomic) CDUnknownBlockType saveVideoToCameraRollCompletionBlock; // @synthesize saveVideoToCameraRollCompletionBlock=_saveVideoToCameraRollCompletionBlock;
@property(retain, nonatomic) RPPipViewController *pipViewController; // @synthesize pipViewController=_pipViewController;
@property(retain, nonatomic) UIWindow *windowToRecord; // @synthesize windowToRecord=_windowToRecord;
@property(nonatomic) _Bool systemRecording; // @synthesize systemRecording=_systemRecording;
@property(nonatomic) _Bool broadcasting; // @synthesize broadcasting=_broadcasting;
@property(retain, nonatomic) NSString *previousAudioCategory; // @synthesize previousAudioCategory=_previousAudioCategory;
@property(nonatomic) unsigned long long previousAudioSessionOptions; // @synthesize previousAudioSessionOptions=_previousAudioSessionOptions;
@property(retain, nonatomic) UIView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(nonatomic, getter=isCameraEnabled) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic) __weak id <RPScreenRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isScreenRecordingAllowed;
- (_Bool)_isScreenRecordingSupportedOnDevice;
- (void)updateRecordingAvailability;
- (void)notifyDelegateOfRecorderAvailability;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)clientDidBecomeActive;
- (void)clientWillResignActive;
- (void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (void)restoreAudioSession;
- (void)configureAudioSession;
- (void)video:(id)arg1 didFinishSavingToCameraRollWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)stopRecordingWithVideoURLHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingAndSaveToCameraRoll:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)stopBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)_startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 streamingEnabled:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 streamingEnabled:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)startBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 windowToRecord:(id)arg2 systemRecording:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)setWindowRotationLocked:(_Bool)arg1;
- (unsigned int)currentWindowLayerContextID;
- (struct CGSize)currentWindowSize;
- (id)applicationWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

