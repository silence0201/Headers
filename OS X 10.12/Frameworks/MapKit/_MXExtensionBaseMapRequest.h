//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MXExtensionObject.h>

#import <MapKit/_MXExtensionRequestObject-Protocol.h>

@class NSString;

@interface _MXExtensionBaseMapRequest : _MXExtensionObject <_MXExtensionRequestObject>
{
    CDStruct_02837cd9 _mapRect;
}

+ (BOOL)supportsSecureCoding;
+ (void)load;
+ (void)dispatchRequest:(id)arg1 toVendor:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)supportedByExtensionWithCapabilities:(id)arg1;
+ (id)serviceProtocol;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
