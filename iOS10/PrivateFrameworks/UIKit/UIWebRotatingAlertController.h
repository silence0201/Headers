//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController
{
    _Bool _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (void).cxx_destruct;
- (_Bool)presentSheet;
- (void)doneWithSheet;
- (void)dealloc;
- (void)_enableWebView;
- (void)_disableWebView;
- (id)initWithUIWebDocumentView:(id)arg1;

@end

