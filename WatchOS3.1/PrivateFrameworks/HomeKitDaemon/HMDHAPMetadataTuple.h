//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPMetadataTuple;

@interface HMDHAPMetadataTuple : NSObject <NSSecureCoding>
{
    HAPMetadataTuple *_hapMetadataTuple;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HAPMetadataTuple *hapMetadataTuple; // @synthesize hapMetadataTuple=_hapMetadataTuple;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPTuple:(id)arg1;
- (id)init;

@end
