//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PLAssetContainer-Protocol.h>

@class NSDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, UIImage;

@protocol PLAlbumProtocol <PLAssetContainer>
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isUserLibraryAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isWallpaperAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

@optional
@property(nonatomic) unsigned long long batchSize;
@property(readonly, copy, nonatomic) NSString *name;
- (void)setUINotificationsEnabled:(_Bool)arg1;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
@end

