//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface _InnerMarginAdjustingInterposedContentView : NSView
{
    struct CGSize _minContentSize;
    struct CGSize _maxContentSize;
    struct CGSize _userContentSize;
    BOOL _isUnappliedUserContentSize;
}

- (struct CGSize)_userSizeForContentSize:(struct CGSize)arg1 onEdge:(unsigned long long)arg2;
- (struct CGSize)userContentSize;
- (void)setUserContentSize:(struct CGSize)arg1;
- (void)setMinContentSize:(struct CGSize)arg1;
- (void)setMaxContentSize:(struct CGSize)arg1;
- (void)setEdge:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)_setContentSizesForEdge:(unsigned long long)arg1;
- (struct CGSize)minContentSize;
- (struct CGSize)maxContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)_drawerWindow;
- (struct CGRect)_contentViewFrameForEdge:(unsigned long long)arg1;
- (id)contentView;
- (struct CGSize)_contentSizeForUserSize:(struct CGSize)arg1 onEdge:(unsigned long long)arg2;

@end
