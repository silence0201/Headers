//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeltaCreationMarker, DeltaDeletionMarker, DeltaMoveBackpointerMarker, DeltaMoveForwardMarker, DeltaOrdinaryMarker;

@interface DeltaClassifier : NSObject
{
    DeltaCreationMarker *_creationMarker;
    DeltaMoveForwardMarker *_moveMarker;
    DeltaMoveBackpointerMarker *_movedObjectMarker;
    DeltaDeletionMarker *_deletedObject;
    DeltaOrdinaryMarker *_ordinaryObject;
}

+ (id)classifier;
@property(retain, nonatomic) DeltaOrdinaryMarker *ordinaryObject; // @synthesize ordinaryObject=_ordinaryObject;
@property(retain, nonatomic) DeltaDeletionMarker *deletedObject; // @synthesize deletedObject=_deletedObject;
@property(retain, nonatomic) DeltaMoveBackpointerMarker *movedObjectMarker; // @synthesize movedObjectMarker=_movedObjectMarker;
@property(retain, nonatomic) DeltaMoveForwardMarker *moveMarker; // @synthesize moveMarker=_moveMarker;
@property(retain, nonatomic) DeltaCreationMarker *creationMarker; // @synthesize creationMarker=_creationMarker;
- (void)dealloc;
- (id)replicateAllMarkersOfItemAtPath:(id)arg1;
- (id)replicateAllMarkersOfItemAtMarker:(id)arg1;
- (id)replicateMarkerDictionary:(id)arg1;
- (id)getAllMarkersOfItemAtPath:(id)arg1;
- (id)getAllMarkersOfItemAtMarker:(id)arg1;
- (id)getMarkerOfItemAtPath:(id)arg1;
- (id)init;

@end

