//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SKPaymentInternal : NSObject <NSCopying>
{
    NSString *_productIdentifier;
    BOOL _hosted;
    long long _quantity;
    NSData *_requestData;
    NSString *_applicationUsername;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

