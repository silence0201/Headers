//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel;
@protocol PUIrisBadgeVisibilityControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUIrisBadgeVisibilityController : NSObject <PUAssetViewModelChangeObserver>
{
    unsigned long long _requestID;
    _Bool _requestIsInProgress;
    PUAssetViewModel *_assetViewModel;
    id <PUIrisBadgeVisibilityControllerDelegate> _delegate;
    unsigned long long _appearanceState;
}

@property(nonatomic) unsigned long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(nonatomic) __weak id <PUIrisBadgeVisibilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_cancelHideRequest;
- (void)_enqueueHideRequest;
- (void)_updateAppearance;
- (void)_transitionToAppearanceState:(unsigned long long)arg1;
- (unsigned long long)_defaultAppearanceState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

