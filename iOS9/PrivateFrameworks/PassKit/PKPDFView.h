//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PKPDFView : UIView
{
    struct CGPDFPage *_page;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 document:(struct CGPDFDocument *)arg2;

@end

