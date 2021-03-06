//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrubberLayout.h>

@interface NSScrubberProportionalLayout : NSScrubberLayout
{
    long long _numberOfVisibleItems;
}

- (BOOL)shouldInvalidateLayoutForChangeFromVisibleRect:(struct CGRect)arg1 toVisibleRect:(struct CGRect)arg2;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
- (struct CGSize)scrubberContentSize;
- (double)itemWidth;
@property long long numberOfVisibleItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOfVisibleItems:(long long)arg1;
- (id)init;

@end

