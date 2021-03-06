//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;
    NSString *_accountNumber;
    long long _accountType;
    INSpeakableString *_organizationName;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;

@end

