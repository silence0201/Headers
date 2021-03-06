//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUISceneHost-Protocol.h>
#import <FrontBoardUIServices/FBUISceneUpdater-Protocol.h>

@class FBUISceneIdentity, NSString;
@protocol FBUISceneClientProxy;

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater>
{
    FBUISceneIdentity *_identity;
    id <FBUISceneClientProxy> _sceneClient;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (id)sceneClient;
- (void)invalidateSceneClient;
- (void)registerSceneClient:(id)arg1;
- (id)contentView;
- (void)sendActions:(id)arg1;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

