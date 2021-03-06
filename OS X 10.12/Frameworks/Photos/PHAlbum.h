//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSArray;

@interface PHAlbum : PHAssetCollection
{
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    unsigned long long _estimatedAssetCount;
    NSArray *_localizedLocationNames;
}

+ (id)identifierCode;
- (id)localizedLocationNames;
- (unsigned long long)estimatedAssetCount;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)endDate;
- (id)startDate;
- (long long)titleCategory;
- (id)localizedTitle;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end

