//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOTransitAttribution-Protocol.h>

@class GEOPDTransitAttribution, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution>
{
    GEOPDTransitAttribution *_transitAttribution;
}

@property(readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
- (void)dealloc;
- (id)initWithTransitAttribution:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

