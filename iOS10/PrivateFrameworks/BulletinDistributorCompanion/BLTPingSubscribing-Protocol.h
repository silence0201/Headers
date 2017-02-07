//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSArray, NSSet, NSString;

@protocol BLTPingSubscribing <NSObject>
- (NSSet *)sectionIDsForBulletins;
- (void)pingSubscriberDidLoad;
- (NSArray *)subscriptionInfos;
- (NSSet *)sectionIDs;
- (void)pingWithBulletin:(BBBulletin *)arg1 ack:(void (^)(void))arg2;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2 ack:(void (^)(void))arg3;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
@end
