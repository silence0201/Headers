//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying>
{
    NSMutableArray *_responses;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

+ (Class)responseType;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)responseAtIndex:(unsigned long long)arg1;
- (unsigned long long)responsesCount;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)dealloc;

@end

