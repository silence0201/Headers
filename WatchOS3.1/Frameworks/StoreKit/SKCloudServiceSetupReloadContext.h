//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_userInfo;
    NSURL *_cloudServiceSetupURL;
    NSString *_action;
    NSArray *_queryItems;
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_referrerURL;
    NSString *_serializedUserInfo;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *serializedUserInfo; // @synthesize serializedUserInfo=_serializedUserInfo;
@property(retain, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(copy, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSURL *cloudServiceSetupURL; // @synthesize cloudServiceSetupURL=_cloudServiceSetupURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(copy, nonatomic) NSDictionary *userInfo;

@end

