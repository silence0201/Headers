//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKAnimation, VKCameraController;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@protocol VKCameraControllerDelegate <NSObject>
- (void)cameraControllerDidFinishInitialTrackingAnimation:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomInDidChange:(BOOL)arg2;
- (id <VKTrackableAnnotationPresentation>)cameraController:(VKCameraController *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeWillChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(VKCameraController *)arg1;
- (void)cameraControllerRequestsLayout:(VKCameraController *)arg1;
- (void)runAnimation:(VKAnimation *)arg1;
@end
