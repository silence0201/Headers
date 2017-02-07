//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@interface PUFeedSettings : PUSettings
{
    _Bool _useJPEGImageFormats;
    _Bool _shouldUseJPEGFastFormatForMediumTiles;
    _Bool _shouldUseJPEGFastFormatForLargeTiles;
    _Bool _useQualityImageFormats;
    _Bool _useSpeedometerFeedback;
    _Bool _shouldPreheatCoreData;
    _Bool _shouldPreheatAssets;
    _Bool _shouldPreheatComments;
    _Bool _forceDefaultPreheatManager;
    _Bool _ignoresCaptions;
    _Bool _parallaxEnabled;
    _Bool _allowsInfiniteScrolling;
    _Bool _forceAllItemsAsVideo;
    _Bool _simulateSharedStreamsEnabled;
    _Bool _vitalityEnabled;
    double _smallTileSizeTolerance;
    long long _maximumScrollRegimeForQualityImageFormats;
    double _speedometerMediumUpperThreshold;
    double _speedometerMediumLowerThreshold;
    double _speedometerFastUpperThreshold;
    double _speedometerFastLowerThreshold;
    double _preheatingMinimumScrollFactor;
    double _slowScrollPreheatingWindowSize;
    double _mediumScrollPreheatingWindowSize;
    double _fastScrollPreheatingWindowSize;
    long long _feedContent;
    long long _initialWindowSize;
    long long _testInitialWindowSize;
    long long _parallaxModel;
    double _parallaxFactor;
    long long _infiniteScrollingWindowSizeIncrement;
}

+ (id)_localizedStrings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool vitalityEnabled; // @synthesize vitalityEnabled=_vitalityEnabled;
@property(nonatomic) _Bool simulateSharedStreamsEnabled; // @synthesize simulateSharedStreamsEnabled=_simulateSharedStreamsEnabled;
@property(nonatomic) _Bool forceAllItemsAsVideo; // @synthesize forceAllItemsAsVideo=_forceAllItemsAsVideo;
@property(nonatomic) long long infiniteScrollingWindowSizeIncrement; // @synthesize infiniteScrollingWindowSizeIncrement=_infiniteScrollingWindowSizeIncrement;
@property(nonatomic) _Bool allowsInfiniteScrolling; // @synthesize allowsInfiniteScrolling=_allowsInfiniteScrolling;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) _Bool ignoresCaptions; // @synthesize ignoresCaptions=_ignoresCaptions;
@property(nonatomic) long long testInitialWindowSize; // @synthesize testInitialWindowSize=_testInitialWindowSize;
@property(nonatomic) long long initialWindowSize; // @synthesize initialWindowSize=_initialWindowSize;
@property(nonatomic) long long feedContent; // @synthesize feedContent=_feedContent;
@property(nonatomic) _Bool forceDefaultPreheatManager; // @synthesize forceDefaultPreheatManager=_forceDefaultPreheatManager;
@property(nonatomic) _Bool shouldPreheatComments; // @synthesize shouldPreheatComments=_shouldPreheatComments;
@property(nonatomic) _Bool shouldPreheatAssets; // @synthesize shouldPreheatAssets=_shouldPreheatAssets;
@property(nonatomic) _Bool shouldPreheatCoreData; // @synthesize shouldPreheatCoreData=_shouldPreheatCoreData;
@property(nonatomic) double fastScrollPreheatingWindowSize; // @synthesize fastScrollPreheatingWindowSize=_fastScrollPreheatingWindowSize;
@property(nonatomic) double mediumScrollPreheatingWindowSize; // @synthesize mediumScrollPreheatingWindowSize=_mediumScrollPreheatingWindowSize;
@property(nonatomic) double slowScrollPreheatingWindowSize; // @synthesize slowScrollPreheatingWindowSize=_slowScrollPreheatingWindowSize;
@property(nonatomic) double preheatingMinimumScrollFactor; // @synthesize preheatingMinimumScrollFactor=_preheatingMinimumScrollFactor;
@property(nonatomic) _Bool useSpeedometerFeedback; // @synthesize useSpeedometerFeedback=_useSpeedometerFeedback;
@property(nonatomic) double speedometerFastLowerThreshold; // @synthesize speedometerFastLowerThreshold=_speedometerFastLowerThreshold;
@property(nonatomic) double speedometerFastUpperThreshold; // @synthesize speedometerFastUpperThreshold=_speedometerFastUpperThreshold;
@property(nonatomic) double speedometerMediumLowerThreshold; // @synthesize speedometerMediumLowerThreshold=_speedometerMediumLowerThreshold;
@property(nonatomic) double speedometerMediumUpperThreshold; // @synthesize speedometerMediumUpperThreshold=_speedometerMediumUpperThreshold;
@property(nonatomic) long long maximumScrollRegimeForQualityImageFormats; // @synthesize maximumScrollRegimeForQualityImageFormats=_maximumScrollRegimeForQualityImageFormats;
@property(nonatomic) _Bool useQualityImageFormats; // @synthesize useQualityImageFormats=_useQualityImageFormats;
@property(nonatomic) _Bool shouldUseJPEGFastFormatForLargeTiles; // @synthesize shouldUseJPEGFastFormatForLargeTiles=_shouldUseJPEGFastFormatForLargeTiles;
@property(nonatomic) _Bool shouldUseJPEGFastFormatForMediumTiles; // @synthesize shouldUseJPEGFastFormatForMediumTiles=_shouldUseJPEGFastFormatForMediumTiles;
@property(nonatomic) double smallTileSizeTolerance; // @synthesize smallTileSizeTolerance=_smallTileSizeTolerance;
@property(nonatomic) _Bool useJPEGImageFormats; // @synthesize useJPEGImageFormats=_useJPEGImageFormats;
- (void)setDefaultValues;

@end

