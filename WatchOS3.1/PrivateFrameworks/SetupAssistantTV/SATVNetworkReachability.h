//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface SATVNetworkReachability : NSObject
{
    NSURLSession *_urlSession;
}

@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_performReachabilityRequestWithRetryCount:(long long)arg1 shouldSleep:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)testReachabilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
