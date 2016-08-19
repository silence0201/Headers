//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/HKMedicalIDViewControllerDelegate-Protocol.h>

@class CNContact, HKHealthStore, NSString, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate>
{
    long long _medicalIDActionType;
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_healthData;
}

@property(retain, nonatomic) _HKMedicalIDData *healthData; // @synthesize healthData=_healthData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) long long medicalIDActionType; // @synthesize medicalIDActionType=_medicalIDActionType;
- (void).cxx_destruct;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CNContact *contact; // @dynamic contact;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

