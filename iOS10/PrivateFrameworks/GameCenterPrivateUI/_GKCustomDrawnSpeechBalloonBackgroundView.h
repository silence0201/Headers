//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _GKCustomDrawnSpeechBalloonBackgroundView : UIView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
}

@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
- (void)tintColorDidChange;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGGradient *)_gradientForColor:(id)arg1;
- (id)speechBalloonMaskForRect:(struct CGRect)arg1;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (id)initWithFrame:(struct CGRect)arg1;

@end
