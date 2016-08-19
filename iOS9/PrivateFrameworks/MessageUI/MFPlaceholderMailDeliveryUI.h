//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOutgoingMessageDelivery.h>

#import <MessageUI/MFMessageRewriterPlaceholderResolver-Protocol.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver>
{
    NSString *_contextID;
    MFPlaceholderMessageRewriter *_rewriter;
}

- (id)contentForPlaceholder:(id)arg1;
- (id)contentForContentID:(id)arg1;
- (id)contentForURL:(id)arg1;
- (id)_attachmentsContextID;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

