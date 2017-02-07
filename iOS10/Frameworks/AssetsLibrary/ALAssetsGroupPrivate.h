//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsFilter, ALAssetsLibrary, NSMutableDictionary, NSString, PLPhotoLibrary;
@protocol PLAlbumProtocol;

__attribute__((visibility("hidden")))
@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>
{
    _Bool _loadedAssets;
    ALAssetsLibrary *_library;
    _Bool _isValid;
    _Bool _isCloudSharedGroup;
    _Bool _applyHyperionFilter;
    struct NSObject *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned long long _groupType;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property(nonatomic) _Bool applyHyperionFilter; // @synthesize applyHyperionFilter=_applyHyperionFilter;
@property(nonatomic) _Bool isCloudSharedGroup; // @synthesize isCloudSharedGroup=_isCloudSharedGroup;
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)populateAssets;
- (void)updateAlbumFiltering;
- (void)resetAssets;
- (int)albumFilter;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

