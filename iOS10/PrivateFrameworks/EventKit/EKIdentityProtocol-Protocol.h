//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@class NSPredicate, NSString, NSURL;

@protocol EKIdentityProtocol <NSObject>
- (NSString *)lastName;
- (NSString *)firstName;
- (NSString *)emailAddress;
- (NSString *)name;

@optional
- (NSPredicate *)contactPredicate;
- (NSURL *)URL;
@end

