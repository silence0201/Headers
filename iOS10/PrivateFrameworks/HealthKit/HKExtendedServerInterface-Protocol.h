//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSURL, NSUUID, _HKAchievement;

@protocol HKExtendedServerInterface <NSObject>
- (void)remote_resetAchievementDefinitionAlertedStates:(_Bool)arg1 availabilityStates:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(void (^)(NSDate *, NSError *))arg1;
- (void)remote_deleteAllAchievementsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_deleteAchievementWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setCurrentActivityCacheOverrideDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(void (^)(NSArray *, _Bool, NSError *))arg2;
- (void)remote_addAchievement:(_HKAchievement *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_updateAllAchievementAssetsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_setAchievementAssetsServerURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_markAchievementAsViewed:(_HKAchievement *)arg1 completion:(void (^)(_HKAchievement *, NSError *))arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_markAchievementsAlerted:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(NSDate *)arg1 end:(NSDate *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(void (^)(long long, NSError *))arg1;
@end

