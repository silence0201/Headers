//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSUUID;

@protocol _NCWidgetViewController_Service_IPC
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performUpdateWithReplyHandler:(void (^)(unsigned long long, _Bool))arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(void (^)(NSData *, NSError *))arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(NSUUID *)arg2;
- (void)__setWidgetIdentifier:(NSString *)arg1;
@end
