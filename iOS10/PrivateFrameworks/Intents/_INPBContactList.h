//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBCondition;

@interface _INPBContactList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCondition *_condition;
    NSMutableArray *_contacts;
}

+ (Class)contactType;
+ (id)options;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
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
@property(readonly, nonatomic) _Bool hasCondition;
- (id)contactAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (void)addContact:(id)arg1;
- (void)clearContacts;

@end

