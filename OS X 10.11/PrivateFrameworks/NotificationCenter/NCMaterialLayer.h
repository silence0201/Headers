//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CABackdropLayer, NSString;

@interface NCMaterialLayer : CALayer
{
    CABackdropLayer *_backdropLayer;
    CALayer *_tintLayer;
    _Bool _reduceTransparency;
    NSString *_groupName;
    unsigned long long _material;
}

+ (void)reduceTransparencyChanged;
+ (BOOL)shouldReduceTransparency;
+ (void)initialize;
@property(nonatomic) _Bool reduceTransparency; // @synthesize reduceTransparency=_reduceTransparency;
@property(nonatomic) unsigned long long material; // @synthesize material=_material;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)_buildLayerTree;
- (void)setBounds:(struct CGRect)arg1;
@property(nonatomic) float blurRadius;
- (id)initWithMaterial:(unsigned long long)arg1 groupName:(id)arg2;

@end

