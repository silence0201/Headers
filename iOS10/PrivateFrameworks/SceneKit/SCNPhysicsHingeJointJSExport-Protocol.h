//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsHingeJointJSExport <JSExport>
+ (id)jointWithBody:(SCNPhysicsBody *)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(SCNPhysicsBody *)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
@property(nonatomic) struct SCNVector3 anchorB;
@property(nonatomic) struct SCNVector3 axisB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(nonatomic) struct SCNVector3 axisA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
@end

