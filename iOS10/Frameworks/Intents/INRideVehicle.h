//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideVehicleExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLLocation, INImage, NSString;

@interface INRideVehicle : NSObject <INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding>
{
    CLLocation *_location;
    NSString *_registrationPlate;
    NSString *_manufacturer;
    NSString *_model;
    INImage *_mapAnnotationImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INImage *mapAnnotationImage; // @synthesize mapAnnotationImage=_mapAnnotationImage;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *registrationPlate; // @synthesize registrationPlate=_registrationPlate;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

