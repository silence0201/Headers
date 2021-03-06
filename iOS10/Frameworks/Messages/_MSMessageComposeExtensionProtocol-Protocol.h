//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class MSMessage, _MSConversationState, _MSPresentationState;

@protocol _MSMessageComposeExtensionProtocol <NSObject>
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)_hostDidBeginDeferredTeardown;
- (void)_requestSnapshotWithCompletion:(void (^)(NSData *))arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_resignActive;
- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
@end

