//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIView, _UIQueuingScrollView;

@protocol _UIQueuingScrollViewDelegate <NSObject>
- (_Bool)queuingScrollViewShouldLayoutSubviews:(_UIQueuingScrollView *)arg1;
- (void)queuingScrollViewDidFinishScrolling:(_UIQueuingScrollView *)arg1;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didBailoutOfScrollAndRevealedView:(UIView *)arg2;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didEndManualScroll:(_Bool)arg2 toRevealView:(UIView *)arg3 direction:(long long)arg4 animated:(_Bool)arg5 didFinish:(_Bool)arg6 didComplete:(_Bool)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didCommitManualScroll:(_Bool)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 direction:(long long)arg5 animated:(_Bool)arg6 canComplete:(_Bool)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 willManuallyScroll:(_Bool)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 animated:(_Bool)arg5;
@end

