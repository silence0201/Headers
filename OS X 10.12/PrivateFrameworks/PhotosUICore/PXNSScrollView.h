//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSView;
@protocol PXNSScrollViewDelegate;

@interface PXNSScrollView : NSScrollView
{
    struct CGPoint _newVisibleOrigin;
    NSView *_contentRootView;
    BOOL _layoutInProgress;
    BOOL _didLayout;
    id <PXNSScrollViewDelegate> _px_delegate;
}

@property(readonly, nonatomic) NSView *contentRootView; // @synthesize contentRootView=_contentRootView;
@property(nonatomic, setter=px_setDelegate:) __weak id <PXNSScrollViewDelegate> px_delegate; // @synthesize px_delegate=_px_delegate;
- (void).cxx_destruct;
- (void)_continualScrollUpdateNotification:(id)arg1;
- (void)_frameDidChange:(id)arg1;
- (void)_clearVisibleOriginRequirement;
@property(nonatomic) struct CGRect contentBounds;
- (void)addContentSubview:(id)arg1;
@property(readonly, nonatomic) struct CGRect activeRect;
@property(readonly, nonatomic) struct CGRect contentVisibleRect;
- (id)description;
- (void)_layoutScrollView;
- (void)layout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

