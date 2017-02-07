//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIKBRenderEffect-Protocol.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect>
{
    NSString *_colorName;
    unsigned long long _edges;
    double _weight;
    UIKBGradient *_gradient;
    double _opacity;
    struct UIEdgeInsets _insets;
}

+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIKBGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGColor *)CGColor;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

