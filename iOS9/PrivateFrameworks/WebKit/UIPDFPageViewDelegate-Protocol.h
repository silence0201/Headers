//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, UIPDFPageView;

@protocol UIPDFPageViewDelegate

@optional
- (void)pageWasRendered:(UIPDFPageView *)arg1;
- (Class)classForAnnotationType:(const char *)arg1;
- (NSArray *)menuItems:(NSArray *)arg1 forPage:(UIPDFPageView *)arg2;
- (void)selectionDidEndTracking:(UIPDFPageView *)arg1;
- (_Bool)selectionWillTrack:(UIPDFPageView *)arg1;
- (void)didTap:(UIPDFPageView *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldRecognizeTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint)arg2;
- (void)doubleTapIn:(UIPDFPageView *)arg1 atPoint:(struct CGPoint)arg2;
- (void)resetZoom:(UIPDFPageView *)arg1;
- (void)zoom:(UIPDFPageView *)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
@end

