//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UITapGestureRecognizer;
@protocol ADWebViewActionViewControllerDelegate;

@interface ADWebViewActionViewController : UIViewController
{
    UITapGestureRecognizer *_homeButtonGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *homeButtonGestureRecognizer; // @synthesize homeButtonGestureRecognizer=_homeButtonGestureRecognizer;
- (void)_homeButtonTapped:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <ADWebViewActionViewControllerDelegate> delegate; // @dynamic delegate;

@end

