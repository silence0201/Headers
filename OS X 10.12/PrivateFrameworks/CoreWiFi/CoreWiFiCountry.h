//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CoreWiFiCountry : NSObject
{
    NSString *friendlyName;
    NSString *isoName;
    long long isoCode;
    NSMutableArray *channels;
}

@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels;
@property(nonatomic) long long isoCode; // @synthesize isoCode;
@property(retain, nonatomic) NSString *isoName; // @synthesize isoName;
@property(retain, nonatomic) NSString *friendlyName; // @synthesize friendlyName;
- (long long)compareByFrequency:(id)arg1 channel2:(id)arg2;
- (void)createDefaultChannelList5GHzISMBand;
- (void)createDefaultChannelList5GHzUpperBand;
- (void)createDefaultChannelList5GHzHCEPTBand;
- (void)createDefaultChannelList5GHzMiddleBand;
- (void)createDefaultChannelList5GHzLowBand;
- (void)createDefaultChannelList2Dot4GHz;
- (void)createDefaultChannelList;
- (void)sortChannelsByFrequency;
- (id)skeleton;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithFriendlyName:(id)arg1 withISOName:(id)arg2 withISOCode:(id)arg3;

@end

