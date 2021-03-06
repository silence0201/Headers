//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDUser, NSMutableArray, NSString;

@interface GEOPDTip : PBCodable <NSCopying>
{
    double _tipTime;
    NSMutableArray *_snippets;
    NSString *_tipId;
    GEOPDUser *_tipster;
    struct {
        unsigned int tipTime:1;
    } _has;
}

+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)arg1;
@property(retain, nonatomic) NSString *tipId; // @synthesize tipId=_tipId;
@property(retain, nonatomic) GEOPDUser *tipster; // @synthesize tipster=_tipster;
@property(nonatomic) double tipTime; // @synthesize tipTime=_tipTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTipId;
@property(readonly, nonatomic) BOOL hasTipster;
@property(nonatomic) BOOL hasTipTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)dealloc;

@end

