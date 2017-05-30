//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableSet, NSString, PHChangeRequestHelper, PHObjectPlaceholder, PHPerson, PHRelationshipChangeRequestHelper;

@interface PHPersonChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    NSMutableArray *_personUUIDsToMerge;
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;
    NSString *_nominalMergeTargetUUID;
    PHPerson *_targetPerson;
    NSString *_identifier;
    PHChangeRequestHelper *_helper;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
    PHRelationshipChangeRequestHelper *_rejectedFacesHelper;
}

+ (id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2;
+ (id)changeRequestForMergingPersons:(id)arg1;
+ (id)_mergeTargetFromPersons:(id)arg1;
+ (void)deletePersons:(id)arg1;
+ (id)changeRequestForPerson:(id)arg1;
+ (id)creationRequestForPerson;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesHelper; // @synthesize rejectedFacesHelper=_rejectedFacesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // @synthesize keyFaceHelper=_keyFaceHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
- (void)mergePersons:(id)arg1;
- (void)_setNominalMergeTargetUUID:(id)arg1;
- (void)convertToVerified;
- (void)removeRejectedFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1;
- (void)addRejectedFaces:(id)arg1 forCluster:(_Bool)arg2;
- (void)setKeyFace:(id)arg1;
- (void)setKeyFace:(id)arg1 forCluster:(_Bool)arg2;
- (void)removeFaces:(id)arg1;
- (void)addFaces:(id)arg1;
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareKeyFaceHelperIfNeeded;
- (void)_prepareRejectedFacesHelperIfNeeded;
- (void)_prepareFacesHelperIfNeeded;
- (id)_existentRejectedFaceObjectIDs;
- (id)_existentFaceObjectIDs;
- (void)didMutate;
- (id)mutations;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (_Bool)canGenerateUUIDLocally;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldSetPersonToVerified:(id)arg1;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property(nonatomic, getter=isVerified) _Bool verified;
@property(nonatomic, getter=isInPersonNamingModel) _Bool inPersonNamingModel;
@property(copy, nonatomic) NSString *personUri;
- (void)setPersonUUID:(id)arg1;
- (id)personUUID;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long manualOrder;
@property(nonatomic) long long type;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
