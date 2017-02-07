//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIKBRenderTraits;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryLayoutSegment : NSObject
{
    int _rectCount;
    struct CGRect _rects[10];
    int _triangleCorners[10];
    int _edgeCount;
    unsigned long long _edges[10];
    NSString *_cachedKeyNames[10];
    _Bool _requireAllMatches;
    int _states;
    UIKBRenderTraits *_traits;
}

+ (id)segmentWithTraits:(id)arg1;
@property(nonatomic) _Bool requireAllMatches; // @synthesize requireAllMatches=_requireAllMatches;
@property(nonatomic) int keyStates; // @synthesize keyStates=_states;
@property(readonly, nonatomic) UIKBRenderTraits *traits; // @synthesize traits=_traits;
- (_Bool)containsPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withKeyplane:(id)arg3;
- (void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2;
- (void)addLayoutRect:(struct CGRect)arg1 asTriangle:(int)arg2;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end

