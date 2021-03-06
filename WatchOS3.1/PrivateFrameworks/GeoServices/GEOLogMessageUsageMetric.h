//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMessageUsageMetric : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _metricState;
    int _metricType;
    unsigned int _retryCount;
    struct {
        unsigned int sessionId:1;
        unsigned int messageSize:1;
        unsigned int messageCount:1;
        unsigned int metricState:1;
        unsigned int metricType:1;
        unsigned int retryCount:1;
    } _has;
}

+ (id)logMessageUsageMetricForFailedMsgWithCount:(int)arg1;
+ (id)logMessageUsageMetricForPurgeWithState:(int)arg1 messageCount:(int)arg2;
+ (id)logMessageUsageMetricForForcePurgeWithState:(int)arg1;
+ (id)logMessageUsageMetricForNetworkWithState:(int)arg1 messageCount:(int)arg2 messageSize:(long long)arg3 retryCount:(int)arg4;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic) unsigned int messageCount; // @synthesize messageCount=_messageCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasMessageSize;
@property(nonatomic) _Bool hasMessageCount;
- (int)StringAsMetricState:(id)arg1;
- (id)metricStateAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricState;
@property(nonatomic) int metricState; // @synthesize metricState=_metricState;
- (int)StringAsMetricType:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end

