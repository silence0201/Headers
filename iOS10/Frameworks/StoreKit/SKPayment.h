//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

+ (id)paymentWithProductIdentifier:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *requestParameters;
@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) _Bool simulatesAskToBuyInSandbox;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

