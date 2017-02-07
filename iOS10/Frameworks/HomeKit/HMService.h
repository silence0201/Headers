//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMApplicationData, HMBulletinBoardNotification, HMDelegateCaller, HMFMessageDispatcher, HMThreadSafeMutableArrayCollection, NSArray, NSNumber, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HMService : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    _Bool _userInteractive;
    _Bool _primaryService;
    NSUUID *_uniqueIdentifier;
    HMAccessory *_accessory;
    NSString *_serviceType;
    NSString *_name;
    NSString *_associatedServiceType;
    HMApplicationData *_applicationData;
    HMBulletinBoardNotification *_bulletinBoardNotificationInternal;
    NSURL *_homeObjectURLInternal;
    NSArray *_linkedServiceInstanceIDs;
    HMThreadSafeMutableArrayCollection *_currentCharacteristics;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    NSNumber *_instanceID;
}

+ (id)__localizedDescriptionForServiceType:(id)arg1;
+ (id)localizedDescriptionForServiceType:(id)arg1;
+ (id)_serviceTypeAsString:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) HMThreadSafeMutableArrayCollection *currentCharacteristics; // @synthesize currentCharacteristics=_currentCharacteristics;
@property(readonly, copy, nonatomic) NSArray *linkedServiceInstanceIDs; // @synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs;
@property(readonly, nonatomic, getter=isPrimaryService) _Bool primaryService; // @synthesize primaryService=_primaryService;
@property(readonly, nonatomic, getter=isUserInteractive) _Bool userInteractive; // @synthesize userInteractive=_userInteractive;
- (void).cxx_destruct;
- (_Bool)_hasCharacteristicOfType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (id)_serviceTypeDescription;
- (void)_addCharacteristic:(id)arg1;
- (void)_removeCharacteristic:(id)arg1;
- (_Bool)_hasCharacteristic:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)_handleMarkServiceInteractive:(id)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_findCharacteristic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *linkedServices;
- (id)homeObjectURL;
@property(readonly, nonatomic) NSURL *homeObjectURLInternal; // @synthesize homeObjectURLInternal=_homeObjectURLInternal;
- (id)bulletinBoardNotification;
@property(readonly, nonatomic) HMBulletinBoardNotification *bulletinBoardNotificationInternal; // @synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *characteristics;
@property(copy, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

