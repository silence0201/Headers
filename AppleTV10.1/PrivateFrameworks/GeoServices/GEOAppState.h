//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion;

@interface GEOAppState : PBCodable <NSCopying>
{
    double _zoomLevel;
    GEOMapRegion *_mapRegion;
    _Bool _transitNotAvailableAdvisoryShowing;
    struct {
        unsigned int zoomLevel:1;
        unsigned int transitNotAvailableAdvisoryShowing:1;
    } _has;
}

@property(nonatomic) _Bool transitNotAvailableAdvisoryShowing; // @synthesize transitNotAvailableAdvisoryShowing=_transitNotAvailableAdvisoryShowing;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTransitNotAvailableAdvisoryShowing;
@property(nonatomic) _Bool hasZoomLevel;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (void)dealloc;

@end

