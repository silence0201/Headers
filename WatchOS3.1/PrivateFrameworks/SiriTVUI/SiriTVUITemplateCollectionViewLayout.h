//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUICollectionViewLayout.h>

@interface SiriTVUITemplateCollectionViewLayout : SiriTVUICollectionViewLayout
{
    double _itemFontSize;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) double itemFontSize; // @synthesize itemFontSize=_itemFontSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)minimumCollectionViewContentSize;
- (struct CGSize)collectionViewContentSizeForItemSize:(struct CGSize)arg1;
- (struct CGSize)collectionViewContentSize;

@end

