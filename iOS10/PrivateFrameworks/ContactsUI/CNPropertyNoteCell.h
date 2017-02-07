//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyCell.h>

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface CNPropertyNoteCell : CNPropertyCell
{
    UITextView *_textView;
    UILabel *_labelLabel;
}

@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)setAllowsEditing:(_Bool)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)textViewChanged:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (double)bottomBaselineConstant;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (void)setLabelTextAttributes:(id)arg1;
- (id)valueView;
- (id)labelView;
- (_Bool)supportsTintColorValue;
- (void)setProperty:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

