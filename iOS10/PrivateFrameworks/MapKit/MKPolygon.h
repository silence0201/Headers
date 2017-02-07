//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMultiPoint.h>

#import <MapKit/MKOverlay-Protocol.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay>
{
    struct CLLocationCoordinate2D _centroid;
    NSArray *_interiorPolygons;
    _Bool _isDefinitelyConvex;
}

+ (id)_polygonWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)polygonEnclosingMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(nonatomic) _Bool _isDefinitelyConvex; // @synthesize _isDefinitelyConvex;
@property(readonly) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

