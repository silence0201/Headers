//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    NSString *_encryptionScheme;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)init;

@end

