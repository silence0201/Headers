//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PXBasicTileUserData, PXBasicUIViewTileAnimator, PXTitleSubtitleUILabelTile, PXUIImageTile, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView
{
    PXBasicUIViewTileAnimator *_tileAnimator;
    struct PXTileGeometry _imageTileGeometry;
    PXUIImageTile *_imageTile;
    PXBasicTileUserData *_imageTileUserData;
    struct PXTileGeometry _initialTextTileGeometry;
    struct PXTileGeometry _textTileGeometry;
    PXTitleSubtitleUILabelTile *_textTile;
    PXBasicTileUserData *_textTileUserData;
    UILabel *_labelForLastBaselineLayout;
}

- (void).cxx_destruct;
- (void)_layoutLabelForLastBaselineLayout;
- (void)_layoutTile:(id)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id)arg3;
- (void)_layoutTextTile;
- (void)_layoutImageTile;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)initWithRegionOfInterest:(id)arg1;

@end
