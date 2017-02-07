//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDResponseBodyParser.h>

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser
{
    _Bool _isParsing;
    Class _messageClass;
    NSMutableData *_tailParserData;
    unsigned long long _curObjectLength;
    struct CC_SHA256state_st _mescalSignature;
}

@property(nonatomic) struct CC_SHA256state_st mescalSignature; // @synthesize mescalSignature=_mescalSignature;
@property(nonatomic) _Bool isParsing; // @synthesize isParsing=_isParsing;
@property(nonatomic) unsigned long long curObjectLength; // @synthesize curObjectLength=_curObjectLength;
@property(retain, nonatomic) NSMutableData *tailParserData; // @synthesize tailParserData=_tailParserData;
@property(nonatomic) Class messageClass; // @synthesize messageClass=_messageClass;
- (void).cxx_destruct;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1;
- (_Bool)_parseObjects:(_Bool)arg1;
- (_Bool)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (id)initWithQoS:(long long)arg1;

@end
