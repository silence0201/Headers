//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditProtoSettings : PUSettings
{
    _Bool _showLevelIndicator;
    _Bool _showResetToolButton;
    _Bool _allowAnyPlugin;
    _Bool _cropMaskBlurred;
    _Bool _autoCropEnabled;
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
    _Bool _previewOriginalAllowsLongPress;
    _Bool _previewOriginalTimesOut;
    double _cropSideMargins;
    double _cropWheelSize;
    double _cropRecomposeDelay;
    double _previewOriginalDuration;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double previewOriginalDuration; // @synthesize previewOriginalDuration=_previewOriginalDuration;
@property(nonatomic) _Bool previewOriginalTimesOut; // @synthesize previewOriginalTimesOut=_previewOriginalTimesOut;
@property(nonatomic) _Bool previewOriginalAllowsLongPress; // @synthesize previewOriginalAllowsLongPress=_previewOriginalAllowsLongPress;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
@property(nonatomic) double cropRecomposeDelay; // @synthesize cropRecomposeDelay=_cropRecomposeDelay;
@property(nonatomic) _Bool autoCropEnabled; // @synthesize autoCropEnabled=_autoCropEnabled;
@property(nonatomic) _Bool cropMaskBlurred; // @synthesize cropMaskBlurred=_cropMaskBlurred;
@property(nonatomic) double cropWheelSize; // @synthesize cropWheelSize=_cropWheelSize;
@property(nonatomic) double cropSideMargins; // @synthesize cropSideMargins=_cropSideMargins;
@property(nonatomic) _Bool allowAnyPlugin; // @synthesize allowAnyPlugin=_allowAnyPlugin;
@property(nonatomic) _Bool showResetToolButton; // @synthesize showResetToolButton=_showResetToolButton;
@property(nonatomic) _Bool showLevelIndicator; // @synthesize showLevelIndicator=_showLevelIndicator;
- (void)setDefaultValues;

@end

