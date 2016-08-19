//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActionSheet.h>

#import <MediaPlayer/UIActionSheetDelegate-Protocol.h>

@class MPAVRoutingController, NSArray, NSString, UIViewController, UIWindow;

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    MPAVRoutingController *_routingController;
    unsigned long long _avItemType;
    CDUnknownBlockType _completionHandler;
    UIViewController *_viewControllerForActionSheet;
    UIWindow *_windowForActionSheet;
    _Bool _shouldPauseAfterDismissing;
    NSArray *_displayedRoutes;
}

- (void).cxx_destruct;
- (void)_debugButtonAction:(id)arg1;
- (id)_availableRoutes;
- (_Bool)_isDeviceVideoRoute:(id)arg1;
- (void)showInPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 backgroundStyle:(long long)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showWithValidInterfaceOrientationsBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showWithValidInterfaceOrientationMaskBlock:(CDUnknownBlockType)arg1 windowLevel:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showWithValidInterfaceOrientationMaskBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 routingController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

