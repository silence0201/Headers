//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CKLogFacilityWrapper : NSObject
{
    NSObject<OS_os_log> *_facility;
    NSString *_facilityName;
}

@property(readonly, nonatomic) NSString *facilityName; // @synthesize facilityName=_facilityName;
@property(readonly, nonatomic) NSObject<OS_os_log> *facility; // @synthesize facility=_facility;
- (void).cxx_destruct;
- (id)initWithFacility:(id)arg1 facilityName:(id)arg2;

@end

