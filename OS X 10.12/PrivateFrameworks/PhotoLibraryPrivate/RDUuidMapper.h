//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RDUuidMapper : NSObject
{
    NSMutableDictionary *_uuidMap;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _forceUuidMapping;
}

@property BOOL forceUuidMapping; // @synthesize forceUuidMapping=_forceUuidMapping;
- (void).cxx_destruct;
- (id)convertUuids:(id)arg1;
- (id)convertUuid:(id)arg1;
- (void)addMappingForUuid:(id)arg1 toUuid:(id)arg2;
- (void)clear;
- (id)uuidMapIncludingOldUuids;
- (id)uuidMap;
- (id)init;

@end

