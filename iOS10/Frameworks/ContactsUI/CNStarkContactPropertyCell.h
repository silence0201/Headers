//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyPhoneNumberCell.h>

__attribute__((visibility("hidden")))
@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell
{
    struct UIEdgeInsets _contentInsets;
}

+ (_Bool)wantsHorizontalLayout;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_cnui_applyContactStyle;
- (id)variableConstraints;
- (id)constantConstraints;
- (double)bottomBaselineConstant;
- (void)transportButtonClicked:(id)arg1;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performDefaultAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

