//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreJavaScript/FRJSObject.h>

@class FRWKView;

@interface FRJSHistory : FRJSObject
{
    FRWKView *_webView;
}

@property(readonly, nonatomic) FRWKView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)callFunction:(id)arg1 withArguments:(id)arg2;
- (id)initWithWebView:(id)arg1;

@end

