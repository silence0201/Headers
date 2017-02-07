//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBAppId, _INPBBuildId;

@interface _INPBAppBuild : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBAppId *_appId;
    _INPBBuildId *_buildId;
}

+ (id)options;
@property(retain, nonatomic) _INPBBuildId *buildId; // @synthesize buildId=_buildId;
@property(retain, nonatomic) _INPBAppId *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBuildId;
@property(readonly, nonatomic) _Bool hasAppId;

@end

