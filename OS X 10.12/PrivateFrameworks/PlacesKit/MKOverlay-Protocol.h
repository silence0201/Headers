//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlacesKit/MKAnnotation-Protocol.h>

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (BOOL)canReplaceMapContent;
- (BOOL)intersectsMapRect:(CDStruct_02837cd9)arg1;
@end
