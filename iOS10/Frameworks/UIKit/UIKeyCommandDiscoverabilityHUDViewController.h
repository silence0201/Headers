//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController
{
    NSArray *_keyCommands;
    struct __GSKeyboard *_keyboard;
}

- (void).cxx_destruct;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;

// Remaining properties
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDView *view; // @dynamic view;

@end

