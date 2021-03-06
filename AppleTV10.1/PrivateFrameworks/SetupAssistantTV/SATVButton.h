//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class _UIFloatingContentView;

@interface SATVButton : UIButton
{
    _Bool _scalesOnFocus;
    _UIFloatingContentView *_floatingView;
}

@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool scalesOnFocus; // @synthesize scalesOnFocus=_scalesOnFocus;
- (void).cxx_destruct;
- (void)_updateFloatingViewStateAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)focusedViewDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

