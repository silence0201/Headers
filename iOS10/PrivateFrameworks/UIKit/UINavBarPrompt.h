//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface UINavBarPrompt : UIView
{
    UILabel *_label;
    UINavigationBar *_navBar;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (struct CGRect)promptBounds;
- (struct CGRect)_labelFrame;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;

@end

