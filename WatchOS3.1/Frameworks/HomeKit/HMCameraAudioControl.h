//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraAudioControl;

@interface HMCameraAudioControl : HMCameraControl
{
    _HMCameraAudioControl *_audioControl;
}

@property(retain, nonatomic) _HMCameraAudioControl *audioControl; // @synthesize audioControl=_audioControl;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMCharacteristic *volume;
@property(readonly, nonatomic) HMCharacteristic *mute;
- (id)initWithAudioControl:(id)arg1;

@end
