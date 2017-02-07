//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHAssetPropertySet-Protocol.h>

@class NSString, PHAsset;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>
{
    PHAsset *_asset;
}

+ (id)propertiesToPrefetch;
+ (_Bool)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

