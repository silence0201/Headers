//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBContact, _INPBDateTime;

@interface _INPBMessage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _attributes;
    NSString *_content;
    _INPBDateTime *_dateSent;
    NSString *_groupName;
    NSString *_identifier;
    NSMutableArray *_recipients;
    _INPBContact *_sender;
}

+ (Class)recipientType;
+ (id)options;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
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
@property(readonly, nonatomic) BOOL hasGroupName;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDateSent;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) BOOL hasContent;
@property(readonly, nonatomic) BOOL hasSender;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
- (void)dealloc;

@end

