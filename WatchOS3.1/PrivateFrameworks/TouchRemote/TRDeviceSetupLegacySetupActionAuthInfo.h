//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject
{
    NSDictionary *_headers;
    NSDictionary *_body;
}

@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (id)initWithHeaders:(id)arg1 body:(id)arg2;

@end

