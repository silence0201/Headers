//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BKSAnimationFenceHandle, NSArray, NSData, NSString, NSValue, UIColor;

@protocol _UIRemoteViewController_ViewControllerOperatorInterface
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(_Bool)arg2 canRedo:(_Bool)arg3;
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(_Bool)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 hidden:(_Bool)arg2 updateAnimation:(long long)arg3;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(_Bool)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(_Bool)arg2 fence:(BKSAnimationFenceHandle *)arg3 withReplyHandler:(void (^)(struct CGSize))arg4;
- (void)__setViewServiceIsDisplayingPopover:(_Bool)arg1;
- (void)__dismissTextServiceSessionAnimated:(_Bool)arg1;
- (void)__showServiceForText:(NSString *)arg1 type:(long long)arg2 fromRectValue:(NSValue *)arg3 replyHandler:(void (^)(id, NSError *))arg4;
- (void)__viewServiceDidUpdateTintColor:(UIColor *)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__dismissActionSheetWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)__presentActionSheetFromYCoordinate:(double)arg1 withTitle:(NSString *)arg2 buttonTitles:(NSArray *)arg3 cancelButtonIndex:(long long)arg4 destructiveButtonIndex:(long long)arg5 style:(long long)arg6;
@end

