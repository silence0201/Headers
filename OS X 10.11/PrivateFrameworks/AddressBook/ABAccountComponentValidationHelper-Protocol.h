//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAccountComponents, NSString;

@protocol ABAccountComponentValidationHelper <NSObject>
- (NSString *)accountName;
- (NSString *)className;
- (BOOL)isAccountComponentsValid;
- (id)initWithAccountComponents:(ABAccountComponents *)arg1;
@end

