//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapView, NSString;

@interface MKAccessibilityItem : NSObject
{
    MKMapView *_mapView;
    long long _type;
    NSString *_title;
    struct CGRect _frame;
    struct CLLocationCoordinate2D _coordinate;
    BOOL _selectable;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)sizeValue;
- (id)positionValue;
- (struct CGRect)_frameForCoodinate:(struct CLLocationCoordinate2D)arg1 size:(struct CGSize)arg2 mapView:(id)arg3;
- (id)initWithAnnotationMarker:(id)arg1 mapView:(id)arg2;
- (id)initWithLabelMarker:(id)arg1 mapView:(id)arg2;

@end
