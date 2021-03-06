//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MapKit/_MKCalloutAccessoryView-Protocol.h>

@class NSString;
@protocol _MKCalloutAccessoryView;

@interface _MKCalloutAccessoryWrapperView : NSView <_MKCalloutAccessoryView>
{
    NSView<_MKCalloutAccessoryView> *_view;
}

- (void).cxx_destruct;
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (double)_mapkit_calloutCustomRightMargin;
- (double)_mapkit_calloutCustomLeftMargin;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (void)_mapkit_setCalloutBackgroundColor:(id)arg1;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (struct CGSize)intrinsicContentSize;
- (id)initWithView:(id)arg1;
- (BOOL)isFlipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

