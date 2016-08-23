//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    NSString *_email;
    NSString *_password;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithEmail:(id)arg1 password:(id)arg2;

@end
