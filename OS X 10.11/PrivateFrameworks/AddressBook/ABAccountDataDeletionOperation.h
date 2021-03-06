//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ABAccountRepository, NSString;

__attribute__((visibility("hidden")))
@interface ABAccountDataDeletionOperation : NSOperation
{
    ABAccountRepository *_accountRepository;
    NSString *_accountIdentifier;
}

- (void)deleteDataFromAddressBook:(id)arg1;
- (id)makeAddressBook;
- (void)main;
- (void)dealloc;
- (id)initWithAccountRepository:(id)arg1 accountIdentifier:(id)arg2;

@end

