//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView
{
    NSArray *_constraints;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setUsesStaticScrollBar:(_Bool)arg1;
- (double)_contentFitCanScrollThreshold;
- (id)initWithContentView:(id)arg1;

@end

