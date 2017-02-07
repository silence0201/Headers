//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>
{
    PKPaymentMethod *_paymentMethod;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
    NSData *_paymentData;
    NSURL *_redeemURL;
}

+ (id)simulatedTokenForNetwork:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentTokenWithProtobuf:(id)arg1;
@property(retain, nonatomic) NSURL *redeemURL; // @synthesize redeemURL=_redeemURL;
@property(copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *paymentInstrumentName; // @synthesize paymentInstrumentName=_paymentInstrumentName;
@property(retain, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end
