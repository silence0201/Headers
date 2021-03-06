//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKCameraController-Protocol.h>
#import <VectorKit/VKPuckAnimatorDelegate-Protocol.h>

@class VKMapCanvas, VKMapModel;

@protocol VKNavigationCameraController <VKCameraController, VKPuckAnimatorDelegate>
@property(nonatomic) double zoomScale;
@property(nonatomic) VKMapCanvas *mapCanvas;
@property(retain, nonatomic) VKMapModel *mapModel;
- (void)stop;
- (void)startWithPounce:(BOOL)arg1 startLocation:(CDStruct_c3b9c2ee)arg2 pounceCompletionHandler:(void (^)(BOOL))arg3;
@end

