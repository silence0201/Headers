//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol IMKXPCSupport
- (oneway void)imkxpc_updateMenusDictionary:(NSDictionary *)arg1;
- (void)imkxpc_supportsTextAttachmentInsertionWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_supportsChromaticMarkedTextWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_incrementalSearchClientGeometryWithReply:(void (^)(unsigned long long))arg1;
- (void)imkxpc_isIncrementalSearchInputContextWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_wouldHandleEvent:(unsigned long long)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_firstRectForCharacterRange:(struct _NSRange)arg1 reply:(void (^)(struct CGRect, struct _NSRange))arg2;
- (void)imkxpc_stringFromRange:(struct _NSRange)arg1 reply:(void (^)(NSString *, struct _NSRange))arg2;
- (void)imkxpc_uniqueClientIdentifierStringWithReply:(void (^)(NSString *))arg1;
- (void)imkxpc_commitPendingInlineSessionWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_hidePalettesAtInsertionPointWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_isDictationHiliteCapableInputContextWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_isTextPlaceholderAwareInputContextWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_isBottomLineInputContextWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_inputSessionDoneSleepWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_terminatePalette:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_isPaletteTerminated:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_deadKeyStateWithReply:(void (^)(unsigned int))arg1;
- (void)imkxpc_insertText:(id)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_currentInputSourceBundleIDWithReply:(void (^)(NSString *))arg1;
- (void)imkxpc_selectInputMode:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_bundleIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)imkxpc_supportsUnicodeWithReply:(void (^)(BOOL))arg1;
- (void)imkxpc_windowLevelWithReply:(void (^)(int))arg1;
- (void)imkxpc_overrideKeyboardWithKeyboardNamed:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_supportsProperty:(unsigned int)arg1 reply:(void (^)(BOOL))arg2;
- (void)imkxpc_validAttributesForMarkedTextWithReply:(void (^)(NSArray *))arg1;
- (void)imkxpc_setMarkedText:(id)arg1 selectionRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3 validFlags:(unsigned long long)arg4 reply:(void (^)(BOOL))arg5;
- (void)imkxpc_lengthWithReply:(void (^)(long long))arg1;
- (void)imkxpc_attributedSubstringFromRange:(struct _NSRange)arg1 reply:(void (^)(id))arg2;
- (void)imkxpc_characterIndexForPoint:(struct CGPoint)arg1 tracking:(long long)arg2 reply:(void (^)(long long, BOOL))arg3;
- (void)imkxpc_attributesForCharacterIndex:(unsigned long long)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)imkxpc_markedRangeValueWithReply:(void (^)(NSValue *))arg1;
- (void)imkxpc_selectedRangeWithReply:(void (^)(struct _NSRange))arg1;
- (void)imkxpc_insertText:(id)arg1 replacementRange:(struct _NSRange)arg2 validFlags:(unsigned long long)arg3 reply:(void (^)(BOOL))arg4;
@end
