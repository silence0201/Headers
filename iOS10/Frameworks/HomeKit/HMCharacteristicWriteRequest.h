//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest
{
    id _value;
}

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;

@end
