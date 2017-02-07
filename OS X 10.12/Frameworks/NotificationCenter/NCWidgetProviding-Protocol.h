//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NSExtensionRequestHandling-Protocol.h>

@protocol NCWidgetProviding <NSExtensionRequestHandling>

@optional
@property(readonly) BOOL widgetAllowsEditing;
- (void)widgetDidEndEditing;
- (void)widgetDidBeginEditing;
- (struct NSEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(struct NSEdgeInsets)arg1;
- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end
