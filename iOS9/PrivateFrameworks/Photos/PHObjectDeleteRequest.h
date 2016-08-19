//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHDeleteChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString;

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest>
{
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
}

+ (id)deleteRequestForObject:(id)arg1;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initWithXPCDict:(id)arg1 clientEntitled:(_Bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
