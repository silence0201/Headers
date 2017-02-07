//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRefinementParameters;

@interface GEOMapItemHandle : PBCodable <NSCopying>
{
    int _handleType;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    struct {
        unsigned int handleType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters; // @synthesize placeRefinementParameters=_placeRefinementParameters;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceRefinementParameters;
- (int)StringAsHandleType:(id)arg1;
- (id)handleTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasHandleType;
@property(nonatomic) int handleType; // @synthesize handleType=_handleType;
- (void)dealloc;

@end
