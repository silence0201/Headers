//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABACAccount, NSString;

@protocol ABContactsAccountsServiceProtocol <NSObject>
- (void)removeAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)saveVerifiedAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)passwordForAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)mergeLocalDataIntoParentAccountWithID:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)discoverPropertiesForAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(ABACAccount *, NSError *))arg2;
- (void)getAccountWithABAccountIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(ABACAccount *, NSError *))arg2;
- (void)getAllContactsAccountsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end

