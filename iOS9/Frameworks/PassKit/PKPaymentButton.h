//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, PKPDFView, PKShapeView, UILabel, UIView;

@interface PKPaymentButton : UIButton
{
    CAShapeLayer *_layer;
    long long _style;
    long long _type;
    UIView *_container;
    UILabel *_buyLabel;
    PKPDFView *_pdfView;
    CAFilter *_highlightFilter;
    _Bool _highlighted;
    struct CGSize _boundsSize;
    PKShapeView *_maskView;
}

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (Class)layerClass;
- (void)setHighlighted:(_Bool)arg1;
- (void)_createHighlightFilterIfNecessary;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

