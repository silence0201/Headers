//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _attributeType;
    _INPBHomeAttributeValue *_attributeValue;
    struct {
        unsigned int attributeType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBHomeAttributeValue *attributeValue; // @synthesize attributeValue=_attributeValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAttributeValue;
@property(nonatomic) BOOL hasAttributeType;
@property(nonatomic) int attributeType; // @synthesize attributeType=_attributeType;

@end

