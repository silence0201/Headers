//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class FBSScene, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;

@protocol FBSSceneDelegate <NSObject>
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateWithDiff:(FBSSceneSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *))arg4;
@end

