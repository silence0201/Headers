//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic, NSError;

@interface HMCharacteristicResponseTuple : NSObject
{
    HMCharacteristic *_characteristic;
    NSError *_error;
}

+ (id)tupleWithCharacteristic:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

