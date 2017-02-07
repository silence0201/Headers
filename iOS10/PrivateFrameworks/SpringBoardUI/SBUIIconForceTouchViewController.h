//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SBUIIconForceTouchControllerDataProvider, SBUIIconForceTouchIconViewWrapperView, SBUIIconForceTouchVisualEffectView, SBUIIconForceTouchWrapperViewController, UIView;
@protocol SBUIIconForceTouchViewControllerDelegate;

@interface SBUIIconForceTouchViewController : UIViewController <UIGestureRecognizerDelegate>
{
    SBUIIconForceTouchVisualEffectView *_visualEffectView;
    UIView *_parallaxView;
    SBUIIconForceTouchIconViewWrapperView *_iconViewWrapperViewBelow;
    SBUIIconForceTouchWrapperViewController *_primaryViewController;
    SBUIIconForceTouchWrapperViewController *_secondaryViewController;
    SBUIIconForceTouchIconViewWrapperView *_iconViewWrapperViewAbove;
    NSArray *_initialLayoutConstraints;
    NSArray *_showingLayoutConstraints;
    NSMutableArray *_presentCompletionHandlers;
    NSMutableArray *_dismissCompletionHandlers;
    double _smoothedValue;
    double _currentPeekProgress;
    SBUIIconForceTouchControllerDataProvider *_dataProvider;
    long long _state;
    long long _layout;
    id <SBUIIconForceTouchViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBUIIconForceTouchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) SBUIIconForceTouchControllerDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_scaleIconViewWithPercent:(double)arg1;
- (void)_revealWithRelativeForce:(double)arg1;
- (void)_dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_peekAnimated:(_Bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (long long)_layoutForDataProvider:(id)arg1;
- (_Bool)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)peekAnimated:(_Bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(_Bool)arg3;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
