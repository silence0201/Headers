//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseObjectType.h>

@class NSDateComponents;

@interface EWSWellKnownResponseObjectType : EWSResponseObjectType
{
    NSDateComponents *_ProposedStart;
    NSDateComponents *_ProposedEnd;
}

+ (id)definition;
@property(retain, nonatomic) NSDateComponents *ProposedEnd; // @synthesize ProposedEnd=_ProposedEnd;
@property(retain, nonatomic) NSDateComponents *ProposedStart; // @synthesize ProposedStart=_ProposedStart;
- (void).cxx_destruct;

@end
