//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHAsset;

@interface PHAssetDescriptionProperties : NSObject
{
    PHAsset *_asset;
    NSString *_assetDescription;
}

@property(readonly, copy, nonatomic) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
@property(readonly, nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end

