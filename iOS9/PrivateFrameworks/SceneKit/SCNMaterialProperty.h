//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSString, SCNOrderedDictionary, UIColor;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;
    unsigned int _isCommonProfileProperty:1;
    id _parent;
    int _propertyType;
    NSString *_customSlotName;
    SCNOrderedDictionary *_animations;
    UIColor *_borderColor;
    unsigned char _contentType;
    id _contents;
    long long _mappingChannel;
    float _intensity;
    float _maxAnisotropy;
    long long _minificationFilter;
    long long _magnificationFilter;
    long long _mipFilter;
    long long _wrapS;
    long long _wrapT;
    struct __C3DEffectSlot *_customSlot;
    struct __C3DImage *_c3dImage;
    struct __C3DTextureProxy *_textureProxy;
    struct SCNMatrix4 *_contentTransform;
}

+ (_Bool)supportsSecureCoding;
+ (id)copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (id)_copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 autoCubemap:(_Bool)arg2;
+ (struct __C3DImage *)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2;
+ (id)materialPropertyWithContents:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
- (void)_updateMaterialColor:(id)arg1;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialMTLTexture:(id)arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_layerDidChange:(id)arg1;
- (void)_updateMaterialAttachment:(id)arg1;
-     // Error parsing type: v80@0:8(C3DMatrix4x4=[16f][4])16, name: _updateMaterialPropertyTransform:
- (void)_updateMaterialFilters;
- (void)_updateMaterialBorderColor:(id)arg1;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterialProperty;
- (void)copyPropertiesFrom:(id)arg1;
- (void)_syncObjCModel;
- (struct __C3DScene *)sceneRef;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DTextureSampler *)textureSampler;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (struct __C3DEffectSlot *)effectSlot;
- (id)parent;
- (void)parentWillDie:(id)arg1;
@property(readonly, copy) NSString *description;
- (int)propertyType;
- (id)slotName;
@property(nonatomic) struct SCNMatrix4 contentsTransform;
- (id)mtlTexture;
- (void)setMtlTexture:(id)arg1;
- (id)proceduralContents;
- (void)setProceduralContents:(id)arg1;
@property(nonatomic) double maxAnisotropy;
- (id)content;
- (void)setContent:(id)arg1;
@property(retain, nonatomic) id contents;
- (void)setUIWindow:(id)arg1;
- (id)UIView;
- (void)setUIView:(id)arg1;
- (void)_updateMaterialUIComponent:(id)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)skTexture;
- (void)setSkTexture:(id)arg1;
- (id)skScene;
- (void)setSkScene:(id)arg1;
- (id)pvrtcData;
- (id)image;
- (void)setImage:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (_Bool)_supportsCubeMaps;
@property(nonatomic) long long wrapT;
@property(nonatomic) long long wrapS;
@property(retain, nonatomic) id borderColor;
@property(nonatomic) double intensity;
@property(nonatomic) long long mappingChannel;
- (long long)_presentationMappingChannel;
@property(nonatomic) long long mipFilter;
@property(nonatomic) long long magnificationFilter;
@property(nonatomic) long long minificationFilter;
- (struct C3DColor4)borderColor4;
- (struct C3DColor4)color4;
- (struct __C3DImage *)getC3DImageRef;
- (void)_setC3DImageRef:(struct __C3DImage *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setColor:(id)arg1;
- (void)_clearContents;
- (id)_animationPathForKey:(id)arg1;
- (struct __C3DEffectSlot *)effectSlotCreateIfNeeded:(_Bool)arg1;
- (void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (void)unlinkCustomPropertyWithParent:(id)arg1;
- (void)_setParent:(id)arg1;
- (void)dealloc;
- (void)__allocateContentTransformIfNeeded;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 propertyType:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

