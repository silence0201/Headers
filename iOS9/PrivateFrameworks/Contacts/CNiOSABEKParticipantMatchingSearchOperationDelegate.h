//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/ABSearchOperationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABSearchOperationDelegate>
{
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dealloc;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(_Bool)arg3;
- (void)_completeWithRecord:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

