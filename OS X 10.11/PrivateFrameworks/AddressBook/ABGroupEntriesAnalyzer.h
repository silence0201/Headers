//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, NSArray, NSMutableArray;
@protocol ABAccountHidingPolicy;

@interface ABGroupEntriesAnalyzer : NSObject
{
    NSArray *_accounts;
    ABAddressBook *_addressBook;
    NSMutableArray *_directoryAccounts;
    NSMutableArray *_persistentAccounts;
    NSMutableArray *_smartGroups;
    NSMutableArray *_visibleAccounts;
    id <ABAccountHidingPolicy> _accountHidingPolicy;
}

- (void)collectSmartGroups;
- (void)collectDirectoryAccounts;
- (void)collectPersistentAccounts;
- (void)collectVisibleAccounts;
- (void)analyzeAccount:(id)arg1;
- (void)analyzeAccounts;
- (id)smartGroups;
- (id)persistentAccounts;
- (id)directoryAccounts;
- (void)dealloc;
- (id)initWithAccounts:(id)arg1 addressBook:(id)arg2 hidingPolicy:(id)arg3;

@end

