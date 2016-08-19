//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@class NSString, UILabel;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows
{
    UILabel *_displayLabel;
}

+ (void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3;
+ (void)numberOfLines:(long long *)arg1 lineBreakMode:(long long *)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4;
+ (id)displayLabelForReuse;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6 includeRows:(_Bool)arg7;
+ (struct CGRect)displayLabelFrameForValueViewFrame:(struct CGRect)arg1 styleProvider:(id)arg2 whenEditing:(_Bool)arg3;
- (void)setAbCellStyle:(int)arg1;
- (void)reloadFromModel;
- (void)reloadFromModelIncludingRows:(_Bool)arg1;
- (void)reload;
- (void)reloadIncludingRows:(_Bool)arg1 includingDisplayView:(_Bool)arg2;
- (void)reloadDisplayText;
- (void)updateSubviewsForNewStateAnimated:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSString *displayText;
- (struct CGRect)valueTextRect;

@end

