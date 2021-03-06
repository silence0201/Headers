//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMRange, NSString, WKDOMRange;

__attribute__((visibility("hidden")))
@interface DDHighlightObject : NSObject
{
    struct __DDResult *_result;
    NSString *_targetURL;
    NSString *_webViewIdentifier;
    BOOL _followedByBlank;
    DOMRange *_DOMRange;
    WKDOMRange *_WKDOMRange;
}

@property BOOL followedByBlank; // @synthesize followedByBlank=_followedByBlank;
@property(retain) WKDOMRange *range2; // @synthesize range2=_WKDOMRange;
@property(retain) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(retain) DOMRange *range; // @synthesize range=_DOMRange;
@property(copy) NSString *webViewIdentifier; // @synthesize webViewIdentifier=_webViewIdentifier;
- (id)localizedTypeForAccessibility;
- (void)setResult:(struct __DDResult *)arg1 fromQuery:(struct __DDScanQuery *)arg2;
- (void)setResult:(struct __DDResult *)arg1;
- (struct __DDResult *)result;
- (id)description;
- (void)dealloc;

@end

