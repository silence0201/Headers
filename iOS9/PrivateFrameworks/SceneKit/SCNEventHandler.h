//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNView;

@interface SCNEventHandler : NSObject
{
    SCNView *_view;
}

- (_Bool)wantsRedraw;
- (void)viewDidDraw;
- (void)viewWillDraw;
- (void)cameraDidChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)sceneWillChange;
- (id)gestureRecognizers;
- (void)setView:(id)arg1;
@property(readonly) SCNView *view;
- (void)dealloc;
- (id)init;

@end

