//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/MKMapViewDelegate-Protocol.h>
#import <PhotosUI/PLDismissableViewController-Protocol.h>
#import <PhotosUI/PUMapAnnotationManagerDataSource-Protocol.h>
#import <PhotosUI/PUOneUpPresentationHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate-Protocol.h>
#import <PhotosUI/PUStackedAlbumTransitionDelegate-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class MKMapView, NSArray, NSMutableArray, NSObject, NSString, PHFetchResult, PUDisplayLink, PUMapAnnotationManager, PUMapViewControllerSpec, PUOneUpPresentationHelper, PUPhotoBrowserOneUpPresentationAdaptor;
@protocol PLDiagnosticsProvider;

__attribute__((visibility("hidden")))
@interface PUMapViewController : UIViewController <PXPhotoLibraryUIChangeObserver, PUOneUpPresentationHelperDelegate, PLDismissableViewController, MKMapViewDelegate, PUMapAnnotationManagerDataSource, PUPhotoBrowserZoomTransitionDelegate, PUStackedAlbumTransitionDelegate>
{
    MKMapView *_mapView;
    NSMutableArray *_mapAnnotations;
    NSArray *_mapItems;
    PUMapAnnotationManager *_annotationManager;
    PUMapViewControllerSpec *_spec;
    _Bool _useCurrentUserLocation;
    double _annotationWidth;
    double _borderAnnotationPadding;
    struct CGSize _annotationSize;
    _Bool _updatedInitialAnnotations;
    PHFetchResult *_assetsFetchResult;
    _Bool _shouldShowToolbar;
    _Bool _shouldShowTabBar;
    unsigned long long _maxItemsInitialZoom;
    NSObject<PLDiagnosticsProvider> *_diagnosticsProvider;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    PUPhotoBrowserOneUpPresentationAdaptor *__photoBrowserOneUpPresentationAdaptor;
    PUDisplayLink *__oneUpPresentationHelperDisplayLink;
}

@property(retain, nonatomic, setter=_setOneUpPresentationHelperDisplayLink:) PUDisplayLink *_oneUpPresentationHelperDisplayLink; // @synthesize _oneUpPresentationHelperDisplayLink=__oneUpPresentationHelperDisplayLink;
@property(retain, nonatomic, setter=_setPhotoBrowserOneUpPresentationAdaptor:) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor; // @synthesize _photoBrowserOneUpPresentationAdaptor=__photoBrowserOneUpPresentationAdaptor;
@property(retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // @synthesize _oneUpPresentationHelper=__oneUpPresentationHelper;
@property(retain, nonatomic) NSObject<PLDiagnosticsProvider> *diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(nonatomic) _Bool shouldShowTabBar; // @synthesize shouldShowTabBar=_shouldShowTabBar;
@property(nonatomic) _Bool shouldShowToolbar; // @synthesize shouldShowToolbar=_shouldShowToolbar;
@property(nonatomic) unsigned long long maxItemsInitialZoom; // @synthesize maxItemsInitialZoom=_maxItemsInitialZoom;
- (void).cxx_destruct;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleReportButton:(id)arg1;
- (_Bool)oneUpPresentationHelperDisableFinalFadeoutAnimation:(id)arg1;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)_ensureOneUpPresentationHelperWithFetchResult:(id)arg1;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forCollection:(id)arg3;
- (id)_annotationViewForPhotoToken:(id)arg1;
- (void)zoomTransition:(id)arg1 setVisibility:(_Bool)arg2 forPhotoToken:(id)arg3;
- (struct CGRect)zoomTransition:(id)arg1 frameForPhotoToken:(id)arg2 operation:(long long)arg3;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (id)mapAnnotationManager:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct CLLocationCoordinate2D)arg3;
- (void)_displayDetailsForAlbum:(struct NSObject *)arg1;
- (void)_showLocations:(id)arg1 animated:(_Bool)arg2;
- (CDStruct_1f1f9651)_mapRectWithDefaultZoomCenteredAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (void)_updateNavItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)_createAnnotationManager;
- (void)_updateAnnotationsForMapItems:(id)arg1 shouldScroll:(_Bool)arg2;
- (void)_updateAnnotationsForMapItems:(id)arg1;
- (void)_addLocationsToArray:(id)arg1 forInitialZoomWithMapItems:(id)arg2;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
- (void)_updateMapAssets;
- (void)dealloc;
- (id)init;
- (id)initWithSpec:(id)arg1 assetsFetchResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
