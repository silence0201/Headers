//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceWorker.h>

#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceFaceProcessingProtocol-Protocol.h>
#import <PhotoAnalysis/PVCVMLIntegrating-Protocol.h>
#import <PhotoAnalysis/PVNotificationListener-Protocol.h>

@class NSString, NSURL, PHAVisionServicePersistenceDelegate, PhotoVision;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVCVMLIntegrating, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
{
    PhotoVision *_photoVision;
    PHAVisionServicePersistenceDelegate *_persistenceDelegate;
    _Bool _reclusteringRequired;
    _Bool _disabledByUserDefaults;
    NSURL *_suggestionLoggingDirectory;
    _Bool _suggestionLoggingSessionOpen;
    _Bool _suggestionsLoggingEnabled;
}

+ (long long)applicationDataFolderIdentifier;
+ (_Bool)runsExclusively;
+ (short)workerType;
- (void).cxx_destruct;
- (void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reclusterFacesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)suggestPersonForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceSuggestions:(id)arg2 toBeRejectedFaceSuggestions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)suggestFacesForFacesWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)newPhotoVisionCVMLRequestOptions;
- (void)handlePVNotification:(id)arg1;
- (id)newAssetFetchOptions;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (_Bool)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)_validateAsset:(id)arg1 error:(id *)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1;
- (_Bool)isEnabled;
- (void)willCompleteJob:(id)arg1;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (void)shutdown;
- (void)_performForcedFaceClustering:(_Bool)arg1 whileKeepingAliveJob:(id)arg2;
- (_Bool)_performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didPerformFaceClustering;
- (void)_willPerformFaceClustering;
- (_Bool)_resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)_renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (id)_faceSuggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceSuggestions:(id)arg2 toBeRejectedFaceSuggestions:(id)arg3 operation:(id)arg4 error:(id *)arg5;
- (id)_faceSuggestionsForFacesWithLocalIdentifiers:(id)arg1 operation:(id)arg2 error:(id *)arg3;
- (id)_faceDescriptionsOfFacesInImageWithSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 error:(id *)arg6;
- (void)_finalizeSuggestionsLog;
- (void)_logFaceToSuggestionsLog:(id)arg1;
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1;
- (void)_appendToSuggestionsLog:(id)arg1;
- (void)_closeSuggestionsLoggingSession;
- (void)_openSuggestionsLoggingSession;
- (_Bool)_scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 priority:(int)arg2 error:(id *)arg3;
- (void)_handleNilReplyBlockForSelector:(SEL)arg1;
- (id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (id)_pvImageForAsset:(id)arg1 error:(id *)arg2;
- (id)_pvImageForAssetResourceFileURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id *)arg4;
- (id)_pvImageForAssetResource:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id *)arg4;
- (void)_interruptPhotoVision;
- (void)_terminatePhotoVision;
- (id)_photoVisionAllowingCreation:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_synchronouslyGenerateFaceTilesForFaces:(id)arg1 fromAsset:(id)arg2 assetImage:(id)arg3 error:(id *)arg4;
- (id)_newPersonsFetchOptions;
- (id)_newFaceGroupsFetchOptions;
- (id)_newFacesFetchOptions;
- (id)_faceSuggestionsFromKeyFaceClustSeqNums:(id)arg1 excludeFaceLocalIdentifers:(id)arg2 operation:(id)arg3 error:(id *)arg4;
- (void)_performFullCVMLCleanup;
- (void)_performIntermediateCVMLCleanup;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
