//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView
{
    _Bool _delegateRespondsToIndexPathForPreferredFocusedView;
    _TVCollectionViewFlowLayout *_gridFlowLayout;
}

@property(retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout; // @synthesize gridFlowLayout=_gridFlowLayout;
- (void).cxx_destruct;
- (struct CGRect)_visibleBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

