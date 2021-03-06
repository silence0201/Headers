//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OITSUFormatObject.h>

#import <OfficeImport/TSUMutableDateTimeFormatInspectorPropertyVendor-Protocol.h>
#import <OfficeImport/TSUMutableDurationFormatInspectorPropertyVendor-Protocol.h>

@class NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUMutableFormatObject : OITSUFormatObject <TSUMutableDurationFormatInspectorPropertyVendor, TSUMutableDateTimeFormatInspectorPropertyVendor>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) CDStruct_730f14de formatStruct; // @dynamic formatStruct;
@property(copy, nonatomic) NSNumber *durationStyle;
@property(copy, nonatomic) NSNumber *durationUnitLargest;
@property(copy, nonatomic) NSNumber *durationUnitSmallest;
@property(copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property(copy, nonatomic) NSString *timeFormat;
@property(copy, nonatomic) NSString *dateFormat;
- (void)p_setDateFormat:(id)arg1 timeFormat:(id)arg2;
- (void)p_setDateTimeFormat:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *selectedDateFormats;
@property(readonly, nonatomic) NSSet *selectedDurationStyles;
@property(readonly, nonatomic) NSSet *selectedTimeFormats;

@end

