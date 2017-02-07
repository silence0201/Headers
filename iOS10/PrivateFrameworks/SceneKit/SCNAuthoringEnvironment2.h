//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, SCNGeometry, SCNNode, SCNRenderer, UIColor;

@interface SCNAuthoringEnvironment2 : NSObject
{
    NSMutableSet *_selection;
    struct __C3DScene *_scene;
    SCNNode *_layerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_jointsRoot;
    struct __CFDictionary *_lightsDictionary;
    struct __CFDictionary *_camerasDictionary;
    struct __CFDictionary *_particlesDictionary;
    struct __CFDictionary *_jointsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_jointGeometry;
    long long _displayMask;
    UIColor *_paleGreen;
    UIColor *_paleBlue;
    UIColor *_red;
    UIColor *_green;
    UIColor *_blue;
    UIColor *_cyan;
    UIColor *_yellow;
    UIColor *_orange;
    UIColor *_pink;
    UIColor *_grayLight;
    UIColor *_grayMedium;
    UIColor *_grayDark;
    UIColor *_white;
}

+ (id)authoringEnvironmentForScene:(id)arg1;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
@property long long displayMask;
- (void)updateWithRenderer:(id)arg1;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateJointNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 andRatio:(float)arg4;
- (void)cancelSelection;
- (void)selectNodes:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (void)removeJointNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)addCameraNode:(id)arg1;
- (id)cameraNearPlaneGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (void)addJointNode:(id)arg1;
- (id)jointGeometry;
- (void)addParticlesNode:(id)arg1;
- (id)particlesGeometry;
- (void)addLightNode:(id)arg1;
- (id)lightGeometry;
- (void)prepareScene:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

