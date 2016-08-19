//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUMapAnnotationAnimatable-Protocol.h>

@class NSArray, NSDate, NSMutableSet, NSString, PUMapItem;

__attribute__((visibility("hidden")))
@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable>
{
    unsigned long long _hash;
    PUMapItem *_mapItem;
    unsigned long long _relativeOrder;
    CDStruct_2c43369c _originalCoordinate;
    CDStruct_2c43369c _coordinate;
}

+ (CDUnknownBlockType)annotationSortingComparatorOldestToNewest;
+ (CDUnknownBlockType)annotationSortingComparatorNewestToOldest;
+ (id)compactDescriptionForAnnotations:(id)arg1;
@property(nonatomic) unsigned long long relativeOrder; // @synthesize relativeOrder=_relativeOrder;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (void).cxx_destruct;
- (long long)annotationSortingCompareWithAnnotation:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)_dateString;
- (id)compactDescription;
- (long long)compare:(id)arg1;
- (void)resetCoordinateToOriginal;
- (_Bool)containsAnnotation:(id)arg1;
- (id)newestMaxMapItems:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSMutableSet *subAnnotations;
@property(readonly, nonatomic) NSArray *mapItems;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, retain, nonatomic) NSDate *dateCreated;
@property(readonly, retain, nonatomic) NSObject *itemId;
@property(retain, nonatomic) PUMapItem *mapItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
