//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSuggestedSearchDelegate-Protocol.h>

@class NSArray, NSString, PLPhotoLibrary, PSIDatabase, PUSuggestedSearchLastYear;
@protocol OS_dispatch_queue, PUSuggestedSearchResultsDelegate;

__attribute__((visibility("hidden")))
@interface PUSuggestedSearchResultsDataSource : NSObject <PUSuggestedSearchDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_suggestedSearches;
    NSArray *_recentSearches;
    _Bool _shouldReloadRecentSearchChanges;
    PUSuggestedSearchLastYear *_suggestedSearchLastYear;
    PSIDatabase *_searchIndex;
    id <PUSuggestedSearchResultsDelegate> _delegate;
}

+ (void)_clearRecentSearches;
+ (_Bool)saveRecentSearch:(id)arg1 albumUUID:(id)arg2 searchString:(id)arg3 displayTitle:(id)arg4 uuids:(id)arg5;
+ (id)_recentSearches;
+ (id)_recentSearchObjects;
@property(nonatomic) __weak id <PUSuggestedSearchResultsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
- (void).cxx_destruct;
- (id)suggestedSearchPhotoLibrary:(id)arg1;
- (id)suggestedSearchIndex:(id)arg1;
- (void)suggestedSearchHasPendingChanges:(id)arg1;
- (void)cancel;
- (void)mergePendingChanges;
- (void)clearRecentSearches;
- (void)saveRecentSearch:(id)arg1 albumUUID:(id)arg2 searchString:(id)arg3 displayTitle:(id)arg4 uuids:(id)arg5;
- (id)recentSearches;
- (id)recentSearchAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRecentSearches;
- (void)_reloadRecentSearches;
- (id)nonemptySuggestedSearchAtIndex:(unsigned long long)arg1;
- (id)nonemptySuggestedSearches;
- (id)suggestedSearchAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSuggestedSearches;
- (void)dealloc;
- (void)ensureResultsForLastYearPhotoSearch;
- (id)initWithSearchIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

