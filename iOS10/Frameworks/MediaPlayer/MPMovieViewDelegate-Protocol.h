//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMovieView, UIView, UIWindow;

@protocol MPMovieViewDelegate <NSObject>

@optional
- (void)movieView:(MPMovieView *)arg1 willMoveToSuperview:(UIView *)arg2;
- (void)movieViewDidMoveToWindow:(MPMovieView *)arg1;
- (void)movieView:(MPMovieView *)arg1 willMoveToWindow:(UIWindow *)arg2;
@end

