//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/GCExtendedGamepad.h>

#import <GameController/GCNamedProfile-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

@interface _GCExtendedGamepad : GCExtendedGamepad <GCNamedProfile, NSSecureCoding>
{
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerDirectionPad *_leftThumbstick;
    _GCControllerDirectionPad *_rightThumbstick;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
    _GCControllerButtonInput *_leftTrigger;
    _GCControllerButtonInput *_rightTrigger;
    _Bool _dpadFlippedY;
    _Bool _leftFlippedY;
    _Bool _rightFlippedY;
}

+ (_Bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;
+ (_Bool)supportsSecureCoding;
- (id)rightTrigger;
- (id)leftTrigger;
- (id)rightThumbstick;
- (id)leftThumbstick;
- (id)rightShoulder;
- (id)leftShoulder;
- (id)buttonY;
- (id)buttonX;
- (id)buttonB;
- (id)buttonA;
- (id)dpad;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (id)controller;
- (void).cxx_destruct;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2 leftFlippedY:(_Bool)arg3 rightFlippedY:(_Bool)arg4;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

