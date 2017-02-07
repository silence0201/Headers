//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/UIWebViewDelegate-Protocol.h>

@class NSString, UIWebView;
@protocol RUIWebContainerViewDelegate;

@interface RUIWebContainerView : UIView <UIWebViewDelegate>
{
    _Bool _highlighted;
    _Bool _reallyHighlighted;
    UIWebView *_webView;
    id <RUIWebContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <RUIWebContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (double)heightForWidth:(double)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_setHighlightedNow;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
