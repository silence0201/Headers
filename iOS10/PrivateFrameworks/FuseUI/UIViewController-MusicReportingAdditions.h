//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSData, NSString;

@interface UIViewController (MusicReportingAdditions)
@property(copy, nonatomic, setter=music_setReportingRecommendationData:) NSData *music_reportingRecommendationData;
@property(copy, nonatomic, setter=music_setReportingFeatureName:) NSString *music_reportingFeatureName;
@property(readonly, copy, nonatomic) NSData *music_effectiveReportingRecommendationData;
@property(readonly, copy, nonatomic) NSString *music_effectiveReportingFeatureName;
- (void)music_configureWithJSReportingInformation:(id)arg1;
@end
