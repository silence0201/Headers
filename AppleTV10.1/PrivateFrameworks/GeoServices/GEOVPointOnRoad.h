//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOVPointOnRoad : PBCodable <NSCopying>
{
    int _featureIndex;
    int _vertexIndex;
    struct {
        unsigned int vertexIndex:1;
    } _has;
}

@property(nonatomic) int vertexIndex; // @synthesize vertexIndex=_vertexIndex;
@property(nonatomic) int featureIndex; // @synthesize featureIndex=_featureIndex;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVertexIndex;

@end

