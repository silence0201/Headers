//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject <NSCopying>
{
    _Bool animated;
    double duration;
    unsigned long long extraOptions;
    _Bool interactivelyCancelled;
    _Bool force;
}

+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;
@property(nonatomic) _Bool interactivelyCancelled; // @synthesize interactivelyCancelled;
@property(nonatomic) unsigned long long extraOptions; // @synthesize extraOptions;
@property(nonatomic) _Bool force; // @synthesize force;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) _Bool animated; // @synthesize animated;
@property(readonly, nonatomic) _Bool canDismissWithScrollView;
- (id)endPlacementForInputViewSet:(id)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
@property(readonly, nonatomic) _Bool isAnimationCompleted;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

