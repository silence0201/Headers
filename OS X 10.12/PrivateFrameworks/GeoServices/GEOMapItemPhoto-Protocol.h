//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOPhoto, NSString, NSURL;

@protocol GEOMapItemPhoto <NSObject>
@property(readonly, nonatomic) GEOPhoto *geoPhoto;
@property(readonly, nonatomic) BOOL displayFullPhotoInline;
@property(readonly, nonatomic) NSURL *licenseURL;
@property(readonly, nonatomic) NSString *licenseDescription;
@property(readonly, nonatomic) NSString *caption;
@property(readonly, nonatomic) NSString *author;
@end

