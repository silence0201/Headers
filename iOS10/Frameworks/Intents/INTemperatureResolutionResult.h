//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INTemperatureResolutionResultExport-Protocol.h>

@class NSString;

@interface INTemperatureResolutionResult : INIntentResolutionResult <INTemperatureResolutionResultExport>
{
}

+ (id)confirmationRequiredWithTemperatureToConfirm:(id)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(id)arg1;
+ (id)successWithResolvedTemperature:(id)arg1;
+ (id)needsMoreDetailsForTemperature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

