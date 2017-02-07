//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying>
{
    double _ingestedDate;
    NSMutableArray *_associatedWebDomains;
    NSString *_displayName;
    NSData *_manifestHash;
    NSString *_passID;
    NSMutableArray *_paymentApplications;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    BOOL _supportsAutomaticSelection;
    struct {
        unsigned int ingestedDate:1;
        unsigned int supportsAutomaticSelection:1;
    } _has;
}

+ (Class)associatedWebDomainsType;
+ (Class)paymentApplicationsType;
@property(nonatomic) BOOL supportsAutomaticSelection; // @synthesize supportsAutomaticSelection=_supportsAutomaticSelection;
@property(retain, nonatomic) NSMutableArray *associatedWebDomains; // @synthesize associatedWebDomains=_associatedWebDomains;
@property(retain, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(nonatomic) double ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSMutableArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(retain, nonatomic) NSString *passID; // @synthesize passID=_passID;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportsAutomaticSelection;
- (id)associatedWebDomainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedWebDomainsCount;
- (void)addAssociatedWebDomains:(id)arg1;
- (void)clearAssociatedWebDomains;
@property(readonly, nonatomic) BOOL hasPrimaryAccountIdentifier;
@property(readonly, nonatomic) BOOL hasManifestHash;
@property(readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property(nonatomic) BOOL hasIngestedDate;
- (id)paymentApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentApplicationsCount;
- (void)addPaymentApplications:(id)arg1;
- (void)clearPaymentApplications;
@property(readonly, nonatomic) BOOL hasPassID;
@property(readonly, nonatomic) BOOL hasDisplayName;

@end
