//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIScrollView, UIView;

@protocol _UIWebDoubleTapDelegate
- (_Bool)considerHeightForDoubleTap;
- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (struct CGRect)visibleContentRect;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (_Bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(double)arg2;
- (void)willZoomToMinimumScale;
@end

