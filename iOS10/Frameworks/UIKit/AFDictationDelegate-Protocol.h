//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class AFDictationConnection, NSArray, NSError, NSFileHandle, NSString;

@protocol AFDictationDelegate <NSObject>

@optional
- (void)dictationConnection:(AFDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didFinishWritingAudioFile:(NSFileHandle *)arg2 error:(NSError *)arg3;
- (void)dictationConnnectionDidChangeAvailability:(AFDictationConnection *)arg1;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTranscriptionObjects:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(AFDictationConnection *)arg1;
- (void)dictationConnection:(AFDictationConnection *)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTokens:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(AFDictationConnection *)arg1;
@end

