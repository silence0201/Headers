//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRContextState, MRImage, MRImageManager, MRShader, NSMutableDictionary;
@protocol MZMediaManagement;

@interface MRContext : NSObject
{
    MRContext *mBaseContext;
    struct _CGLContextObject *mGLContext;
    struct _CGLPixelFormatObject *mCGLPixelFormat;
    struct CGPoint mPixelOffset;
    struct CGSize mPixelSize;
    unsigned long long mVRAM;
    int mMaxTextureSize;
    float mFieldOfViewFactor;
    float mProjectionMatrix[16];
    float mProjectionMatrixWithOrientationCorrection[16];
    int mOrientation;
    id <MZMediaManagement> mAssetManager;
    MRImageManager *mImageManager;
    BOOL mIsLocalContext;
    BOOL mIsFlipped;
    MRContextState *mOuterState;
    MRContextState *mInnerState;
    NSMutableDictionary *mVertexAttributes;
    BOOL mCurrentVBOWasUpdated;
    BOOL mForceShaderUpdate;
    float mLocalAspectRatio;
    int mScissorRect[4];
    MRShader *mCurrentShader;
    MRImage *mTextureUnitImages[4];
    unsigned int mActiveTextureUnit;
    int mRenderBuffer;
    MRImage *mBlackImage;
    BOOL _meshIsBound;
    int _dimensionalMode;
}

@property(nonatomic) int dimensionalMode; // @synthesize dimensionalMode=_dimensionalMode;
@property(readonly) int maxTextureSize; // @synthesize maxTextureSize=mMaxTextureSize;
@property(readonly, nonatomic) unsigned long long vram; // @synthesize vram=mVRAM;
@property(readonly) struct _CGLContextObject *glContext; // @synthesize glContext=mGLContext;
@property(nonatomic) BOOL isFlipped; // @synthesize isFlipped=mIsFlipped;
@property(nonatomic) int orientation; // @synthesize orientation=mOrientation;
@property(nonatomic) float localAspectRatio; // @synthesize localAspectRatio=mLocalAspectRatio;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(nonatomic) struct CGPoint pixelOffset; // @synthesize pixelOffset=mPixelOffset;
@property(readonly) MRImageManager *imageManager; // @synthesize imageManager=mImageManager;
@property(retain) id <MZMediaManagement> assetManager; // @synthesize assetManager=mAssetManager;
@property(readonly) MRContext *baseContext; // @synthesize baseContext=mBaseContext;
- (BOOL)supportsMirroredRepeatForImage:(id)arg1;
- (void)drawLinesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)drawTrianglesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)drawTriangleFanFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)drawIndexedTriangleStrip:(const unsigned short *)arg1 count:(unsigned long long)arg2;
- (void)drawTriangleStripFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)unbindMesh;
- (void)bindMesh;
- (unsigned int)bindBuffer:(unsigned int)arg1;
- (void)uploadBuffer:(void *)arg1 withSize:(int)arg2 toVertexBuffer2D:(unsigned int)arg3 usage:(unsigned int)arg4;
- (void)deleteVBO:(unsigned int)arg1;
- (unsigned int)createVBO;
- (void)unsetVertexAttributePointerForKey:(id)arg1;
- (void)unsetInSpriteCoordinatesPointer;
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned long long)arg1;
- (void)unsetColorsPointer;
- (void)unsetNormalsPointer;
- (void)unsetVertexPointer;
- (void)setVertexAttributePointer:(const float *)arg1 ofSize:(unsigned long long)arg2 forKey:(id)arg3;
- (void)setInSpriteCoordinatesPointer:(const float *)arg1;
- (void)setTextureCoordinatesPointer:(const float *)arg1 onTextureUnit:(unsigned long long)arg2;
- (void)setColorsPointer:(const float *)arg1;
- (void)setNormalsPointer:(const float *)arg1;
- (void)setVertex3DPointer:(const float *)arg1;
- (void)setVertex2DPointer:(const float *)arg1;
- (void)setVertexPointer:(float *)arg1 flags:(unsigned short)arg2;
- (void)setVertexBuffer2D:(unsigned int)arg1 withFeatures:(unsigned long long)arg2;
- (void)setVertexBuffer2D:(unsigned int)arg1 withStride:(unsigned long long)arg2 inSpriteCoordinatesOffset:(unsigned long long)arg3 texture0CoordinatesOffset:(unsigned long long)arg4;
- (void)setTextureMatrix:(float [16])arg1 onTextureUnit:(unsigned long long)arg2;
- (void)setNormal:(float)arg1:(float)arg2:(float)arg3;
- (void)restoreModelViewMatrix:(float [16])arg1;
- (void)translateModelViewMatrixByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 saveTo:(float *)arg4;
- (void)composeModelViewMatrix:(float [16])arg1 saveTo:(float *)arg2;
- (void)setModelViewMatrix:(float [16])arg1 saveTo:(float *)arg2;
@property(readonly, nonatomic) const float *modelViewMatrix;
@property(readonly, nonatomic) const float *projectionMatrix;
- (void)setShaderUniformMat4:(float [16])arg1 forKey:(id)arg2;
- (void)setShaderUniformMat3:(float [16])arg1 forKey:(id)arg2;
- (void)setShaderUniformVec4:(float)arg1:(float)arg2:(float)arg3:(float)arg4 forKey:(id)arg5;
- (void)setShaderUniformVec3:(float)arg1:(float)arg2:(float)arg3 forKey:(id)arg4;
- (void)setShaderUniformVec2:(float)arg1:(float)arg2 forKey:(id)arg3;
- (void)setShaderUniformFloat:(float)arg1 forKey:(id)arg2;
- (void)setShaderUniformInt:(int)arg1 forKey:(id)arg2;
- (void)unsetShader;
- (void)setShader:(id)arg1;
- (BOOL)shaderIsSet;
- (void)_commitOuterToInner;
- (BOOL)commitShaderChange;
- (void)snapshotWithTextureName:(int)arg1 offset:(struct CGPoint)arg2 size:(struct CGSize)arg3;
- (void)_updateTextureOnUnit:(unsigned long long)arg1;
- (id)imageSetOnTextureUnit:(unsigned long long)arg1;
- (void)unsetImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const CDStruct_2920cfb7 *)arg3;
- (void)setImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(CDStruct_2920cfb7 *)arg4;
- (void)restoreBackColor:(const float *)arg1;
- (void)setBackColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float *)arg5;
- (void)setBackColor:(const float *)arg1 saveTo:(float *)arg2;
@property(readonly, nonatomic) const float *backColor;
- (void)restoreForeColor:(const float *)arg1;
- (void)composeForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float *)arg5;
- (void)composeForeColor:(const float *)arg1 saveTo:(float *)arg2;
- (void)setForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float *)arg5;
- (void)setForeColor:(const float *)arg1 saveTo:(float *)arg2;
@property(readonly, nonatomic) BOOL foreColorIsOpaqueWhite;
@property(readonly, nonatomic) const float *foreColor;
- (void)restoreScissorRect:(const int *)arg1;
- (void)setScissorRect:(const int *)arg1 saveTo:(int *)arg2;
- (void)clear:(int)arg1;
- (void)depthTest:(BOOL)arg1;
- (void)cull:(int)arg1;
- (void)blend:(int)arg1;
- (id)retainedByUserBlackImage;
- (id)retainedByUserImageByEndingLocalContext:(id)arg1 andRestoreState:(const CDStruct_02fb8bfc *)arg2;
- (id)beginLocalContextWithSize:(struct CGSize)arg1 backgroundColor:(const float *)arg2 state:(CDStruct_02fb8bfc *)arg3;
- (void)purgeResources:(BOOL)arg1;
- (void)flush;
- (void)startFrame;
- (CDStruct_3e356df7)clippedSizeWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned int maxDimension;
@property(readonly, nonatomic) unsigned long long virtualScreen;
@property(readonly, nonatomic) BOOL isDoubleBuffered;
@property(readonly) struct CGColorSpace *monochromaticColorSpace;
@property(readonly) struct CGColorSpace *colorSpace;
@property(readonly, nonatomic) float aspectRatio;
@property(readonly, nonatomic) struct CGSize size;
- (void)_computeProjectionMatrixWithOrientationCorrection;
- (void)updateGeometry;
- (void)unlock;
- (void)lock;
@property(readonly) struct _CGLPixelFormatObject *cglPixelFormat;
- (void)cleanup;
- (void)dealloc;
- (id)initLocalWithContext:(id)arg1 texture:(id)arg2 andSize:(struct CGSize)arg3;
- (id)initLocalWithContext:(id)arg1 glContext:(struct _CGLContextObject *)arg2 andSize:(struct CGSize)arg3;
- (id)initWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 andAssetManager:(id)arg3;

@end
