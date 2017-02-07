//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPStoreRedownloadProductItemAsset, NSArray, NSDictionary, NSString, NSURL;

@interface MPStoreRedownloadProductItem : NSObject
{
    NSDictionary *_responseDictionary;
    _Bool _usesCurrentAccountIfAvailable;
}

@property(nonatomic) _Bool usesCurrentAccountIfAvailable; // @synthesize usesCurrentAccountIfAvailable=_usesCurrentAccountIfAvailable;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (void)_enumerateAssetDictionariesWithBlock:(CDUnknownBlockType)arg1;
- (id)assetForFlavor:(id)arg1;
@property(readonly, nonatomic) NSURL *HLSPlaylistURL;
@property(readonly, nonatomic) MPStoreRedownloadProductItemAsset *firstAsset;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) MPStoreRedownloadProductItemAsset *asset;
@property(readonly, copy, nonatomic) NSArray *allFlavors;
- (id)_initWithResponseDictionary:(id)arg1;

@end
