//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairDataMessage.h>

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
{
}

+ (id)cancelMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4;
+ (id)resumeMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4;
- (unsigned char)cancelReason;
- (unsigned long long)byteOffset;
- (unsigned char)type;
- (unsigned char)command;

@end
