//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSGetStreamingEventsType : EWSBaseRequestType
{
    NSArray *_SubscriptionIds;
    long long _ConnectionTimeout;
}

+ (id)definition;
@property(nonatomic) long long ConnectionTimeout; // @synthesize ConnectionTimeout=_ConnectionTimeout;
@property(copy, nonatomic) NSArray *SubscriptionIds; // @synthesize SubscriptionIds=_SubscriptionIds;
- (void).cxx_destruct;

@end
