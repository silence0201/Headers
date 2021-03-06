//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNMTLShaderBindingsGenerator : NSObject
{
    struct {
        int stage;
        NSArray *arguments;
        NSDictionary *customBlocks;
        struct __C3DFXPass *pass;
    } _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_passBindings;
    NSMutableDictionary *_lightBindings;
    CDStruct_21854d8c _sceneBuffer;
}

+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)deallocateRegistry;
+ (void)allocateRegistry;
- (BOOL)addPassResourceBindingsForArgument:(id)arg1;
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;
- (id)_dictionaryForFrequency:(int)arg1;
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXProgram *)arg3 material:(struct __C3DMaterial *)arg4 geometry:(struct __C3DGeometry *)arg5 pass:(struct __C3DFXPass *)arg6;
- (void)_parseArguments:(id)arg1 stage:(int)arg2;
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

