//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapItem, MKPlacePhotosView, UIImageView;

@protocol MKPlacePhotosViewDelegate <NSObject>
- (MKMapItem *)placePhotoViewerGetDelegatesMapItem:(MKPlacePhotosView *)arg1;
- (void)placePhotoViewer:(MKPlacePhotosView *)arg1 attributionTappedForPhotoAtIndex:(unsigned long long)arg2;
- (UIImageView *)placePhotoViewer:(MKPlacePhotosView *)arg1 viewForPhotoAtIndex:(unsigned long long)arg2;
@end

