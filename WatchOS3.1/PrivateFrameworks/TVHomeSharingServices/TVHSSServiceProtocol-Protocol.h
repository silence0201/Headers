//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, TVHSSDataQueryInfo, TVHSSDataServerID, TVHSSLastAccessedMediaServerInfo, TVHSSRentalInfo;

@protocol TVHSSServiceProtocol <NSObject>
- (void)updateItemPropertiesWithDMAPItemID:(NSNumber *)arg1 properties:(NSDictionary *)arg2 serverID:(TVHSSDataServerID *)arg3;
- (void)checkinWithRentalInfo:(TVHSSRentalInfo *)arg1 serverID:(TVHSSDataServerID *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)checkoutWithRentalInfo:(TVHSSRentalInfo *)arg1 serverID:(TVHSSDataServerID *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)synchronizeKeybagForMediaServerWithID:(TVHSSDataServerID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)playbackDidTimeoutFromMediaServerWithID:(TVHSSDataServerID *)arg1;
- (void)playbackURLForMediaServerWithID:(TVHSSDataServerID *)arg1 itemID:(NSNumber *)arg2 protocol:(unsigned long long)arg3 itemFormat:(NSString *)arg4 reply:(void (^)(NSURL *, NSError *))arg5;
- (void)cancelQueryToMediaServerWithID:(TVHSSDataServerID *)arg1 queryID:(NSString *)arg2;
- (void)submitQueryToMediaServerWithID:(TVHSSDataServerID *)arg1 queryInfo:(TVHSSDataQueryInfo *)arg2 reply:(void (^)(_Bool, long long, NSArray *, NSDictionary *, NSError *, NSError *))arg3;
- (void)mediaServerClientConfigurationWithMediaServerID:(TVHSSDataServerID *)arg1 reply:(void (^)(_Bool, TVHSSDataClientConfiguration *, NSError *))arg2;
- (void)disconnectFromMediaServerWithID:(TVHSSDataServerID *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)connectToMediaServerWithID:(TVHSSDataServerID *)arg1 reply:(void (^)(_Bool, TVHSSDataClientConfiguration *, NSError *))arg2;
- (void)remeberLastAccessedMediaServerInfo:(TVHSSLastAccessedMediaServerInfo *)arg1;
- (void)lastAccessedMediaServerInfoWithReply:(void (^)(_Bool, TVHSSLastAccessedMediaServerInfo *, NSError *))arg1;
- (void)mediaServersWithReply:(void (^)(_Bool, NSArray *, NSError *))arg1;
- (void)disableMediaServerDiscovery;
- (void)enableMediaServerDiscoveryWithDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(NSString *)arg2 homeSharingPassword:(NSString *)arg3 reply:(void (^)(_Bool, TVHSSMediaServerDiscoveryConfiguration *, NSError *))arg4;
- (void)mediaServerDiscoveryConfigurationWithReply:(void (^)(_Bool, TVHSSMediaServerDiscoveryConfiguration *, NSError *))arg1;
@end

