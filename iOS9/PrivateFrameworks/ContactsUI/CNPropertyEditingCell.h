//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyCell.h>

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate>
{
    UIButton *_labelButton;
    CNRepeatingGradientSeparatorView *_vseparator;
}

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;
+ (_Bool)wantsStandardConstraints;
+ (_Bool)wantsChevron;
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void).cxx_destruct;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)constantConstraints;
- (double)effectiveLabelWidth;
- (double)minCellHeight;
@property(readonly, nonatomic) double leftValueMargin;
- (id)valueString;
- (void)setValueTextAttributes:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)labelButtonClicked:(id)arg1;
- (id)labelView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

