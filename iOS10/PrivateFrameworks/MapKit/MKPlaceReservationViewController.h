//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceReservationRowView, _MKPlaceReservationInfo;

__attribute__((visibility("hidden")))
@interface MKPlaceReservationViewController : MKPlaceSectionViewController
{
    MKPlaceReservationRowView *_reservationCell;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property(retain, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
- (void).cxx_destruct;
- (void)_updateReservationInfoAnimated:(_Bool)arg1;
- (void)viewDidLoad;

@end

