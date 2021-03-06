//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/SPCCGEffectRenderer-Protocol.h>

@interface SPCCGEffectRenderer : NSObject <SPCCGEffectRenderer>
{
}

+ (void)drawEffect:(id)arg1 withSettings:(id)arg2;
+ (Class)effectRendererForEffectClass:(Class)arg1;
+ (void)_registerEffectRendererClass:(Class)arg1 forEffectClass:(Class)arg2;
+ (void)_registerKnownEffectRenderers;
+ (id)_effectClassToRendererClassTable;
+ (void)initialize;

@end

