//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIRemoteViewFocusProxy-Protocol.h>
#import <UIKit/_UIScrollToTopView-Protocol.h>

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy>
{
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    _Bool _hasIntrinsicContentSize;
    struct CGSize _intrinsicContentSize;
}

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;
- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1;
- (id)_childFocusRegions;
- (_Bool)canBecomeFocused;
@property(readonly, nonatomic) _UIRemoteViewController *remoteViewController;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)isScrollEnabled;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

