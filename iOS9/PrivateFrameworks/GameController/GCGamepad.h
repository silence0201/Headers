//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCGamepad : NSObject
{
}

+ (_Bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (id)saveSnapshot;
@property(readonly, nonatomic) GCControllerButtonInput *rightShoulder;
@property(readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property(readonly, nonatomic) GCControllerButtonInput *buttonY;
@property(readonly, nonatomic) GCControllerButtonInput *buttonX;
@property(readonly, nonatomic) GCControllerButtonInput *buttonB;
@property(readonly, nonatomic) GCControllerButtonInput *buttonA;
- (id)button3;
- (id)button2;
- (id)button1;
- (id)button0;
@property(readonly, nonatomic) GCControllerDirectionPad *dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property(readonly, nonatomic) __weak GCController *controller;
- (id)initWithController:(id)arg1;

@end

