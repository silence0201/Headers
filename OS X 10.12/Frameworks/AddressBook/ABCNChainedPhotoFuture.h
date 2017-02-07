//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNFuture.h>

@class ABCNChainedFutureQueue;

__attribute__((visibility("hidden")))
@interface ABCNChainedPhotoFuture : CNFuture
{
    ABCNChainedFutureQueue *_futureQueue;
}

+ (id)chainedFutureWithFutures:(id)arg1;
- (id)description;
- (void)cancelCurrentAndRemainingFutures;
- (void)didCancel;
- (BOOL)resultDataIsEmpty:(id)arg1;
- (void)nextWithResult:(id)arg1;
- (void)addCompletionBlocksToFuture:(id)arg1;
- (void)runNextFuture;
- (void)addCompletionBlocksToSelf;
- (void)start;
- (void)dealloc;
- (id)initWithFutures:(id)arg1;

@end
