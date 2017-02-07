//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CoreWiFiScanCache : NSObject
{
    BOOL allowPrunes;
    NSMutableArray *bssids;
}

+ (id)queryScanCache:(id)arg1 withFilters:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSMutableArray *bssids; // @synthesize bssids;
- (id)queryScanCacheMergeSSIDs;
- (id)queryScanCacheForInfrastructure:(BOOL)arg1;
- (id)queryScanCacheForIBSS:(BOOL)arg1;
- (id)queryScanCacheForDWDS:(BOOL)arg1;
- (id)queryScanCacheForNamedNetworks:(BOOL)arg1;
- (id)queryScanCacheForHiddenNetworks:(BOOL)arg1;
- (id)queryScanCacheForiOSHotspots:(BOOL)arg1;
- (id)queryScanCacheForUnconfiguredMFiDevices:(BOOL)arg1;
- (id)queryScanCacheForUnconfiguredBaseStations:(BOOL)arg1;
- (id)queryScanCacheForBSSID:(id)arg1;
- (id)queryScanCacheBySSID:(id)arg1 pruneMatches:(BOOL)arg2;
- (id)queryScanCacheBySecurity:(unsigned long long)arg1 pruneMatches:(BOOL)arg2;
- (id)queryScanCacheByInterfaceName:(id)arg1 pruneMatches:(BOOL)arg2;
- (id)queryScanCacheByChannel:(id)arg1 pruneMatches:(BOOL)arg2;
- (void)dealloc;
- (id)initWithScanResults:(id)arg1;
- (id)init;
- (BOOL)shouldAddMergedSsidScanResult:(id)arg1 withResults:(id)arg2;

@end
