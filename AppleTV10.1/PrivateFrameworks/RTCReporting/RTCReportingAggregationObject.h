//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <RTCReporting/ClientSessionReplyInterface-Protocol.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface>
{
    CDUnknownBlockType _aggregationBlock;
}

- (void)dealloc;
- (void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5;
- (id)initWithAggregationBlock:(CDUnknownBlockType)arg1;

@end

