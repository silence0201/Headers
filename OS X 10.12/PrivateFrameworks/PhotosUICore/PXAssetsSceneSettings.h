//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings
{
    BOOL _enableImagePreheating;
    double _transitionDuration;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL enableImagePreheating; // @synthesize enableImagePreheating=_enableImagePreheating;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void)setDefaultValues;

@end

