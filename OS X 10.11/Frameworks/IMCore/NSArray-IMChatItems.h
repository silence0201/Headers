//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class IMMessage, IMMessageItem;

@interface NSArray (IMChatItems)
- (id)__imItems;
- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)__itemForChatItemAtIndex:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) IMMessageItem *__imLastMessageItem;
- (id)messages;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)messageForChatItemAtIndex:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, retain, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, retain, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, retain, nonatomic) IMMessage *lastMessage;
@end
