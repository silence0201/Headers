//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface MSCLPhotoPickerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_checkmarkImageView;
    UIImageView *_thumbnailImageView;
    UIImageView *_videoGlyphImageView;
}

@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) _Bool showsVideoGlyph;
@property(nonatomic) _Bool showsSelectionCheckmark;
- (id)initWithFrame:(struct CGRect)arg1;

@end
