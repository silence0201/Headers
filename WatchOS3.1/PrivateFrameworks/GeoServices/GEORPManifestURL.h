//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPManifestURL : PBCodable <NSCopying>
{
    NSString *_urlName;
    NSString *_urlValue;
}

@property(retain, nonatomic) NSString *urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) NSString *urlName; // @synthesize urlName=_urlName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(readonly, nonatomic) _Bool hasUrlName;
- (void)dealloc;

@end

