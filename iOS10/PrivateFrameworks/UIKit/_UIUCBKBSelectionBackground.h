//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIKBKeyView;

__attribute__((visibility("hidden")))
@interface _UIUCBKBSelectionBackground : UIView
{
    UIKBKeyView *_backgroundProvidingView;
    _Bool _showButtonShape;
}

@property(nonatomic) _Bool showButtonShape; // @synthesize showButtonShape=_showButtonShape;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateBackgroundProvidingView;
- (id)_makeBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
