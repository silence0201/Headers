//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _name;
    int _qualifier;
    _INPBFilePropertyValue *_value;
    struct {
        unsigned int name:1;
        unsigned int qualifier:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBFilePropertyValue *value; // @synthesize value=_value;
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
@property(readonly, nonatomic) BOOL hasValue;
@property(nonatomic) BOOL hasQualifier;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) BOOL hasName;
@property(nonatomic) int name; // @synthesize name=_name;

@end

