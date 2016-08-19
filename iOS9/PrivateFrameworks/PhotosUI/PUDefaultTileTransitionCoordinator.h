//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileTransitionCoordinator.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator
{
    NSNumber *_animationDuration;
}

@property(copy, nonatomic) NSNumber *animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (struct CGAffineTransform)_adjustDefaultDisappearanceTransform:(struct CGAffineTransform)arg1;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(_Bool)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end

