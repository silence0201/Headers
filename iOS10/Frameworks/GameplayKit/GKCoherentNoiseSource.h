//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource
{
    int _seed;
    double _frequency;
    long long _octaveCount;
    double _lacunarity;
}

@property(nonatomic) int seed; // @synthesize seed=_seed;
@property(nonatomic) double lacunarity; // @synthesize lacunarity=_lacunarity;
@property(nonatomic) long long octaveCount; // @synthesize octaveCount=_octaveCount;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;

@end
