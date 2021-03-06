//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _audioSource;
    _INPBIntentMetadata *_intentMetadata;
    int _relativeAudioSourceReference;
    struct {
        unsigned int audioSource:1;
        unsigned int relativeAudioSourceReference:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeAudioSourceReference;
@property(nonatomic) int relativeAudioSourceReference; // @synthesize relativeAudioSourceReference=_relativeAudioSourceReference;
- (int)StringAsAudioSource:(id)arg1;
- (id)audioSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasAudioSource;
@property(nonatomic) int audioSource; // @synthesize audioSource=_audioSource;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

