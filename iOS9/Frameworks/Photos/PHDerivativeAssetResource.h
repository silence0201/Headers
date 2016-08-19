//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetResource.h>

@class PLImageFormat;

@interface PHDerivativeAssetResource : PHAssetResource
{
    _Bool _tableFormat;
    PLImageFormat *_format;
}

+ (id)tableThumbnailDataForAsset:(id)arg1 resource:(id)arg2 dataSpecification:(id *)arg3;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1;
+ (id)CPLDerivativeAssetResourcesForAsset:(id)arg1 usingLibrary:(id)arg2;
@property(retain, nonatomic) PLImageFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic, getter=isTableFormat) _Bool tableFormat; // @synthesize tableFormat=_tableFormat;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isCroppedToSquare) _Bool croppedToSquare;
@property(readonly, nonatomic, getter=isThumbnail) _Bool thumbnail;
- (_Bool)isTableThumbnail;
- (id)initWithCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2;
- (id)initWithQualityClass:(id)arg1 forAsset:(id)arg2;

@end

