//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol SFSharingExtensionWebProcessController <NSObject>
- (void)finalizeJavaScriptForSharingExtension:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (void)evaluateJavaScriptForSharingExtension:(NSString *)arg1 javaScript:(NSString *)arg2 replyIdentifier:(NSNumber *)arg3;
@end

