//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIThreePartImageView;

__attribute__((visibility("hidden")))
@interface UIAlertSheetTextField : UITextField
{
    UIThreePartImageView *_sheetBackgroundView;
}

- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)dealloc;

@end
