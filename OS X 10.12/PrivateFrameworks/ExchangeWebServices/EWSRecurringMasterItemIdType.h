//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSRecurringMasterItemIdType : EWSBaseItemIdType <XSDefinitionProvider>
{
    NSString *_OccurrenceId;
    NSString *_ChangeKey;
}

+ (id)definition;
@property(copy, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(copy, nonatomic) NSString *OccurrenceId; // @synthesize OccurrenceId=_OccurrenceId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
