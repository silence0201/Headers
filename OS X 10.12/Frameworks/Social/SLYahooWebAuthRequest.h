//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SLYahooWebAuthRequest : NSObject
{
}

+ (id)authCodeFromURLRequest:(id)arg1;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 username:(id)arg3;
+ (id)requestForURL:(id)arg1;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 username:(id)arg3;
+ (void)clearCookiesFromStorage:(id)arg1;

@end
