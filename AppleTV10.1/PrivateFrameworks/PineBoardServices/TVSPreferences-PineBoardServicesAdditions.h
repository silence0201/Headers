//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSPreferences.h>

@interface TVSPreferences (PineBoardServicesAdditions)
+ (id)sharedPineBoardServicesPreferences;
@property(nonatomic) _Bool pbs_shouldShowWatchListButtonBehaviorAlert;
@property(nonatomic) _Bool pbs_watchListButtonBehaviorEnabled;
@property(nonatomic) _Bool pbs_shouldShowUnconfiguredVolumeButtonsAlert;
@property(nonatomic) _Bool pbs_shouldObliterateOnLaunch;
@property(nonatomic) _Bool pbs_shouldShowWhatsNew;
@property(readonly, nonatomic) _Bool pbs_shouldShowNonDefaultSystemApps;
@property(readonly, nonatomic) _Bool pbs_shouldShowInternalApps;
@property(readonly, nonatomic) _Bool pbs_shouldShowAppleTVAppsOnly;
@end
