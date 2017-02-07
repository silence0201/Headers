//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
    _Bool _suppressSyntheticReviews;
    struct {
        unsigned int suppressSyntheticReviews:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuppressSyntheticReviews;
@property(nonatomic) _Bool suppressSyntheticReviews; // @synthesize suppressSyntheticReviews=_suppressSyntheticReviews;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) struct GEOPDPhotoSizeFilterValue *photoSizeFilters;
@property(readonly, nonatomic) unsigned long long photoSizeFiltersCount;
- (void)dealloc;

@end
