//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/PDFViewDelegate-Protocol.h>

@class PDFPage, PDFView, UIView;

@protocol PDFPageVisibilityDelegate <PDFViewDelegate>

@optional
- (void)pdfView:(PDFView *)arg1 didRemoveView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willRemoveView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 didAddView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willAddView:(UIView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
@end
