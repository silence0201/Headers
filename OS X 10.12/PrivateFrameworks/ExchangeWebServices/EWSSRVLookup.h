//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EWSSRVLookup : NSObject
{
    NSString *_servicePrefix;
    NSString *_host;
    NSArray *_discoveredRecords;
}

+ (void)initialize;
@property(copy, nonatomic) NSArray *discoveredRecords; // @synthesize discoveredRecords=_discoveredRecords;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *servicePrefix; // @synthesize servicePrefix=_servicePrefix;
- (void).cxx_destruct;
- (BOOL)lookup;
- (id)init;
- (id)initWithServicePrefix:(id)arg1 onHost:(id)arg2;

@end
