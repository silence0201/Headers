//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSURLResponse;

__attribute__((visibility("hidden")))
@interface NSCachedURLResponseInternal : NSObject
{
    NSURLResponse *response;
    NSData *data;
    NSDictionary *userInfo;
    unsigned long long storagePolicy;
    struct _CFCachedURLResponse *_cachedURLResponse;
}

- (void)dealloc;

@end

