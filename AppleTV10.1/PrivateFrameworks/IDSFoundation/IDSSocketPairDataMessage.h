//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, retain, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (id)_nonHeaderData;
@property(readonly, retain, nonatomic) NSData *data;
- (unsigned char)command;
- (void)dealloc;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(_Bool)arg3 wantsAppAck:(_Bool)arg4 compressed:(_Bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end
