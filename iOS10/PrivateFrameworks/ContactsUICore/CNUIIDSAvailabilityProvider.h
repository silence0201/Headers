//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCache, NSArray;
@protocol CNScheduler;

@interface CNUIIDSAvailabilityProvider : NSObject
{
    CNCache *_faceTimeRequests;
    CNCache *_iMessageRequests;
    NSArray *_requestFutures;
    id <CNScheduler> _resourceLock;
}

@property(retain, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(retain, nonatomic) NSArray *requestFutures; // @synthesize requestFutures=_requestFutures;
@property(retain, nonatomic) CNCache *iMessageRequests; // @synthesize iMessageRequests=_iMessageRequests;
@property(retain, nonatomic) CNCache *faceTimeRequests; // @synthesize faceTimeRequests=_faceTimeRequests;
- (void).cxx_destruct;
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;
- (id)init;

@end
