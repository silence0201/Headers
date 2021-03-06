//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLRegion.h>

@class NSNumber, NSUUID;

@interface CLBeaconRegion : CLRegion
{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
}

+ (_Bool)supportsSecureCoding;
+ (id)any;
@property(readonly, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(readonly, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
@property(nonatomic) _Bool notifyEntryStateOnDisplay;
- (id)peripheralDataWithMeasuredPower:(id)arg1;
- (BOOL)_measuredPowerForDevice;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithClientRegion:(CDStruct_3afce72c)arg1;
- (id)init;

@end

