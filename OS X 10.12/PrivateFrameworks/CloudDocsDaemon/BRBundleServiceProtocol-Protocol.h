//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol BRBundleServiceProtocol
- (void)getTypeSupportForBundleID:(NSString *)arg1 typeName:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)getEntitledContainerIDsForBundleID:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)getEntitlementsForBundleID:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSURL *, NSError *))arg2;
- (void)extractMetadataForContainerID:(NSString *)arg1 bundleID:(NSString *)arg2 minimumBundleVersion:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
@end
