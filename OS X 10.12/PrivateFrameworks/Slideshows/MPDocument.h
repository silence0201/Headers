//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import <Slideshows/MPLayerableSupportInternal-Protocol.h>
#import <Slideshows/NSCoding-Protocol.h>

@class MCMontage, MPDocumentInternal, NSArray, NSMutableDictionary;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSDocument <MPLayerableSupportInternal, NSCoding>
{
    MCMontage *_montage;
    NSArray *_userProvidedStacks;
    NSMutableDictionary *_documentAttributes;
    NSMutableDictionary *_fileProperties;
    NSMutableDictionary *_layerGroups;
    BOOL _preserveMedia;
    id <MPAssetKeyDelegate> _assetKeyDelegate;
    MPDocumentInternal *_internal;
}

+ (BOOL)isNativeType:(id)arg1;
+ (id)readableTypes;
+ (id)writableTypes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)keyedUnarchiverWithData:(id)arg1 assetKeyDelegate:(id)arg2 mediaProperties:(id)arg3 error:(id *)arg4;
+ (id)unarchiveDocumentFromData:(id)arg1 withAssetKeyDelegate:(id)arg2 andMediaProperties:(id)arg3 error:(id *)arg4;
+ (id)unarchiveDocumentFromData:(id)arg1 error:(id *)arg2;
- (double)posterTime;
- (void)setFadeInDuration:(double)arg1;
- (double)fadeInDuration;
- (void)setFadeOutDuration:(double)arg1;
- (double)fadeOutDuration;
- (void)cleanup;
- (id)documentAttributes;
- (id)allElements;
- (id)allSlides:(BOOL)arg1;
- (id)allSlides;
- (void)endBatchModify;
- (void)beginBatchModify;
- (void)moveExternalPathsFromDirectory:(id)arg1 toDirectory:(id)arg2 remap:(BOOL)arg3 options:(id)arg4;
- (void)saveExternalPathsToDirectory:(id)arg1 remap:(BOOL)arg2 options:(id)arg3;
- (void)setSavesPathsAsAbsolute:(BOOL)arg1;
- (BOOL)savesPathsAsAbsolute;
- (void)setAssetKeyDelegate:(id)arg1;
- (id)assetKeyDelegate;
- (void)setNumberOfLoops:(double)arg1;
- (double)numberOfLoops;
- (void)setLoopingMode:(unsigned long long)arg1;
- (unsigned long long)loopingMode;
- (void)setAuthoringOption:(id)arg1 forKey:(id)arg2;
- (id)authoringOptionForKey:(id)arg1;
- (void)removePropertiesForMediaPath:(id)arg1;
- (void)setProperties:(id)arg1 forMediaPath:(id)arg2;
- (id)propertiesForMediaPath:(id)arg1;
- (void)setMediaProperties:(id)arg1;
- (id)mediaProperties;
- (void)setPreserveMedia:(BOOL)arg1;
- (BOOL)preserveMedia;
- (void)setDocumentAttribute:(id)arg1 forKey:(id)arg2;
- (id)documentAttributeForKey:(id)arg1;
- (unsigned long long)applyStyle:(id)arg1;
- (id)currentStyle;
- (id)displayName;
- (void)dealloc;
- (BOOL)readFromPath:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)removeAllStacks;
- (void)removeAllAudioPaths;
- (void)removeAllVideoPaths;
- (void)setAudioPaths:(id)arg1;
- (id)audioPaths;
- (void)setVideoPaths:(id)arg1;
- (id)orderedVideoPaths;
- (id)videoPaths;
- (void)setStacks:(id)arg1;
- (id)stacks;
- (void)removePaths:(id)arg1;
- (void)removePath:(id)arg1;
- (void)addStacks:(id)arg1;
- (void)addAudioPaths:(id)arg1;
- (void)addAudioPath:(id)arg1;
- (void)addVideoPaths:(id)arg1;
- (void)addVideoPath:(id)arg1;
- (id)mainLayers;
- (void)setAudioPlaylist:(id)arg1;
- (id)audioPlaylist;
- (double)videoDuration;
- (double)duration;
- (void)setBackgroundCGColor:(struct CGColor *)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGColor *)backgroundCGColor;
- (id)backgroundColor;
- (id)keyedLayers;
- (void)removeLayerForKey:(id)arg1;
- (void)setLayer:(id)arg1 forKey:(id)arg2;
- (id)layerForKey:(id)arg1;
- (void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeLayersAtIndices:(id)arg1;
- (void)removeAllLayers;
- (void)insertLayers:(id)arg1 atIndex:(long long)arg2;
- (void)addLayers:(id)arg1;
- (void)addLayer:(id)arg1;
- (id)layers;
- (long long)mediaTypeForPath:(id)arg1;
- (double)durationForPath:(id)arg1;
- (double)stopTimeForPath:(id)arg1;
- (double)startTimeForPath:(id)arg1;
- (struct CGSize)resolutionForPath:(id)arg1;
- (id)uuid;
- (void)reconnectAllTransitions;
- (long long)antialiasLevel;
- (id)allSongs;
- (id)allEffects;
- (id)allEffectContainers;
- (id)outroEffect;
- (id)titleEffect;
- (id)fullDebugLog;
- (void)dump;
- (id)montage;
- (BOOL)isInBatchModify;
- (void)configureActions;
- (BOOL)layersCanPositionZIndex;
- (void)setAlwaysLookupAbsolutePaths:(BOOL)arg1;
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)arg1;
- (void)setAbsoluteStillPath:(id)arg1 forKey:(id)arg2;
- (id)cachedAbsoluteStillPathFromPath:(id)arg1;
- (void)setAbsolutePath:(id)arg1 forKey:(id)arg2;
- (id)cachedAbsolutePathFromPath:(id)arg1;
- (BOOL)isLive;
- (BOOL)detectFacesInBackground;
- (double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2;
- (double)aspectRatio;
- (BOOL)nearingEndWithOptions:(id)arg1;
- (id)organizedRandomTransitions;
- (void)organizeRandomTransitions;
- (void)setAudioFadeOutDuration:(double)arg1;
- (double)fadeOutAudioDuration;
- (void)setLastRandomTransition:(id)arg1;
- (id)lastRandomTransition;
- (id)descriptionForRandomTransitionPresetID:(id)arg1;
- (id)flightPlanFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (long long)mapLevelForPath:(id)arg1;
- (struct CGPoint)pointForMap:(id)arg1 withAttributes:(id)arg2;
- (struct CGPoint)latLongPointForMap:(id)arg1 withAttributes:(id)arg2;
- (id)tiledMapPathsForAttributes:(id)arg1;
- (id)altitudeForPath:(id)arg1;
- (id)definedPlaceNameForPath:(id)arg1;
- (id)neighborhoodForPath:(id)arg1;
- (id)areaForPath:(id)arg1;
- (id)placeForPath:(id)arg1;
- (id)cityForPath:(id)arg1;
- (id)stateForPath:(id)arg1;
- (id)oceanForPath:(id)arg1;
- (id)countryForPath:(id)arg1;
- (id)longitudeForPath:(id)arg1;
- (id)latitudeForPath:(id)arg1;
- (id)captionForPath:(id)arg1;
- (id)keywordsForPath:(id)arg1;
- (id)creationDateForPath:(id)arg1;
- (id)regionsOfInterestForPath:(id)arg1 detect:(BOOL)arg2;
- (id)regionsOfInterestForPath:(id)arg1;
- (BOOL)isAudioAtPath:(id)arg1;
- (BOOL)isMovieAtPath:(id)arg1;
- (BOOL)isImageAtPath:(id)arg1;
- (double)volumeForPath:(id)arg1;
- (id)absoluteVideoPaths;
- (void)_setMediaProperties:(id)arg1;
- (void)setMontage:(id)arg1;
- (void)upgradeDocument;
- (id)documentLayerGroup;
- (id)actionableObjectForID:(id)arg1;
- (void)setupLayerGroups;
- (void)setupDocumentLayerGroup;
- (void)setDocumentLayerGroup:(id)arg1;
- (id)propertiesForMediaPathAndCreateIfNeeded:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
- (void)setStyleID:(id)arg1;
- (id)styleID;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromLayersAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2;
- (id)valueInLayersWithName:(id)arg1;
- (id)objectInLayersAtIndex:(long long)arg1;
- (long long)countOfLayers;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (BOOL)isSupportedMovieForAssetAtPath:(id)arg1;
- (struct __IOSurface *)IOSurfaceForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (id)dataForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)avAssetForAssetAtPath:(id)arg1;
- (struct CGImage *)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)CGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct CGImage *)CGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1;
- (id)marimbaDocument;

@end
