//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIControl, UILabel;

@interface MSCLAuthorView : UIView
{
    UIButton *_authorNameButton;
    UIView *_bottomSeparatorView;
    UILabel *_label;
}

@property(readonly, nonatomic) UIControl *authorNameButton; // @synthesize authorNameButton=_authorNameButton;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *labelText;
@property(copy, nonatomic) NSString *authorName;
- (id)initWithFrame:(struct CGRect)arg1;

@end
