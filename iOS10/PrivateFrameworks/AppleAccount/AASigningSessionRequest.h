//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest
{
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2;

@end
