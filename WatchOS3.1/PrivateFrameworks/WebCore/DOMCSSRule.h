//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMCSSStyleSheet, NSString;

@interface DOMCSSRule : DOMObject
{
}

@property(readonly) DOMCSSRule *parentRule;
@property(readonly) DOMCSSStyleSheet *parentStyleSheet;
@property(copy) NSString *cssText;
@property(readonly) unsigned short type;
- (void)dealloc;

@end

