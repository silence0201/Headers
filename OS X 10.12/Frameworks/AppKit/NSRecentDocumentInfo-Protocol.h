//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSImage, NSString, NSURL;

@protocol NSRecentDocumentInfo <NSObject>
@property(readonly) long long state;
@property(readonly) NSImage *icon;
@property(readonly) NSString *displayName;
@property(readonly) NSURL *URL;
- (void)resolveURLWithCompletionHandler:(void (^)(NSError *))arg1;
@end
