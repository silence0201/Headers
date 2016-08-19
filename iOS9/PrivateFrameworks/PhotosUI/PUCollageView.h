//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray;

__attribute__((visibility("hidden")))
@interface PUCollageView : UIView
{
    double _spacing;
    long long _numberOfItems;
    long long __numberOfImageViews;
    NSArray *__imageViews;
    NSPointerArray *__imageSizes;
    struct CGSize _collageSize;
}

+ (long long)maximumNumberOfItems;
@property(readonly, nonatomic) NSPointerArray *_imageSizes; // @synthesize _imageSizes=__imageSizes;
@property(readonly, nonatomic) NSArray *_imageViews; // @synthesize _imageViews=__imageViews;
@property(readonly, nonatomic) long long _numberOfImageViews; // @synthesize _numberOfImageViews=__numberOfImageViews;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct CGSize collageSize; // @synthesize collageSize=_collageSize;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (struct CGSize)imageSizeForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

