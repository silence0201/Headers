//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMApplicationData, HMDelegateCaller, HMFMessageDispatcher, HMHome, HMRoom, HMThreadSafeMutableArrayCollection, NSArray, NSNumber, NSString, NSUUID;
@protocol HMAccessoryDelegate, OS_dispatch_queue;

@interface HMAccessory : NSObject <NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    _Bool _firmwareUpdateAvailable;
    _Bool _reachable;
    _Bool _discoveredBridgeableAccessory;
    _Bool _bridgedAccessory;
    _Bool _blocked;
    _Bool _bridgeSupportsConfiguration;
    _Bool _paired;
    NSUUID *_uniqueIdentifier;
    id <HMAccessoryDelegate> _delegate;
    NSString *_name;
    HMHome *_home;
    HMRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_firmwareVersion;
    NSString *_serialNumber;
    NSString *_bundleID;
    NSString *_storeID;
    NSArray *_uniqueIdentifiersForBridgedAccessories;
    NSArray *_uniqueIdentifiersForBridgeAccessories;
    HMAccessoryCategory *_category;
    HMApplicationData *_applicationData;
    unsigned long long _transportTypes;
    unsigned long long _additionalSetupStatus;
    NSNumber *_accessoryFlags;
    HMFMessageDispatcher *_msgDispatcher;
    long long _reachableTransports;
    HMThreadSafeMutableArrayCollection *_currentServices;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMThreadSafeMutableArrayCollection *_accessories;
    NSUUID *_uuid;
    HMDelegateCaller *_delegateCaller;
    HMThreadSafeMutableArrayCollection *_accessoryProfiles;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *accessoryProfiles; // @synthesize accessoryProfiles=_accessoryProfiles;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMThreadSafeMutableArrayCollection *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(copy, nonatomic) HMThreadSafeMutableArrayCollection *currentServices; // @synthesize currentServices=_currentServices;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) long long reachableTransports; // @synthesize reachableTransports=_reachableTransports;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
@property(nonatomic) unsigned long long additionalSetupStatus; // @synthesize additionalSetupStatus=_additionalSetupStatus;
@property(nonatomic) unsigned long long transportTypes; // @synthesize transportTypes=_transportTypes;
@property(nonatomic) _Bool bridgeSupportsConfiguration; // @synthesize bridgeSupportsConfiguration=_bridgeSupportsConfiguration;
@property(nonatomic) _Bool discoveredBridgeableAccessory; // @synthesize discoveredBridgeableAccessory=_discoveredBridgeableAccessory;
@property(nonatomic) _Bool firmwareUpdateAvailable; // @synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable;
- (void).cxx_destruct;
- (id)_privateDelegate;
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAccessoryCategoryChanged:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleBridgeStatusNotification:(id)arg1;
- (_Bool)_updateFromAccessory:(id)arg1;
- (void)_identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)updateAccessoryInfo:(id)arg1;
- (void)_handleAccessoryFlagsChanged:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleRenamed:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(_Bool)arg2;
- (void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)_findService:(id)arg1;
- (void)_copyFrom:(id)arg1;
- (void)_setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (void)_updateRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)_configureMessageDispatcher:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_unconfigure;
- (void)_configureClientQueue:(id)arg1;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 configCompletionQueue:(id)arg5 configCompletion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)queryAdvertisementInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isAdditionalSetupRequired;
- (_Bool)isFirmwareUpdateAvailable;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSString *storeID; // @synthesize storeID=_storeID;
- (id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2;
- (id)_accessoryInformationService;
@property(retain) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain) NSString *model; // @synthesize model=_model;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property(copy, nonatomic) NSArray *uniqueIdentifiersForBridgeAccessories; // @synthesize uniqueIdentifiersForBridgeAccessories=_uniqueIdentifiersForBridgeAccessories;
@property(copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // @synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories;
@property(nonatomic) _Bool bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property(readonly, nonatomic, getter=isBridged) _Bool bridged;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) __weak id <HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_configureProfilesWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4;
- (void)_createCameraProfiles:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *cameraProfiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

