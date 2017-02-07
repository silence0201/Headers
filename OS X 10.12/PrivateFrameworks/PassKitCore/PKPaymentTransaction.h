//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSDecimalNumber, NSString, PKMerchant;

@interface PKPaymentTransaction : NSObject <NSSecureCoding>
{
    BOOL _enRoute;
    BOOL _processedForLocation;
    BOOL _processedForMerchantCleanup;
    BOOL _processedForStations;
    BOOL _hasAssociatedPaymentApplication;
    BOOL _hasNotificationServiceData;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_transactionIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSDate *_transactionDate;
    PKMerchant *_merchant;
    NSString *_locality;
    NSString *_administrativeArea;
    NSDate *_locationDate;
    double _locationLatitude;
    double _locationLongitude;
    double _locationAltitude;
    double _locationHorizontalAccuracy;
    double _locationVerticalAccuracy;
    long long _transitType;
    unsigned long long _transitModifiers;
    NSString *_stationCodeProvider;
    NSData *_startStationCode;
    NSString *_startStation;
    NSData *_endStationCode;
    NSString *_endStation;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSource;
}

+ (BOOL)supportsSecureCoding;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(BOOL)arg3;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
@property(nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(nonatomic) BOOL hasNotificationServiceData; // @synthesize hasNotificationServiceData=_hasNotificationServiceData;
@property(nonatomic) BOOL hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) BOOL processedForStations; // @synthesize processedForStations=_processedForStations;
@property(nonatomic) BOOL processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property(nonatomic) BOOL processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property(copy, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *endStationCode; // @synthesize endStationCode=_endStationCode;
@property(copy, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSData *startStationCode; // @synthesize startStationCode=_startStationCode;
@property(copy, nonatomic) NSString *stationCodeProvider; // @synthesize stationCodeProvider=_stationCodeProvider;
@property(nonatomic) BOOL enRoute; // @synthesize enRoute=_enRoute;
@property(nonatomic) unsigned long long transitModifiers; // @synthesize transitModifiers=_transitModifiers;
@property(nonatomic) long long transitType; // @synthesize transitType=_transitType;
@property(nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property(nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property(nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(retain, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_transactionTypeString;
- (id)_transactionStatusString;
- (id)_transactionSourceString;
- (id)description;
@property(readonly, nonatomic) BOOL hasBackingData;
@property(readonly, nonatomic) BOOL hasTransactionSource;
@property(retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) __weak NSString *displayLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToPaymentTransaction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)init;

@end
