//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

@class NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ASDBox : ASDObject
{
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    BOOL _acquired;
    int _acquisitionFailure;
    BOOL _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
    BOOL _hasVideo;
    BOOL _hasAudio;
    BOOL _hasMIDI;
    BOOL _requiresAuthentication;
    BOOL _supportsIdentify;
    BOOL _canSetIdentify;
    BOOL _acquireable;
    BOOL _canChangeBoxName;
    NSString *_boxUID;
    NSString *_modelUID;
    NSString *_manufacturerName;
    NSString *_modelName;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
}

@property(nonatomic) BOOL identify; // @synthesize identify=_identify;
@property(nonatomic) int acquisitionFailure; // @synthesize acquisitionFailure=_acquisitionFailure;
@property(nonatomic) BOOL acquired; // @synthesize acquired=_acquired;
@property(nonatomic) BOOL canChangeBoxName; // @synthesize canChangeBoxName=_canChangeBoxName;
@property(nonatomic, getter=isAcquireable) BOOL acquireable; // @synthesize acquireable=_acquireable;
@property(nonatomic) BOOL canSetIdentify; // @synthesize canSetIdentify=_canSetIdentify;
@property(nonatomic) BOOL supportsIdentify; // @synthesize supportsIdentify=_supportsIdentify;
@property(nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) BOOL hasMIDI; // @synthesize hasMIDI=_hasMIDI;
@property(nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(retain, nonatomic) NSString *modelUID; // @synthesize modelUID=_modelUID;
@property(retain, nonatomic) NSString *boxUID; // @synthesize boxUID=_boxUID;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *devices; // @dynamic devices;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *acquireQueue; // @dynamic acquireQueue;
- (void)identifyBox:(BOOL)arg1;
- (void)acquireBox:(BOOL)arg1 fromHAL:(BOOL)arg2;
- (void)changeBoxName:(id)arg1;
@property(retain, nonatomic) NSString *boxName; // @dynamic boxName;
- (void)removeDevicesFromPlugin;
- (void)addDevicesToPlugin;
- (void)removeAllDevices;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
@property(readonly, nonatomic) unsigned int transportType; // @dynamic transportType;
- (unsigned int)objectClass;
- (id)initWithBoxUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;

@end

