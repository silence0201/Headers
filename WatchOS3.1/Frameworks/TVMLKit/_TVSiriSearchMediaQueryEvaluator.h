//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVMediaQueryEvaluator.h>

@class TVSiriPluginApplicationController;

__attribute__((visibility("hidden")))
@interface _TVSiriSearchMediaQueryEvaluator : TVMediaQueryEvaluator
{
    TVSiriPluginApplicationController *_siriPluginAC;
}

- (void).cxx_destruct;
- (_Bool)evaluteForMediaType:(id)arg1 featureType:(id)arg2 value:(id)arg3 result:(_Bool *)arg4;
- (id)initWithTemplateElement:(id)arg1 siriPluginApplicationController:(id)arg2;

@end
