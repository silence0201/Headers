//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSBasePagingType : NSObject <XSDefinitionProvider>
{
    long long _MaxEntriesReturned;
}

+ (id)definition;
@property(nonatomic) long long MaxEntriesReturned; // @synthesize MaxEntriesReturned=_MaxEntriesReturned;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
