//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MSVMessageParserDelegate-Protocol.h>
#import <MediaRemote/NSStreamDelegate-Protocol.h>

@class MRCryptoPairingSession, MRTelevisionMessageQueue, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, NSString;
@protocol MRTelevisionClientConnectionDelegate;

@interface MRTelevisionClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate>
{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRTelevisionMessageQueue *_messageQueue;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    _Bool _disconnected;
    _Bool _useSSL;
    _Bool _registeredToNowPlayingUpdates;
    _Bool _registeredToNowPlayingArtworkUpdates;
    _Bool _registeredVolumeControlAvailabilityUpdates;
    _Bool _registeredKeyboardUpdates;
    unsigned int _voiceRecordingState;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id <MRTelevisionClientConnectionDelegate> _delegate;
    MRCryptoPairingSession *_cryptoSession;
}

@property(retain, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property(nonatomic) id <MRTelevisionClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;
@property(nonatomic) _Bool registeredKeyboardUpdates; // @synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates;
@property(nonatomic) _Bool registeredVolumeControlAvailabilityUpdates; // @synthesize registeredVolumeControlAvailabilityUpdates=_registeredVolumeControlAvailabilityUpdates;
@property(nonatomic) _Bool registeredToNowPlayingArtworkUpdates; // @synthesize registeredToNowPlayingArtworkUpdates=_registeredToNowPlayingArtworkUpdates;
@property(nonatomic) _Bool registeredToNowPlayingUpdates; // @synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates;
@property(nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void)_disconnectClient;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_adjustTimestamp:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_openStream:(id)arg1;
- (void)_flush;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1;
- (void)forceDisconnect;
@property(readonly, nonatomic) _Bool streamsAreValid;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

