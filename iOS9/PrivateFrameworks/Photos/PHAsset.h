//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

#import <Photos/_PLImageLoadingAsset-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSString, NSURL;

@interface PHAsset : PHObject <_PLImageLoadingAsset>
{
    _Bool _hidden;
    _Bool _favorite;
    _Bool _complete;
    _Bool _isPhotoIris;
    _Bool _hasAdjustments;
    _Bool _cloudIsDeletable;
    unsigned short _videoCpVisibilityState;
    short _savedAssetType;
    int _exifOrientation;
    int _avalanchePickType;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    NSString *_uniformTypeIdentifier;
    unsigned long long _persistenceState;
    unsigned long long _thumbnailIndex;
    NSString *_directory;
    NSString *_filename;
    NSDate *_trashedDate;
    NSDate *_adjustmentTimestamp;
    long long _videoCpDurationValue;
    NSArray *_faceRegions;
    NSString *_cloudIdentifier;
    long long _cloudPlaceholderKind;
    NSData *_locationData;
}

+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (_Bool)_isLivePhotoWithPhotoIris:(_Bool)arg1 hasAdjustments:(_Bool)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5;
+ (_Bool)_isPhotoIrisPlaceholderWithPhotoIris:(_Bool)arg1 videoCpDuration:(long long)arg2 sourceType:(unsigned long long)arg3;
+ (id)identifierCode;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (_Bool)managedObjectSupportsSavedAssetType;
+ (_Bool)managedObjectSupportsBursts;
+ (_Bool)managedObjectSupportsVisibilityState;
+ (_Bool)managedObjectSupportsHiddenState;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pl_managedAssetsForAssets:(id)arg1;
@property(readonly, nonatomic) _Bool cloudIsDeletable; // @synthesize cloudIsDeletable=_cloudIsDeletable;
@property(readonly, nonatomic) short savedAssetType; // @synthesize savedAssetType=_savedAssetType;
@property(readonly, nonatomic) NSData *locationData; // @synthesize locationData=_locationData;
@property(readonly, nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property(readonly, nonatomic) long long cloudPlaceholderKind; // @synthesize cloudPlaceholderKind=_cloudPlaceholderKind;
@property(readonly, copy, nonatomic) NSString *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property(readonly, nonatomic) _Bool hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
@property(readonly, nonatomic) unsigned short videoCpVisibilityState; // @synthesize videoCpVisibilityState=_videoCpVisibilityState;
@property(readonly, nonatomic) long long videoCpDurationValue; // @synthesize videoCpDurationValue=_videoCpDurationValue;
@property(readonly, nonatomic) _Bool isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property(readonly, nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSDate *adjustmentTimestamp; // @synthesize adjustmentTimestamp=_adjustmentTimestamp;
@property(readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(readonly, nonatomic) unsigned long long persistenceState; // @synthesize persistenceState=_persistenceState;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *metadataDebugDescription;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)adjustmentsDebugMetadata;
- (id)__dictionaryWithContentsOfData:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForMutationsDirectory;
- (id)pathForAdjustmentDirectory;
- (id)pathForMutationsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForXMPFile;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForMediumPreview;
- (id)fileURLForLargePreview;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (id)mainFileURL;
- (_Bool)canPerformSharingAction;
- (_Bool)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
- (_Bool)isTimelapsePlaceholder;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)isIncludedInMoments;
- (_Bool)isMogul;
- (_Bool)isStreamedVideo;
- (_Bool)isCloudPlaceholder;
- (_Bool)isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;
- (_Bool)isCloudSharedAsset;
- (_Bool)isPhotoStreamPhoto;
- (_Bool)isAudio;
- (_Bool)isPhoto;
- (_Bool)isVideo;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool isPartOfBurst;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) CLLocation *location;
- (id)thumbnailIdentifier;
- (void)generateLargeThumbnailFileIfNecessary;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (_Bool)isInFlight;
- (id)pathForSRGBLargeThumbnailFile;
- (id)pathForVideoPreviewFile;
- (id)pathForMediumThumbnailFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForOriginalFile;
- (int)orientation;
- (struct CGSize)imageSize;
- (short)kindSubtype;
- (short)kind;
- (unsigned long long)effectiveThumbnailIndex;
- (_Bool)hasLegacyAdjustments;
- (id)debugFilename;
- (_Bool)isOriginalSRGB;
- (long long)originalImageOrientation;
@property(readonly, nonatomic) NSURL *ALAssetURL;
- (id)assetsLibraryURL;
@property(readonly, nonatomic) double aspectRatio;
- (id)pl_photoLibrary;
- (void)fetchKeywordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (Class)changeRequestClass;
- (_Bool)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) _Bool isRAW;
@property(readonly, nonatomic) _Bool isJPEG;
@property(readonly, nonatomic) _Bool isHDVideo;
@property(readonly, nonatomic) long long imageOrientation;
- (id)commentProperties;
- (id)descriptionProperties;
- (id)photoIrisProperties;
- (id)duplicateProperties;
- (id)momentProperties;
- (id)embeddedThumbnailProperties;
- (id)originalMetadataProperties;
- (id)PTPProperties;
- (id)internalProperties;
- (id)_createCommentPropertyObject;
- (id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(_Bool)arg3;
- (void)fetchPropertySetsIfNeeded;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
@property(readonly, nonatomic) long long assetSource;
@property(readonly, nonatomic) unsigned long long sourceType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)pl_managedAsset;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

