//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPDetails, GEORPNotification, GEORPResolution, NSString;

@interface GEORPProblemStatus : PBCodable <NSCopying>
{
    double _creationDate;
    GEORPDetails *_details;
    GEORPNotification *_notification;
    NSString *_problemId;
    GEORPResolution *_problemResolution;
    int _problemState;
    struct {
        unsigned int creationDate:1;
        unsigned int problemState:1;
    } _has;
}

@property(retain, nonatomic) GEORPDetails *details; // @synthesize details=_details;
@property(retain, nonatomic) GEORPNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) GEORPResolution *problemResolution; // @synthesize problemResolution=_problemResolution;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDetails;
@property(readonly, nonatomic) _Bool hasNotification;
@property(readonly, nonatomic) _Bool hasProblemResolution;
- (int)StringAsProblemState:(id)arg1;
- (id)problemStateAsString:(int)arg1;
@property(nonatomic) _Bool hasProblemState;
@property(nonatomic) int problemState; // @synthesize problemState=_problemState;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasProblemId;
- (void)dealloc;

@end
