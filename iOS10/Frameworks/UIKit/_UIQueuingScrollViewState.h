//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UITransitionState.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollViewState : _UITransitionState
{
    UIView *_view;
    UIViewController *_viewController;
    _Bool _manual;
}

@property(readonly, nonatomic, getter=isManual) _Bool manual; // @synthesize manual=_manual;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

