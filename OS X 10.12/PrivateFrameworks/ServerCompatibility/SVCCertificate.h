//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServerCompatibility/SVCObject.h>

@class NSArray, NSDate, NSImage, NSString;

@interface SVCCertificate : SVCObject
{
    BOOL _isRootCertificate;
    BOOL _isAuthorityCertificate;
    BOOL _expired;
    int _certificateStatus;
    NSString *_name;
    NSArray *_emailAddresses;
    NSString *_issuer;
    NSString *_serialNumber;
    NSDate *_firstValidDate;
    NSDate *_expirationDate;
    NSString *_certificateIconName;
}

@property int certificateStatus; // @synthesize certificateStatus=_certificateStatus;
@property(copy) NSString *certificateIconName; // @synthesize certificateIconName=_certificateIconName;
@property(readonly, getter=isExpired) BOOL expired; // @synthesize expired=_expired;
@property(readonly) BOOL isAuthorityCertificate; // @synthesize isAuthorityCertificate=_isAuthorityCertificate;
@property(readonly) BOOL isRootCertificate; // @synthesize isRootCertificate=_isRootCertificate;
@property(readonly, copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy) NSDate *firstValidDate; // @synthesize firstValidDate=_firstValidDate;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSString *issuer; // @synthesize issuer=_issuer;
@property(readonly, copy) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *icon;
- (id)initWithSecCertificateRef:(struct OpaqueSecCertificateRef *)arg1;

@end
