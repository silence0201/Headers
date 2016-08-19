//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABChameleonCell.h>

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell
{
    ABMultiCellContentView *_abMultiCellContentView;
    _Bool _editingDisabled;
}

@property(nonatomic, getter=isEditingDisabled) _Bool editingDisabled; // @synthesize editingDisabled=_editingDisabled;
- (void)setAbCellStyle:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentView;
- (void)_addMultiCellContentViewIfNeeded;
- (void)dealloc;

@end

