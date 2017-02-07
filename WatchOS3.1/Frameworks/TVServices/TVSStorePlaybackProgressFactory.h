//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/TVSStorePlaybackProgressDelegate-Protocol.h>

@class NSString, TVSBookmarkService, TVSStoreFavoritesController;

@interface TVSStorePlaybackProgressFactory : NSObject <TVSStorePlaybackProgressDelegate>
{
    _Bool _needsUpdate;
    TVSBookmarkService *_bookmarkService;
    TVSStoreFavoritesController *_favoritesController;
    id _bookmarkServiceUpdatedObserver;
    id _bookmarkPendingUpdateObserver;
}

@property(nonatomic) __weak id bookmarkPendingUpdateObserver; // @synthesize bookmarkPendingUpdateObserver=_bookmarkPendingUpdateObserver;
@property(nonatomic) __weak id bookmarkServiceUpdatedObserver; // @synthesize bookmarkServiceUpdatedObserver=_bookmarkServiceUpdatedObserver;
@property(retain, nonatomic) TVSStoreFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) TVSBookmarkService *bookmarkService; // @synthesize bookmarkService=_bookmarkService;
- (void).cxx_destruct;
- (void)markItemsAsUnwatched:(id)arg1;
- (void)markItemsAsWatched:(id)arg1;
- (void)determineProgressForAdamIDs:(id)arg1 assumePurchased:(_Bool)arg2 respectBookmarkPlayCount:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)determineProgressForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_markProgressObjects:(id)arg1 asWatched:(_Bool)arg2;
- (void)_markBookmarkKeys:(id)arg1 asWatched:(_Bool)arg2;
- (void)_obtainLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_lookupMetadataForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_update;
- (void)_setNeedsUpdate;
- (void)_favoritesDidChange:(id)arg1;
- (void)_updateBookmarks;
- (void)_didEndBookmarkSynchronization;
- (void)_willStartBookmarkSynchronization;
- (_Bool)_isSynchronizingBookmarks;
- (void)storePlaybackProgressDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBookmarkService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
