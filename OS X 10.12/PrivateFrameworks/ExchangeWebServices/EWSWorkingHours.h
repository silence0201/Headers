//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSSerializableTimeZone, NSArray, NSString;

@interface EWSWorkingHours : NSObject <XSDefinitionProvider>
{
    EWSSerializableTimeZone *_TimeZone;
    NSArray *_WorkingPeriodArray;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *WorkingPeriodArray; // @synthesize WorkingPeriodArray=_WorkingPeriodArray;
@property(retain, nonatomic) EWSSerializableTimeZone *TimeZone; // @synthesize TimeZone=_TimeZone;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

