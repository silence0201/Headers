//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVB17221AEMEntity, AVB17221Entity, AVBAVDECCController, AVBInterface, NSMutableArray;

@interface AVBAVDECCEntity : NSObject
{
    BOOL _acquired;
    BOOL _connected;
    int _acquireCount;
    NSMutableArray *_interfaces;
    AVB17221AEMEntity *_entityModel;
    AVBInterface *_activeInterface;
    AVB17221Entity *_activeEntity;
    AVBAVDECCController *_entityController;
    struct dispatch_queue_s *_controllerQueue;
    struct dispatch_queue_s *_aecpQueue;
    struct dispatch_semaphore_s *_aecpLimiter;
    struct dispatch_queue_s *_acquireQueue;
    struct dispatch_queue_s *_acmpQueue;
    struct dispatch_semaphore_s *_acmpLimiter;
}

@property(nonatomic) struct dispatch_semaphore_s *acmpLimiter; // @synthesize acmpLimiter=_acmpLimiter;
@property(nonatomic) struct dispatch_queue_s *acmpQueue; // @synthesize acmpQueue=_acmpQueue;
@property(nonatomic) int acquireCount; // @synthesize acquireCount=_acquireCount;
@property(nonatomic) struct dispatch_queue_s *acquireQueue; // @synthesize acquireQueue=_acquireQueue;
@property(nonatomic) struct dispatch_semaphore_s *aecpLimiter; // @synthesize aecpLimiter=_aecpLimiter;
@property(nonatomic) struct dispatch_queue_s *aecpQueue; // @synthesize aecpQueue=_aecpQueue;
@property(nonatomic) struct dispatch_queue_s *controllerQueue; // @synthesize controllerQueue=_controllerQueue;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isAcquired) BOOL acquired; // @synthesize acquired=_acquired;
@property(nonatomic) AVBAVDECCController *entityController; // @synthesize entityController=_entityController;
@property(nonatomic) AVB17221Entity *activeEntity; // @synthesize activeEntity=_activeEntity;
@property(nonatomic) AVBInterface *activeInterface; // @synthesize activeInterface=_activeInterface;
@property(retain, nonatomic) AVB17221AEMEntity *entityModel; // @synthesize entityModel=_entityModel;
@property(retain, nonatomic) NSMutableArray *interfaces; // @synthesize interfaces=_interfaces;
- (void)dealloc;
@property(readonly, nonatomic, getter=isDirectlyConnected) BOOL directlyConnected;
- (BOOL)sendACMPMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)disconnectOutputStreamStateWithUniqueIndex:(unsigned short)arg1 fromListenerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)disconnectInputStreamStateWithUniqueIndex:(unsigned short)arg1 fromTalkerEntityID:(unsigned long long)arg2 uniqueID:(unsigned short)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_disconnectListenerEntityID:(unsigned long long)arg1 uniqueID:(unsigned short)arg2 fromTalkerEntityID:(unsigned long long)arg3 uniqueID:(unsigned short)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (BOOL)getOutputStreamConnectionWithUniqueIndex:(unsigned short)arg1 andConnectionIndex:(unsigned short)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)getOutputStreamStateWithUniqueIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)getInputStreamStateWithUniqueIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)readMemoryObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addressAccessReadAtAddress:(unsigned long long)arg1 ofLength:(unsigned long long)arg2 appendToData:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (BOOL)sendAECPMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)getCountersOfObjectWithType:(unsigned short)arg1 andIndex:(unsigned short)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)getOutputStreamInfoWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)getInputStreamInfoWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setConfiguration:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startOperation:(unsigned short)arg1 onDescriptorOfType:(unsigned short)arg2 andIndex:(unsigned short)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)getControlWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setControlWithIndex:(unsigned short)arg1 toValue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setOutputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setInputStreamWithIndex:(unsigned short)arg1 toStreamFormat:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setIdentifyWithIndex:(unsigned short)arg1 toEnabled:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setClockDomainWithIndex:(unsigned short)arg1 toClockSourceWithIndex:(unsigned short)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setVideoClusterWithIndex:(unsigned short)arg1 toFrameRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setVideoClusterWithIndex:(unsigned short)arg1 toFormatSpecific:(id)arg2 aspectRatio:(id)arg3 videoSize:(id)arg4 andColorSpace:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)setAudioUnitWithIndex:(unsigned short)arg1 toSamplingRate:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)stopOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startOutputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startInputStreamWithIndex:(unsigned short)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (BOOL)deregisterForUnsolicitedNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)registerForUnsolcitiedNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)entityAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)acquireEntityObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 andFlags:(unsigned int)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)relinquish;
- (BOOL)acquire;
- (void)enumerateIfNecessary;
- (void)enumerate;
- (id)entityForInterface:(id)arg1;
- (BOOL)makeNextInterfaceActive;
- (BOOL)makeInterfaceActive:(id)arg1;
- (BOOL)makeFirstInterfaceActive;
- (void)removeInterface:(id)arg1;
- (BOOL)addEntity:(id)arg1 andInterface:(id)arg2;
- (id)initWithEntity:(id)arg1 andInterface:(id)arg2;
- (id)init;

@end

