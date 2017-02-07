//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject
{
    NSMutableDictionary *_contextSent;
    id <SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;
}

- (void).cxx_destruct;
- (void)setManagerForTesting:(id)arg1;
- (id)remoteSuggestionManager;
- (void)didSendContextForConversation:(id)arg1;
- (BOOL)hasContextBeenSentForConversation:(id)arg1;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)initWithDaemonConnection:(id)arg1;

@end
