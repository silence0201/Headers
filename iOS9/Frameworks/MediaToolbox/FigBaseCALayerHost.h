//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost
{
    _Bool _preventsChangesToSublayerHierarchy;
}

+ (id)defaultActionForKey:(id)arg1;
@property(nonatomic) _Bool preventsChangesToSublayerHierarchy; // @synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)setSublayers:(id)arg1;
- (id)actionForKey:(id)arg1;
- (id)init;

@end

