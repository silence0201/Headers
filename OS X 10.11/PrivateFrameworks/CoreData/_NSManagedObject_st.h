//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _NSManagedObject_st : NSObject
{
    int _cd_rc;
    unsigned long long _cd_stateFlags;
    id _cd_rawData;
    id _cd_entity;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    unsigned long long _cd_extraFlags;
    id _cd_observationInfo;
    id *_cd_snapshots;
    unsigned long long _cd_lockingInfo;
    id _cd_queueReference;
}

@end
