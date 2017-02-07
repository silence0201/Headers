//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMPPCore/XMPPExtension.h>

@class NSMutableDictionary;

@interface XMPPMessageExtension : XMPPExtension
{
    NSMutableDictionary *_jidsAwaitingResponse;
    NSMutableDictionary *_jidsSupportingChatStates;
    NSMutableDictionary *_composingRequests;
}

- (void)closeSessionWithJID:(id)arg1;
- (BOOL)jidSupportsChatStates:(id)arg1;
- (BOOL)awaitingResponseFromJID:(id)arg1;
- (BOOL)sendStoppedTypingWithJID:(id)arg1;
- (BOOL)sendStartedTypingWithJID:(id)arg1;
- (void)writeToMessageTagForConnection:(id)arg1 messageType:(int)arg2 jid:(id)arg3 message:(id)arg4 additionalProperties:(id)arg5;
- (id)writeOpenMessageTagForConnection:(id)arg1 messageType:(int)arg2 jid:(id)arg3 message:(id)arg4 additionalProperties:(id)arg5;
- (BOOL)userSupportsXHTML:(id)arg1;
- (id)_IDtoMessageForJID:(id)arg1;
- (void)parseMessageNode:(id)arg1 intoMessage:(id)arg2 additionalProperties:(id)arg3;
- (void)_registerSendComposeID:(id)arg1 withMessageID:(id)arg2;
- (id)_composeMsgIDForID:(id)arg1;
- (void)_setComposeState:(id)arg1 forID:(id)arg2;
- (id)_composeStateForID:(id)arg1;
- (void)_unregisterSendComposeID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
