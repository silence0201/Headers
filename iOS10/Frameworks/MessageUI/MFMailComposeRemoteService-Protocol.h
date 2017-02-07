//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol MFMailComposeRemoteService
- (void)securityScopeForURL:(NSURL *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)serializedPlaceholderForURL:(NSURL *)arg1 mimeType:(NSString *)arg2 contentID:(NSString *)arg3 withReply:(void (^)(NSData *))arg4;
- (void)serializedPlaceholderForData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4 withReply:(void (^)(NSData *))arg5;
- (void)serializedPlaceholderForFileName:(NSString *)arg1 fileSize:(long long)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4 withReply:(void (^)(NSData *))arg5;
- (void)autosaveWithReply:(void (^)(NSString *))arg1;
- (void)framesForAttachmentsWithIdentifiers:(NSArray *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)setContentVisible:(_Bool)arg1;
- (void)commitCompositionValuesWithReply:(void (^)(void))arg1;
- (void)addAttachmentWithData:(NSData *)arg1 mimeType:(NSString *)arg2 fileName:(NSString *)arg3;
- (void)addAttachmentWithPlaceholderData:(NSData *)arg1;
- (void)setUICustomizationData:(NSData *)arg1;
- (void)setCompositionValues:(NSDictionary *)arg1;
@end

