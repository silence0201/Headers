//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOResourceFilter : PBCodable <NSCopying>
{
    CDStruct_95bda58d _scales;
    CDStruct_95bda58d _scenarios;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsScenarios:(id)arg1;
- (id)scenariosAsString:(int)arg1;
- (void)setScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScenarios;
@property(readonly, nonatomic) int *scenarios;
@property(readonly, nonatomic) unsigned long long scenariosCount;
- (int)StringAsScales:(id)arg1;
- (id)scalesAsString:(int)arg1;
- (void)setScales:(int *)arg1 count:(unsigned long long)arg2;
- (int)scaleAtIndex:(unsigned long long)arg1;
- (void)addScale:(int)arg1;
- (void)clearScales;
@property(readonly, nonatomic) int *scales;
@property(readonly, nonatomic) unsigned long long scalesCount;
- (void)dealloc;

@end
