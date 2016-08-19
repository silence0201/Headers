//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextEffectsWindow.h>

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    _Bool _arePlaceholdersInitialised;
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;
- (void)_detachSceneLayer;
- (void)_attachSceneLayer;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (void)setWindowLevel:(double)arg1;
- (_Bool)_isFullscreen;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_isWindowServerHostingManaged;
- (id)_newSceneLayer;
- (_Bool)_wantsSceneAssociation;
- (void)invalidate;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;

@end

