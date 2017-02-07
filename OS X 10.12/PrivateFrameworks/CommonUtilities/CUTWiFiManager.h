//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommonUtilities/CUTPowerMonitorDelegate-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableSet, NSNumber, NSRecursiveLock, NSRunLoop, NSString, NSThread;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate>
{
    BOOL _shouldAutoAssociateAsForeground;
    BOOL _isHostingHotSpot;
    BOOL _isWifiEnabled;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _isWakeOnWiFiSupported;
    int _linkToken;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSRecursiveLock *_lock;
    NSHashTable *_delegateMap;
    NSHashTable *_wowClients;
    void *_currentNetwork;
    void *_wifiManager;
    void *_wifiDevice;
    void *_dynamicStore;
    NSDictionary *_lastWiFiPowerInfo;
    NSThread *_wifiThread;
    struct __CFRunLoopSource *_runLoopSource;
    NSRunLoop *_wifiRunLoop;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRunLoop *wifiRunLoop; // @synthesize wifiRunLoop=_wifiRunLoop;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(retain, nonatomic) NSThread *wifiThread; // @synthesize wifiThread=_wifiThread;
@property(copy, nonatomic) NSDictionary *lastWiFiPowerInfo; // @synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo;
@property(nonatomic) void *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property(nonatomic) void *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
@property(nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(nonatomic) int linkToken; // @synthesize linkToken=_linkToken;
@property(nonatomic) void *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(retain, nonatomic) NSHashTable *wowClients; // @synthesize wowClients=_wowClients;
@property(retain, nonatomic) NSHashTable *delegateMap; // @synthesize delegateMap=_delegateMap;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(readonly, nonatomic) BOOL isWoWSupported; // @synthesize isWoWSupported=_isWakeOnWiFiSupported;
@property(nonatomic) BOOL autoAssociateWiFiAsForegroundClient; // @synthesize autoAssociateWiFiAsForegroundClient=_shouldAutoAssociateAsForeground;
@property(readonly, nonatomic) BOOL isWoWEnabled; // @synthesize isWoWEnabled=_isWakeOnWiFiEnabled;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) BOOL autoAssociateWiFi;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
@property(readonly, nonatomic) BOOL isWiFiCaptive;
- (BOOL)_isPrimaryCellular;
@property(readonly, retain, nonatomic) NSString *currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(CDUnknownBlockType)arg1;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
@property(readonly, nonatomic) BOOL isWiFiEnabled; // @synthesize isWiFiEnabled=_isWifiEnabled;
- (void)_updateIsWiFiEnabled;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isWiFiAssociated;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) BOOL isHostingWiFiHotSpot; // @synthesize isHostingWiFiHotSpot=_isHostingHotSpot;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)_adjustWoWState;
- (BOOL)hasWoWClient:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
