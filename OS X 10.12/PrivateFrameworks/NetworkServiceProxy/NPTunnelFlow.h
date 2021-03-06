//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEAppProxyFlow, NPTunnel, NSData, NSDate, NSMutableDictionary, NSPAppRule, NSPConnectionInfo, NSString, NWEndpoint, NetworkServiceProxyRequestStats;
@protocol NPTunnelFlowDelegate, OS_dispatch_data, OS_dispatch_queue, OS_dispatch_source;

@interface NPTunnelFlow : NSObject
{
    NWEndpoint *_remoteEndpoint;
    BOOL _useCustomHostnameValidation;
    BOOL _isDirectConnectionViable;
    BOOL _fallbackDisabled;
    BOOL _hasTunnel;
    unsigned long long _identifier;
    id <NPTunnelFlowDelegate> _delegate;
    NPTunnel *_tunnel;
    NSPAppRule *_appRule;
    NEAppProxyFlow *_clientFlow;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    void *_window;
    NSString *_remoteHostname;
    unsigned long long _hashKey;
    long long _fallbackReason;
    long long _edgeType;
    NSDate *_startDate;
    NSDate *_firstTxByteTimestamp;
    NSMutableDictionary *_extraFlowProperties;
    NSPConnectionInfo *_finalConnectionInfo;
    NetworkServiceProxyRequestStats *_stats;
    NSObject<OS_dispatch_data> *_savedData;
    long long _latestByteDate;
    NSMutableDictionary *_metrics;
    NSObject<OS_dispatch_source> *_fallbackTimer;
}

@property(retain) NSObject<OS_dispatch_source> *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property(retain) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property long long latestByteDate; // @synthesize latestByteDate=_latestByteDate;
@property(retain) NSObject<OS_dispatch_data> *savedData; // @synthesize savedData=_savedData;
@property(readonly) NetworkServiceProxyRequestStats *stats; // @synthesize stats=_stats;
@property(retain) NSPConnectionInfo *finalConnectionInfo; // @synthesize finalConnectionInfo=_finalConnectionInfo;
@property(retain) NSMutableDictionary *extraFlowProperties; // @synthesize extraFlowProperties=_extraFlowProperties;
@property(retain) NSDate *firstTxByteTimestamp; // @synthesize firstTxByteTimestamp=_firstTxByteTimestamp;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property long long edgeType; // @synthesize edgeType=_edgeType;
@property long long fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property BOOL hasTunnel; // @synthesize hasTunnel=_hasTunnel;
@property BOOL fallbackDisabled; // @synthesize fallbackDisabled=_fallbackDisabled;
@property(readonly) unsigned long long hashKey; // @synthesize hashKey=_hashKey;
@property BOOL isDirectConnectionViable; // @synthesize isDirectConnectionViable=_isDirectConnectionViable;
@property(retain) NSString *remoteHostname; // @synthesize remoteHostname=_remoteHostname;
@property BOOL useCustomHostnameValidation; // @synthesize useCustomHostnameValidation=_useCustomHostnameValidation;
@property void *window; // @synthesize window=_window;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property long long state; // @synthesize state=_state;
@property(readonly) NEAppProxyFlow *clientFlow; // @synthesize clientFlow=_clientFlow;
@property(readonly) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(readonly) NPTunnel *tunnel; // @synthesize tunnel=_tunnel;
@property(readonly) __weak id <NPTunnelFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) BOOL isBestEffort;
- (void)reportMetrics;
@property(readonly) unsigned long long currentMaxSendDataSize;
- (void)setFlowFallbackReason:(long long)arg1;
- (void)updateAppData;
@property(retain) NSData *appData;
- (void)getConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getLatestConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processConnectionInfo:(id)arg1;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelDisconnected;
- (void)closeFromDirectConnectionWithError:(id)arg1;
- (void)closeFromTunnelWithError:(id)arg1;
@property(readonly) BOOL isClientFlowClosed;
- (void)closeClientFlowWithError:(id)arg1;
- (void)closeWithError:(id)arg1;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (void)handleAppData:(id)arg1 andError:(id)arg2;
- (void)handleData:(id)arg1 andError:(id)arg2;
- (void)stopDirectConnection;
- (void)startDirectConnection;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)getMetricsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSString *sourceAppIdentifier;
@property(retain) NWEndpoint *remoteEndpoint;
- (void)dealloc;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 clientFlow:(id)arg3 hashKey:(unsigned long long)arg4 delegate:(id)arg5;

@end

