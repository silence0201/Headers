//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying>
{
    NSString *_identifier;
    NSMutableArray *_playerItemIdentifiers;
}

@property(retain, nonatomic) NSMutableArray *playerItemIdentifiers; // @synthesize playerItemIdentifiers=_playerItemIdentifiers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)playerItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerItemIdentifiersCount;
- (void)addPlayerItemIdentifiers:(id)arg1;
- (void)clearPlayerItemIdentifiers;
- (id)sockPuppetMessage;

@end

