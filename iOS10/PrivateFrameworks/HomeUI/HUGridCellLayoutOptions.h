//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUGridDisplayOptions-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@class HUGridCellBackgroundDisplayOptions, NSString, UIFont, UIVisualEffect;

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>
{
    unsigned long long _contentColorStyle;
    HUGridCellBackgroundDisplayOptions *_backgroundDisplayOptions;
    UIVisualEffect *_vibrancyEffect;
    UIFont *_font;
    double _iconSize;
    double _cellInnerMargin;
    double _cellCornerRadius;
    double _cellScaleFactor;
    long long _cellSizeSubclass;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(readonly, nonatomic) long long cellSizeSubclass; // @synthesize cellSizeSubclass=_cellSizeSubclass;
@property(nonatomic) double cellScaleFactor; // @synthesize cellScaleFactor=_cellScaleFactor;
@property(nonatomic) double cellCornerRadius; // @synthesize cellCornerRadius=_cellCornerRadius;
@property(nonatomic) double cellInnerMargin; // @synthesize cellInnerMargin=_cellInnerMargin;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
@property(copy, nonatomic) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions; // @synthesize backgroundDisplayOptions=_backgroundDisplayOptions;
@property(nonatomic) unsigned long long contentColorStyle; // @synthesize contentColorStyle=_contentColorStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellSizeSubclass:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
