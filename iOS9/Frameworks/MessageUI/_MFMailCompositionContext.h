//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFAttachmentCompositionContext, MFComposeBodyField, MFMailMessage, MFMessageViewingContext, NSArray, NSMutableArray, NSString;

@interface _MFMailCompositionContext : NSObject
{
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    int _composeType;
    id _autosaveIdentifier;
    MFMailMessage *_originalMessage;
    NSString *_attachmentToMarkupContentID;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    _Bool _loadRest;
    _Bool _includeAttachments;
    _Bool _showKeyboardImmediately;
    _Bool _showContentImmediately;
    MFAttachmentCompositionContext *_attachmentContext;
    NSMutableArray *_deferredAttachments;
    _Bool _registeredForDraw;
    _Bool _usingDefaultAccount;
    _Bool _prefersFirstLineSelection;
    int _sourceAccountManagement;
    unsigned long long _caretPosition;
    NSString *_originatingBundleID;
    MFComposeBodyField *_bodyField;
}

@property MFComposeBodyField *bodyField; // @synthesize bodyField=_bodyField;
@property(nonatomic) int sourceAccountManagement; // @synthesize sourceAccountManagement=_sourceAccountManagement;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(nonatomic) unsigned long long caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) _Bool prefersFirstLineSelection; // @synthesize prefersFirstLineSelection=_prefersFirstLineSelection;
@property(retain, nonatomic) NSString *attachmentToMarkupContentID; // @synthesize attachmentToMarkupContentID=_attachmentToMarkupContentID;
@property(readonly, nonatomic) MFAttachmentCompositionContext *attachmentContext; // @synthesize attachmentContext=_attachmentContext;
@property(readonly, nonatomic) MFMailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(readonly, nonatomic) id autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(readonly, nonatomic) int composeType; // @synthesize composeType=_composeType;
@property(retain, nonatomic) MFMessageViewingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) id originalContent; // @synthesize originalContent=_originalContent;
@property(nonatomic) _Bool showContentImmediately; // @synthesize showContentImmediately=_showContentImmediately;
@property(nonatomic) _Bool showKeyboardImmediately; // @synthesize showKeyboardImmediately=_showKeyboardImmediately;
@property(nonatomic) _Bool includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(nonatomic) _Bool loadRest; // @synthesize loadRest=_loadRest;
@property(copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(nonatomic) _Bool usingDefaultAccount; // @synthesize usingDefaultAccount=_usingDefaultAccount;
- (void)contextDidDraw:(id)arg1;
- (void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertAttachmentWithURL:(id)arg1;
- (void)_contextUnregisterForDrawNotification;
- (void)_contextRegisterForDrawNotification;
- (id)attachments;
- (void)removeAttachment:(id)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
@property(readonly, nonatomic) NSString *contextID;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (id)messageBody;
- (void)dealloc;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithComposeType:(int)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

