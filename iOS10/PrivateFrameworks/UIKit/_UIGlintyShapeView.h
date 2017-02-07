//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface _UIGlintyShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (Class)layerClass;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)setStrokeColor:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

