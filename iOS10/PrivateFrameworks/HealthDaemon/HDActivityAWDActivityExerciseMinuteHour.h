//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying>
{
    long long _exerciseMinutes;
    long long _hourSinceMidnight;
    struct {
        unsigned int exerciseMinutes:1;
        unsigned int hourSinceMidnight:1;
    } _has;
}

@property(nonatomic) long long exerciseMinutes; // @synthesize exerciseMinutes=_exerciseMinutes;
@property(nonatomic) long long hourSinceMidnight; // @synthesize hourSinceMidnight=_hourSinceMidnight;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExerciseMinutes;
@property(nonatomic) _Bool hasHourSinceMidnight;

@end
