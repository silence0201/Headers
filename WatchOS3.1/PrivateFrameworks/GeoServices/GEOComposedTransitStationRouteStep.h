//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransfer, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep
{
    unsigned int _expectedTime;
    _Bool _isArrivalUncertain;
    GEOTransitTransfer *_transitTransfer;
    GEOTransitEnterExitInfo *_enterExitInfo;
    GEOPBTransitAccessPoint *_accessPoint;
}

@property(readonly, nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(readonly, nonatomic) _Bool isArrivalUncertain; // @synthesize isArrivalUncertain=_isArrivalUncertain;
@property(readonly, nonatomic) GEOTransitTransfer *transitTransfer; // @synthesize transitTransfer=_transitTransfer;
@property(readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
- (CDStruct_c3b9c2ee)endGeoCoordinate;
- (CDStruct_c3b9c2ee)startGeoCoordinate;
@property(readonly, nonatomic) _Bool hasDisplayStop;
@property(readonly, nonatomic) _Bool displayStop;
@property(readonly, nonatomic) NSString *exitSign;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

