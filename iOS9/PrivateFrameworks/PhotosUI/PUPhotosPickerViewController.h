//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PLAssetContainerListChangeObserver-Protocol.h>
#import <PhotosUI/PUSessionInfoObserver-Protocol.h>
#import <PhotosUI/UITabBarControllerDelegate-Protocol.h>

@class NSString, PHPhotosPickerOptions, PUPhotosPickerSessionInfo, PUPhotosPickerViewControllerSpec, PUTabbedLibraryViewController;

@interface PUPhotosPickerViewController : UIViewController <UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver>
{
    PUPhotosPickerViewControllerSpec *_spec;
    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;
    _Bool _needsToSetupOptions;
    int _currentContentMode;
    CDUnknownBlockType _completionHandler;
    PUTabbedLibraryViewController *__tabbedLibraryViewController;
    PHPhotosPickerOptions *_photosPickerOptions;
}

@property(retain, nonatomic) PHPhotosPickerOptions *photosPickerOptions; // @synthesize photosPickerOptions=_photosPickerOptions;
@property(retain, nonatomic, setter=_setTabbedLibraryViewController:) PUTabbedLibraryViewController *_tabbedLibraryViewController; // @synthesize _tabbedLibraryViewController=__tabbedLibraryViewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int currentContentMode; // @synthesize currentContentMode=_currentContentMode;
- (void).cxx_destruct;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)_initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2 orTargetAlbumName:(id)arg3 isLocal:(_Bool)arg4 options:(id)arg5;
- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 options:(id)arg3;
- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 isLocal:(_Bool)arg3;
- (id)initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

