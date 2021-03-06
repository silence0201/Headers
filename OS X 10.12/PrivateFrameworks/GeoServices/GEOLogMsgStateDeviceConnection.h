//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying>
{
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    int _deviceNetworkConnectivity;
    struct {
        unsigned int deviceNetworkConnectivity:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceCarrierName; // @synthesize deviceCarrierName=_deviceCarrierName;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceCarrierName;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceNetworkConnectivity;
@property(nonatomic) int deviceNetworkConnectivity; // @synthesize deviceNetworkConnectivity=_deviceNetworkConnectivity;
- (void)dealloc;

@end

