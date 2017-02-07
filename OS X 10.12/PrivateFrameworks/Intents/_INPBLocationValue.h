//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class GEOMapItemStorage, GEOPDPlace, PBUnknownFields, _INPBValueMetadata;

@interface _INPBLocationValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_mapItemStorage;
    GEOPDPlace *_place;
    _INPBValueMetadata *_valueMetadata;
}

+ (id)options;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlace;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property(readonly, nonatomic) BOOL hasMapItemStorage;

@end
