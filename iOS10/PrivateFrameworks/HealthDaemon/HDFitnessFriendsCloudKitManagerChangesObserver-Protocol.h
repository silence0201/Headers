//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class CKRecordZoneID, HDFitnessFriendsCloudKitManager, NSArray;

@protocol HDFitnessFriendsCloudKitManagerChangesObserver <NSObject>

@optional
- (void)cloudKitManagerDidUpdateAccountStatus:(HDFitnessFriendsCloudKitManager *)arg1;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewNotificationEvents:(NSArray *)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(void (^)(void))arg4;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewFriendAchievements:(NSArray *)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(void (^)(void))arg4;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewFriendWorkouts:(NSArray *)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(void (^)(void))arg4;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewActivitySnapshots:(NSArray *)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(void (^)(void))arg4;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didReceiveNewActivitySnapshotsForSelf:(NSArray *)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(void (^)(void))arg4;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewRemoteRelationships:(NSArray *)arg2 fromRecordZoneWithID:(CKRecordZoneID *)arg3 moreComing:(_Bool)arg4 changesProcessedHandler:(void (^)(void))arg5;
- (void)cloudKitManager:(HDFitnessFriendsCloudKitManager *)arg1 didRecieveNewRelationships:(NSArray *)arg2 fromRecordZoneWithID:(CKRecordZoneID *)arg3 moreComing:(_Bool)arg4 changesProcessedHandler:(void (^)(void))arg5;
- (void)cloudKitManagerDidEndUpdates:(HDFitnessFriendsCloudKitManager *)arg1;
- (void)cloudKitManagerDidBeginUpdates:(HDFitnessFriendsCloudKitManager *)arg1;
@end
