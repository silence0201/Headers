//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/MKInfoCardPhotoDelegate-Protocol.h>
#import <MapKit/MKPlaceAttributionCellProvider-Protocol.h>

@class MKInfoCardPhotoViewController, MKMapItem, NSArray, NSCollectionView, NSLayoutConstraint, NSOperationQueue, NSString, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate;

@interface MKPlacePhotosViewController : _MKUIViewController <MKInfoCardPhotoDelegate, MKPlaceAttributionCellProvider>
{
    NSOperationQueue *_photoDownloadQueue;
    BOOL _showAttribution;
    MKMapItem *mapItem;
    id <MKPlaceCardPhotosControllerDelegate> photosControllerDelegate;
    NSArray *_photos;
    MKInfoCardPhotoViewController *_smallPhotoController;
    MKInfoCardPhotoViewController *_bigPhotoController;
    NSCollectionView *photosView;
    NSLayoutConstraint *photoContainerLeftConstraint;
    _MKPlaceViewController *_owner;
}

@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) BOOL showAttribution; // @synthesize showAttribution=_showAttribution;
@property(nonatomic) __weak NSLayoutConstraint *photoContainerLeftConstraint; // @synthesize photoContainerLeftConstraint;
@property(nonatomic) __weak NSCollectionView *photosView; // @synthesize photosView;
@property(nonatomic) __weak MKInfoCardPhotoViewController *bigPhotoController; // @synthesize bigPhotoController=_bigPhotoController;
@property(nonatomic) __weak MKInfoCardPhotoViewController *smallPhotoController; // @synthesize smallPhotoController=_smallPhotoController;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem;
- (void).cxx_destruct;
- (id)nibBundle;
- (id)nibName;
- (id)_photoAttributionString;
- (void)_updatePhotos;
- (void)selectInfoCardPhoto:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

