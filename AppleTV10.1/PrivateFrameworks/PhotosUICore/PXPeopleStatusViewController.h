//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXPeopleStatusView;
@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController
{
    id <PXPeopleStatusViewDelegate> _delegate;
    PXPeopleStatusView *_statusView;
}

@property(retain, nonatomic) PXPeopleStatusView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) __weak id <PXPeopleStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_continuePressed:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;

@end

