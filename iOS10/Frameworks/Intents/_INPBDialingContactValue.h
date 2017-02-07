//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContactValue, _INPBStringValue;

@interface _INPBDialingContactValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBContactValue *_dialingContact;
    _INPBStringValue *_dialingPhoneLabel;
    _INPBStringValue *_dialingPhoneNumber;
}

+ (id)options;
@property(retain, nonatomic) _INPBStringValue *dialingPhoneLabel; // @synthesize dialingPhoneLabel=_dialingPhoneLabel;
@property(retain, nonatomic) _INPBStringValue *dialingPhoneNumber; // @synthesize dialingPhoneNumber=_dialingPhoneNumber;
@property(retain, nonatomic) _INPBContactValue *dialingContact; // @synthesize dialingContact=_dialingContact;
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
@property(readonly, nonatomic) _Bool hasDialingPhoneLabel;
@property(readonly, nonatomic) _Bool hasDialingPhoneNumber;
@property(readonly, nonatomic) _Bool hasDialingContact;

@end

