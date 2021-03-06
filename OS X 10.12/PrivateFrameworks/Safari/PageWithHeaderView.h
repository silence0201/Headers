//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BrowserWKView, ReaderContainerView;
@protocol PageWithHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface PageWithHeaderView : NSView
{
    BOOL _social;
    BrowserWKView *_browserWKView;
    NSView *_headerBannerView;
    ReaderContainerView *_readerContainerView;
    id <PageWithHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PageWithHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSocial) BOOL social; // @synthesize social=_social;
@property(nonatomic) __weak ReaderContainerView *readerContainerView; // @synthesize readerContainerView=_readerContainerView;
@property(nonatomic) __weak NSView *headerBannerView; // @synthesize headerBannerView=_headerBannerView;
@property(nonatomic) __weak BrowserWKView *browserWKView; // @synthesize browserWKView=_browserWKView;
- (void).cxx_destruct;
- (struct CGRect)_pageContentFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

