//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOPDAttribution : PBCodable <NSCopying>
{
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
}

+ (Class)attributionUrlType;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)arg1;
+ (id)attributionForPlaceDataEncyclopedia:(id)arg1;
+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;
@property(retain, nonatomic) NSString *actionUrlComponent; // @synthesize actionUrlComponent=_actionUrlComponent;
@property(retain, nonatomic) NSMutableArray *attributionUrls; // @synthesize attributionUrls=_attributionUrls;
@property(retain, nonatomic) NSString *externalComponentId; // @synthesize externalComponentId=_externalComponentId;
@property(retain, nonatomic) NSString *externalItemId; // @synthesize externalItemId=_externalItemId;
@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasActionUrlComponent;
- (id)attributionUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionUrlsCount;
- (void)addAttributionUrl:(id)arg1;
- (void)clearAttributionUrls;
@property(readonly, nonatomic) BOOL hasExternalComponentId;
@property(readonly, nonatomic) BOOL hasExternalItemId;
@property(readonly, nonatomic) BOOL hasVendorId;
- (void)dealloc;
- (BOOL)_isYelp;

@end
