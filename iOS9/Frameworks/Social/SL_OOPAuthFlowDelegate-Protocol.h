//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableURLRequest, NSString, NSURL, NSURLRequest;

@protocol SL_OOPAuthFlowDelegate
- (void)webViewDidFinishLoadWithPageTitleSupplier:(void (^)(void (^)(NSString *)))arg1;
- (_Bool)shouldHideWebViewForLoadWithRequest:(NSURLRequest *)arg1;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (NSURL *)authURLForUsername:(NSString *)arg1;
- (void)setAuthFlowCompletion:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (_Bool)wantsInitialRedirect;
@end

