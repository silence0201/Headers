//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accountNumber;
    _INPBDataString *_nickname;
    _INPBDataString *_organizationName;
    _INPBValueMetadata *_valueMetadata;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(retain, nonatomic) _INPBDataString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
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
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasAccountNumber;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end
