//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VCPFingerprint : NSObject
{
    NSString *_master;
    NSString *_adjusted;
}

+ (id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2;
@property(readonly) NSString *adjusted; // @synthesize adjusted=_adjusted;
@property(readonly) NSString *master; // @synthesize master=_master;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToFingerprint:(id)arg1;
- (id)initWithMaster:(id)arg1 adjusted:(id)arg2;
- (id)init;

@end

