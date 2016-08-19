//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSFileVersion, NSOperationQueue, NSURL;

@protocol NSFilePresenter <NSObject>
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;

@optional
@property(readonly, copy) NSURL *primaryPresentedItemURL;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didResolveConflictVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didLoseVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didGainVersion:(NSFileVersion *)arg2;
- (void)presentedSubitemDidChangeAtURL:(NSURL *)arg1;
- (void)presentedSubitemAtURL:(NSURL *)arg1 didMoveToURL:(NSURL *)arg2;
- (void)presentedSubitemDidAppearAtURL:(NSURL *)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)presentedItemDidResolveConflictVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidLoseVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidGainVersion:(NSFileVersion *)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(NSURL *)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)relinquishPresentedItemToWriter:(void (^)(void (^)(void)))arg1;
- (void)relinquishPresentedItemToReader:(void (^)(void (^)(void)))arg1;
@end

