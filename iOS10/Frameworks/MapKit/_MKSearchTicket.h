//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKTicket.h>

#import <MapKit/MKMapServiceSearchTicket-Protocol.h>

@class GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>
{
}

@property(readonly, nonatomic) NSString *searchQuery;
- (id)initWithSearchTicket:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *exactMapItems;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) double requestResponseTime;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

