//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CoreWiFiLinkQuality : NSObject
{
    NSNumber *timestamp;
    NSNumber *rssi;
    NSNumber *txRate;
}

@property(readonly, nonatomic) NSNumber *txRate; // @synthesize txRate;
@property(readonly, nonatomic) NSNumber *rssi; // @synthesize rssi;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp;
- (id)description;
- (void)dealloc;
- (id)initWithRSSI:(id)arg1 withTxRate:(id)arg2;

@end

