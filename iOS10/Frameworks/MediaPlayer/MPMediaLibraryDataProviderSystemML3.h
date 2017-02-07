//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@class NSObject;
@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    id <MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedGeniusErrorForError:(id)arg1;
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;
+ (_Bool)_isGeniusEnabled;
- (void).cxx_destruct;
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;
- (void)updateEntitesToCurrentRevision;
- (id)errorResolverForItem:(id)arg1;
- (id)completeMyCollectionArtworkDataSource;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isGeniusEnabled;
- (long long)_currentRevision;
- (void)_initInstanceVariableOnce;
- (id)initWithLibrary:(id)arg1;

@end

