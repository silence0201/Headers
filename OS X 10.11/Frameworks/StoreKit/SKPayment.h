//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSMutableCopying-Protocol.h>

@class NSData, NSString;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

+ (id)paymentWithProduct:(id)arg1;
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (BOOL)isHosted;
@property(readonly, copy) NSData *requestData;
@property(readonly) long long quantity;
@property(readonly, copy) NSString *productIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
