//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ABRecord, NSMutableDictionary;

@interface ABCDRecord : NSManagedObject
{
    ABRecord *_publicRecord;
    NSMutableDictionary *_propertyValueCache;
}

+ (id)managedObjectModel;
+ (id)managedObjectModelUrl;
+ (id)newIncrementedSearchString:(id)arg1;
+ (id)newNormalizedSortString:(id)arg1;
+ (id)newNormalizedSearchString:(id)arg1;
+ (void)extractYear:(long long *)arg1 yearlessDate:(double *)arg2 fromDate:(id)arg3;
+ (void)clearCachedPropertyValue:(id)arg1;
+ (BOOL)_isPublicRecord;
+ (id)_table;
+ (id)insertNewObjectInManagedObjectContact:(id)arg1;
+ (id)_newUniqueIdForTable:(id)arg1;
+ (id)makeUniqueId;
+ (id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 affectedStores:(id)arg4;
+ (id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3;
+ (BOOL)hasAddressBookContentForRecord:(id)arg1;
+ (id)prefetchRelationshipKeyPaths;
+ (BOOL)abEntityKnowsKey:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)abEntityName;
+ (id)compoundPredicateForKey:(id)arg1 option:(id)arg2 andSubPredicate:(id)arg3;
+ (id)bitwiseAndPredicateForKey:(id)arg1 andNumber:(long long)arg2 comparingToNumber:(long long)arg3 withComparisonType:(unsigned long long)arg4;
+ (void)initialize;
- (id)displayName;
- (BOOL)isKindOfEntityNamed:(id)arg1;
- (BOOL)nts_HasChangedProperties;
- (id)nts_ChangedProperties;
- (id)nts_UniqueId;
- (void)setValue:(id)arg1 forKey:(id)arg2 withEntityName:(id)arg3 entityKey:(id)arg4;
- (id)valueForKey:(id)arg1 withEntityName:(id)arg2 entityKey:(id)arg3;
- (void)setAggregateModificationDate:(id)arg1;
- (id)aggregateModificationDate;
- (BOOL)_valueHasChangedForKey:(id)arg1;
- (void)touch:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (long long)modificationDateYear;
- (void)setModificationDateYear:(id)arg1;
- (double)modificationDateYearless;
- (void)setModificationDateYearless:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (long long)creationDateYear;
- (void)setCreationDateYear:(id)arg1;
- (double)creationDateYearless;
- (void)setCreationDateYearless:(id)arg1;
- (void)cachePropertyValue:(id)arg1 withKey:(id)arg2 uniqueId:(id)arg3;
- (void)invalidateAllCachedPropertyValues;
- (void)invalidateCachedPropertyValuesWithKey:(id)arg1;
- (void)clearCachedPropertyValuesWithKey:(id)arg1;
- (void)clearCachedPropertyValue:(id)arg1 withKey:(id)arg2;
- (void)didTurnIntoFault;
- (id)propertyValueCache;
- (void)setPrimitivePublicRecord:(id)arg1;
- (id)primitivePublicRecord;
- (id)bucketKey;
- (BOOL)_isPublicRecord;
- (id)_table;
- (void)awakeFromInsert;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 uniqueId:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (unsigned long long)nameOrderWithFormatter:(id)arg1;
- (id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(struct _NSRange *)arg2;

@end

