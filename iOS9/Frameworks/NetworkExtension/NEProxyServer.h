//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _authenticationRequired;
    NSString *_address;
    long long _port;
    NSString *_username;
    NSString *_password;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
@property long long type; // @synthesize type=_type;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property _Bool authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(readonly) long long port; // @synthesize port=_port;
@property(readonly) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)copyPassword;
- (void)removeFromKeychain;
- (void)syncWithKeychain;
- (id)copyProtectionSpace;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3;
- (id)initWithAddress:(id)arg1 port:(long long)arg2;

@end

