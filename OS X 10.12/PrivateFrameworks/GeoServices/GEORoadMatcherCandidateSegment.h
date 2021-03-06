//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEORoadMatcherCandidateSegment : NSObject
{
    double _score;
    CDStruct_ffa96740 *_feature;
    CDStruct_2c43369c _coordinateOnSegment;
    double _distanceFromSegment;
    double _segmentAngle;
    CDStruct_3b01f0aa *_junction;
    double _distanceInMetersFromJunction;
}

@property(readonly, nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceInMetersFromJunction;
@property(readonly, nonatomic) CDStruct_3b01f0aa *junction; // @synthesize junction=_junction;
@property(readonly, nonatomic) double segmentAngle; // @synthesize segmentAngle=_segmentAngle;
@property(readonly, nonatomic) double distanceFromSegment; // @synthesize distanceFromSegment=_distanceFromSegment;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinateOnSegment; // @synthesize coordinateOnSegment=_coordinateOnSegment;
@property(readonly, nonatomic) CDStruct_ffa96740 *feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
- (void)dealloc;
- (id)initWithLocationCoordinate:(CDStruct_c3b9c2ee)arg1 angle:(double)arg2 feature:(CDStruct_ffa96740 *)arg3 startCoordinate:(CDStruct_c3b9c2ee)arg4 endCoordinate:(CDStruct_c3b9c2ee)arg5 startJunction:(CDStruct_3b01f0aa *)arg6 endJunction:(CDStruct_3b01f0aa *)arg7 startJunctionCoordinate:(CDStruct_c3b9c2ee)arg8 endJunctionCoordinate:(CDStruct_c3b9c2ee)arg9 roadHalfWidth:(double)arg10;

@end

