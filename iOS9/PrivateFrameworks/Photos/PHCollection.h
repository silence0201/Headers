//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHCollection : PHObject
{
    _Bool _customSortAscending;
    int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
}

+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
@property(readonly, nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(readonly, nonatomic) _Bool customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property(readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
- (id)description;
- (_Bool)collectionCanBePinned;
- (_Bool)collectionHasFixedOrder;
@property(readonly, nonatomic) NSString *localizedTitle;
- (_Bool)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, nonatomic) _Bool canContainAssets;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

