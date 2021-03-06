//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSString;

@interface MNSettings : NSObject <NSSecureCoding>
{
    unsigned long long _voiceVolume;
    unsigned long long _distanceUnits;
    _Bool _pauseSpokenAudio;
    _Bool _muteSpeechOverride;
    _Bool _speechEnabled;
    _Bool _drivingVoiceGuidance;
    _Bool _walkingVoiceGuidance;
    _Bool _beepBeforeInstruction;
    NSString *_voiceLanguage;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _backgroundTimeWindow;
    long long _fakeTrafficIncidentAlert;
    long long _acceptFasterReroute;
    double _alightSignalTimeBuffer;
    double _initialTraceSpeedMultiplier;
    _Bool _shouldLoadInitialRouteFromTrace;
    _Bool _shouldLoadReroutesFromTrace;
    _Bool _shouldLoadETAUpdatesFromTrace;
    _Bool _isTracePlaybackCameraTestMode;
}

+ (_Bool)supportsSecureCoding;
+ (id)_mapsSettings;
@property(readonly, nonatomic) _Bool isTracePlaybackCameraTestMode; // @synthesize isTracePlaybackCameraTestMode=_isTracePlaybackCameraTestMode;
@property(readonly, nonatomic) _Bool shouldLoadETAUpdatesFromTrace; // @synthesize shouldLoadETAUpdatesFromTrace=_shouldLoadETAUpdatesFromTrace;
@property(readonly, nonatomic) _Bool shouldLoadReroutesFromTrace; // @synthesize shouldLoadReroutesFromTrace=_shouldLoadReroutesFromTrace;
@property(readonly, nonatomic) _Bool shouldLoadInitialRouteFromTrace; // @synthesize shouldLoadInitialRouteFromTrace=_shouldLoadInitialRouteFromTrace;
@property(readonly, nonatomic) double initialTraceSpeedMultiplier; // @synthesize initialTraceSpeedMultiplier=_initialTraceSpeedMultiplier;
@property(readonly, nonatomic) double alightSignalTimeBuffer; // @synthesize alightSignalTimeBuffer=_alightSignalTimeBuffer;
@property(readonly, nonatomic) long long acceptFasterReroute; // @synthesize acceptFasterReroute=_acceptFasterReroute;
@property(readonly, nonatomic) long long fakeTrafficIncidentAlert; // @synthesize fakeTrafficIncidentAlert=_fakeTrafficIncidentAlert;
@property(readonly, nonatomic) double backgroundTimeWindow; // @synthesize backgroundTimeWindow=_backgroundTimeWindow;
@property(readonly, nonatomic) double initialRequestDelay; // @synthesize initialRequestDelay=_initialRequestDelay;
@property(readonly, nonatomic) double etaRequestInterval; // @synthesize etaRequestInterval=_etaRequestInterval;
@property(readonly, nonatomic) NSString *voiceLanguage; // @synthesize voiceLanguage=_voiceLanguage;
@property(readonly, nonatomic) _Bool beepBeforeInstruction; // @synthesize beepBeforeInstruction=_beepBeforeInstruction;
@property(readonly, nonatomic) _Bool walkingVoiceGuidance; // @synthesize walkingVoiceGuidance=_walkingVoiceGuidance;
@property(readonly, nonatomic) _Bool drivingVoiceGuidance; // @synthesize drivingVoiceGuidance=_drivingVoiceGuidance;
@property(readonly, nonatomic) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(readonly, nonatomic) _Bool muteSpeechOverride; // @synthesize muteSpeechOverride=_muteSpeechOverride;
@property(readonly, nonatomic) _Bool pauseSpokenAudio; // @synthesize pauseSpokenAudio=_pauseSpokenAudio;
@property(readonly, nonatomic) unsigned long long distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(readonly, nonatomic) unsigned long long voiceVolume; // @synthesize voiceVolume=_voiceVolume;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

