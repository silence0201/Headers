//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Suggestions/SGTAnimationWindowEffect.h>

__attribute__((visibility("hidden")))
@interface SGTFadeWindowEffect : SGTAnimationWindowEffect
{
    double _initialAlpha;
    double _finalAlpha;
}

+ (id)fadeWindow:(id)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3 duration:(double)arg4;
- (void)done;
- (void)setValue:(float)arg1;

@end
