//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVHomeSharingServices/NSCopying-Protocol.h>
#import <TVHomeSharingServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface TVHSSDataServerID : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _databaseID;
    unsigned long long _machineID;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) unsigned long long machineID; // @synthesize machineID=_machineID;
@property(nonatomic) unsigned long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
- (_Bool)_isEqualToDataServerID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMachineID:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5;

@end

