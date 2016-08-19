//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKTableViewCell.h>

@class PKPassField, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell
{
    PKPassField *_field;
    UITextView *_valueTextView;
    _Bool _showLinks;
}

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (id)valueFont;
+ (id)titleFont;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool showLinks; // @synthesize showLinks=_showLinks;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
- (struct CGSize)_sizeForValueTextWithWidth:(double)arg1;
- (void)_setupTextAttributes;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_detectLinks;
- (void)dealloc;
- (id)initWithField:(id)arg1 showLinks:(_Bool)arg2;

@end

