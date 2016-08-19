//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class PLPhotoTileBadgeView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingOptionView : UICollectionReusableView
{
    PLPhotoTileBadgeView *_toggleGlyphButton;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handlePrimaryAction:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

