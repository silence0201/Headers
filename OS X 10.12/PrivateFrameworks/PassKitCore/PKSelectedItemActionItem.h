//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSDictionary, NSString;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding>
{
    BOOL _serviceProviderDataRequiresLocalBalance;
    NSString *_identifier;
    NSString *_title;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSDate *_newExpirationDate;
    NSDictionary *_serviceProviderData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL serviceProviderDataRequiresLocalBalance; // @synthesize serviceProviderDataRequiresLocalBalance=_serviceProviderDataRequiresLocalBalance;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(readonly, copy, nonatomic) NSDate *newExpirationDate; // @synthesize newExpirationDate=_newExpirationDate;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderDataWithCurrentLocalBalance:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1;

@end
