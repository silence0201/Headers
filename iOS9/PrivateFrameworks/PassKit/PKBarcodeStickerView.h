//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, PKBarcode, UIImageView, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton
{
    PKBarcode *_barcode;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    long long _layoutMode;
    _Bool _drawBarcode;
    long long _validity;
}

+ (struct CGSize)_sizeForBarcode:(id)arg1;
+ (struct PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1;
@property(readonly, nonatomic) UIView *matteView; // @synthesize matteView=_matteView;
@property(nonatomic) long long validity; // @synthesize validity=_validity;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_generateMatteRect:(struct CGRect *)arg1 barcodeRect:(struct CGRect *)arg2 altTextRect:(struct CGRect *)arg3 boundingSize:(struct CGSize)arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize)arg2;
- (void)_updateValidity;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2 layoutMode:(long long)arg3;
- (struct CGSize)_varianceForBarcode:(id)arg1;

@end

