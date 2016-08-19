//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKImageSourceKey.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>
#import <MapKit/GEOTransitIconDataSource-Protocol.h>
#import <MapKit/GEOTransitShieldDataSource-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface VKImageSourceKey (MKTransitArtworkExtras) <GEOTransitArtworkDataSource, GEOTransitIconDataSource, GEOTransitShieldDataSource>
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) _Bool hasRoutingIncidentBadge;
@property(readonly, nonatomic) long long iconType;
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) long long artworkUseType;
@property(readonly, nonatomic) long long artworkSourceType;

// Remaining properties
@property(readonly, nonatomic) unsigned int cartoID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned int defaultTransitType;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int iconAttributeKey;
@property(readonly, nonatomic) unsigned int iconAttributeValue;
@property(readonly, nonatomic) NSString *shieldText;
@property(readonly, nonatomic) long long shieldType;
@property(readonly) Class superclass;
@end

