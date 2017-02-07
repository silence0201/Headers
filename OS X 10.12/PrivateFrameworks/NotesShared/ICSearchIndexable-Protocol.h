//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class ICGenerateSearchIndexStringsOperation, NSArray, NSDate, NSDictionary, NSManagedObjectContext, NSManagedObjectID, NSString;

@protocol ICSearchIndexable <NSObject>
- (NSArray *)authorsExcludingCurrentUser;
- (BOOL)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(char *)arg1;
- (BOOL)isHiddenFromSearch;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (NSDate *)modificationDate;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (NSString *)objectIdentifier;
- (NSString *)identifier;
- (long long)visibilityTestingType;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;

@optional
- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;
@end
