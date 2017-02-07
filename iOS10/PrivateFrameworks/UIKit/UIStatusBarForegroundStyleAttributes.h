//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying>
{
    double _height;
    long long _legibilityStyle;
    long long _idiom;
    NSMutableDictionary *_cachedFonts;
    _Bool _isTintColorBlack;
    _Bool _hasBusyBackground;
    NSString *_cachedUniqueIdentifier;
    _Bool _canShowBreadcrumbs;
    UIColor *_tintColor;
}

@property(readonly, retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool canShowBreadcrumbs; // @synthesize canShowBreadcrumbs=_canShowBreadcrumbs;
- (void).cxx_destruct;
- (_Bool)supportsShowingBuildVersion;
- (long long)idiom;
- (_Bool)usesVerticalLayout;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (double)sizeForMoonMaskVisible:(_Bool)arg1;
- (id)textForNetworkType:(int)arg1;
- (double)bluetoothBatteryExtraPadding;
- (double)baselineOffsetForStyle:(long long)arg1;
- (id)textColorForStyle:(long long)arg1;
- (id)proportionalFontForFont:(id)arg1;
- (id)makeTextFontForStyle:(long long)arg1;
- (_Bool)_shouldUseBoldFontForStyle:(long long)arg1;
- (id)textFontForStyle:(long long)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7;
- (id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9;
- (id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5;
- (id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4;
- (id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3;
- (id)imageNamed:(id)arg1;
- (id)untintedImageNamed:(id)arg1;
- (id)uncachedImageNamed:(id)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3;
- (void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5;
- (void)_cacheImage:(id)arg1 named:(id)arg2;
- (id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2;
- (id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3;
- (id)_cachedImageNamed:(id)arg1;
- (double)shadowPadding;
- (double)edgePadding;
- (double)middlePadding;
- (double)standardPadding;
- (double)scale;
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(struct CGSize)arg7 textHeight:(double)arg8;
- (double)textOffsetForStyle:(long long)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;
- (id)_bluetoothBatteryColorForNormalizedCapacity:(double)arg1;
- (id)bluetoothBatteryImageNameWithCapacity:(double)arg1;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3;
- (id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (double)_roundDimension:(double)arg1;
- (double)batteryAccessoryMargin;
- (long long)activityIndicatorStyleWithSyncActivity:(_Bool)arg1;
- (long long)legibilityStyle;
- (double)height;
- (id)uniqueIdentifier;
- (id)generateUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4;
- (id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(_Bool)arg4 idiom:(long long)arg5;

@end

