//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPSubscriptionStatusPlaybackInformation : NSObject
{
    long long _accountSubscriptionStatus;
    long long _carrierBundlingStatus;
    _Bool _definitiveInformation;
    _Bool _hasPlaybackCapability;
    _Bool _requiresCarrierManualVerification;
    _Bool _shouldUseLease;
    _Bool _shouldUseAccountLessStreaming;
}

@property(readonly, nonatomic) _Bool shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property(readonly, nonatomic) _Bool shouldUseLease; // @synthesize shouldUseLease=_shouldUseLease;
@property(readonly, nonatomic) _Bool requiresCarrierManualVerification; // @synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification;
@property(readonly, nonatomic) _Bool hasPlaybackCapability; // @synthesize hasPlaybackCapability=_hasPlaybackCapability;
@property(readonly, nonatomic, getter=isDefinitiveInformation) _Bool definitiveInformation; // @synthesize definitiveInformation=_definitiveInformation;
- (id)description;
- (id)initWithSubscriptionStatus:(id)arg1;

@end

