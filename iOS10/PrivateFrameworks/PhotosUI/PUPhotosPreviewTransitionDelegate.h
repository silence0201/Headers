//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIPreviewTransitionDelegate.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewTransitionDelegate : _UIPreviewTransitionDelegate
{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;
}

@property(nonatomic) __weak id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate; // @synthesize photosPreviewingDelegate=_photosPreviewingDelegate;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end
