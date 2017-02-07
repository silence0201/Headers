//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate-Protocol.h>

@class NSArray, NSString, UIPreviewAction, UITapGestureRecognizer, UIView, UIViewController, _UIPlatterMenuDynamicsController, _UIPreviewActionSheetView, _UIPreviewQuickActionView;
@protocol _UIPreviewActionsControllerDelegate;

@interface _UIPreviewActionsController : NSObject <_UIPlatterMenuDynamicsControllerDelegate>
{
    UIView *_containerView;
    UIView *_platterView;
    UIViewController *_presentedViewController;
    id <_UIPreviewActionsControllerDelegate> _delegate;
    _UIPlatterMenuDynamicsController *_platterDynamicsController;
    _UIPreviewActionSheetView *_previewActionsView;
    NSArray *_currentPreviewActionItems;
    UIPreviewAction *_leadingPreviewAction;
    UIPreviewAction *_trailingPreviewAction;
    _UIPreviewQuickActionView *_leadingPreviewActionView;
    _UIPreviewQuickActionView *_trailingPreviewActionView;
    UITapGestureRecognizer *_tapToDismissRecognizer;
}

+ (id)actionsControllerWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4;
@property(retain, nonatomic) UITapGestureRecognizer *tapToDismissRecognizer; // @synthesize tapToDismissRecognizer=_tapToDismissRecognizer;
@property(retain, nonatomic) _UIPreviewQuickActionView *trailingPreviewActionView; // @synthesize trailingPreviewActionView=_trailingPreviewActionView;
@property(retain, nonatomic) _UIPreviewQuickActionView *leadingPreviewActionView; // @synthesize leadingPreviewActionView=_leadingPreviewActionView;
@property(retain, nonatomic) UIPreviewAction *trailingPreviewAction; // @synthesize trailingPreviewAction=_trailingPreviewAction;
@property(retain, nonatomic) UIPreviewAction *leadingPreviewAction; // @synthesize leadingPreviewAction=_leadingPreviewAction;
@property(copy, nonatomic) NSArray *currentPreviewActionItems; // @synthesize currentPreviewActionItems=_currentPreviewActionItems;
@property(retain, nonatomic) _UIPreviewActionSheetView *previewActionsView; // @synthesize previewActionsView=_previewActionsView;
@property(retain, nonatomic) _UIPlatterMenuDynamicsController *platterDynamicsController; // @synthesize platterDynamicsController=_platterDynamicsController;
@property(nonatomic) __weak id <_UIPreviewActionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint)arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (id)trailingSwipeActionView;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (id)leadingSwipeActionView;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForMenuPresented;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;
- (void)_memoizePreviewActionViews;
- (void)_disablePlatterController;
- (_Bool)_shouldDismiss;
- (void)_dismissWithAction:(id)arg1;
- (void)_dismissForSelectedSwipeAction;
- (void)_updateSwipeActionsState;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (double)_quickActionSelectionOffset;
- (_Bool)_previewActionsSheetIsVisible;
- (_Bool)_hasSelectedSwipeAction;
- (_Bool)_hasPreviewSwipeActions;
- (struct CGRect)_initialPlatterFrame;
- (void)tappedToDismiss:(id)arg1;
- (void)endPanningAtLocation:(struct CGPoint)arg1;
- (void)updatePanningLocation:(struct CGPoint)arg1;
- (void)beginPanningAtLocation:(struct CGPoint)arg1;
- (void)dealloc;
- (void)_actionsControllerCommonInit;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

