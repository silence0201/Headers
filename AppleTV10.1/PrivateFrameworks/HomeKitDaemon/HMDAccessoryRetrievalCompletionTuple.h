//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HMDAccessoryRetrievalCompletionTuple : NSObject
{
    long long _linkType;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

+ (id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
- (void).cxx_destruct;

@end

