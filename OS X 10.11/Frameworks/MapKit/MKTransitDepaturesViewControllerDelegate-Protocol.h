//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKTransitAttributionDetailsViewController, MKTransitDeparturesViewController, NSArray;
@protocol GEOTransitConnectionInfo, MKTransitLineMarker;

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectAttributionController:(MKTransitAttributionDetailsViewController *)arg2;
@end

