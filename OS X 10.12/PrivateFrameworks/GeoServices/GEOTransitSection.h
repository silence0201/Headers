//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTransitSection : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _actionSheetArtworkIndexs;
    CDStruct_9f2792e4 _routeDetailsArtworkIndexs;
    CDStruct_9f2792e4 _stepIndexs;
    NSString *_actionSheetName;
    int _nextOptionsIndex;
    BOOL _disableAlightNotifications;
    struct {
        unsigned int nextOptionsIndex:1;
        unsigned int disableAlightNotifications:1;
    } _has;
}

@property(nonatomic) BOOL disableAlightNotifications; // @synthesize disableAlightNotifications=_disableAlightNotifications;
@property(retain, nonatomic) NSString *actionSheetName; // @synthesize actionSheetName=_actionSheetName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDisableAlightNotifications;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsArtworkIndexs;
@property(readonly, nonatomic) unsigned int *routeDetailsArtworkIndexs;
@property(readonly, nonatomic) unsigned long long routeDetailsArtworkIndexsCount;
- (void)setActionSheetArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;
- (void)clearActionSheetArtworkIndexs;
@property(readonly, nonatomic) unsigned int *actionSheetArtworkIndexs;
@property(readonly, nonatomic) unsigned long long actionSheetArtworkIndexsCount;
@property(readonly, nonatomic) BOOL hasActionSheetName;
@property(nonatomic) BOOL hasNextOptionsIndex;
@property(nonatomic) int nextOptionsIndex; // @synthesize nextOptionsIndex=_nextOptionsIndex;
- (void)setStepIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;
- (void)addStepIndex:(unsigned int)arg1;
- (void)clearStepIndexs;
@property(readonly, nonatomic) unsigned int *stepIndexs;
@property(readonly, nonatomic) unsigned long long stepIndexsCount;
- (void)dealloc;

@end

