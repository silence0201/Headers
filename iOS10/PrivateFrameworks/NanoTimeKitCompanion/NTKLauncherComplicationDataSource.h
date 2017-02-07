//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource
{
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1;
- (id)_complicationApplicationIdentifier;
- (id)_appTintColor;
- (id)_appImage;
- (id)_appImageProvider;
- (id)_appTitle;
- (id)_extraLarge;
- (id)_circularTemplateMedium:(_Bool)arg1;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)_currentTimelineEntry;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (unsigned long long)timelineAnimationBehavior;

@end
