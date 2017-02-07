//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUParameterTree, AUV2BridgeBusArray, NSObject;
@protocol OS_dispatch_queue;

@interface AUAudioUnitV2Bridge : AUAudioUnit
{
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase *_eventListener;
    struct AUListenerBase *_parameterListener;
    _Bool _removingObserverWithContext;
    struct OpaqueAudioComponentInstance *_audioUnit;
    _Bool _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)channelCapabilities;
- (id)parameterTree;
- (void)_createEventListenerQueue;
- (void)reset;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (CDUnknownBlockType)internalRenderBlock;
- (id)outputBusses;
- (id)inputBusses;
- (void)dealloc;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)init2;
- (void)_invalidateParameterTree;
- (void)_addOrRemoveParameterListeners:(_Bool)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(_Bool)arg3;
- (void)_rebuildBusses:(unsigned int)arg1;
- (_Bool)_setElementCount:(unsigned int)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_elementCountWritable:(unsigned int)arg1;
- (unsigned int)_elementCount:(unsigned int)arg1;

@end

