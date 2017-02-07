//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditEffectCell : UICollectionViewCell
{
    UIImage *_image;
    NSString *_name;
    UIImageView *__imageView;
    UILabel *__nameLabel;
    UIView *__highlightView;
    UIImageView *__selectionView;
}

+ (id)selectionOutlineImage;
@property(retain, nonatomic, setter=_setSelectionView:) UIImageView *_selectionView; // @synthesize _selectionView=__selectionView;
@property(retain, nonatomic, setter=_setHighlightView:) UIView *_highlightView; // @synthesize _highlightView=__highlightView;
@property(retain, nonatomic, setter=_setNameLabel:) UILabel *_nameLabel; // @synthesize _nameLabel=__nameLabel;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_setSubview:(id)arg1 visible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (id)_colorForIsSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

