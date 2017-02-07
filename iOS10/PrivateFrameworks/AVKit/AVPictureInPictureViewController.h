//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AVKit/PGPictureInPictureViewController-Protocol.h>

@class AVPictureInPicturePlayerLayerView, AVPlayerController, NSString;
@protocol AVPictureInPictureViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController>
{
    id <AVPictureInPictureViewControllerDelegate> _delegate;
    struct {
        _Bool pictureInPictureViewControllerViewDidAppear;
        _Bool pictureInPictureViewControllerViewWillDisappear;
    } _delegateRespondsTo;
    AVPlayerController *_playerController;
}

+ (id)keyPathsForValuesAffectingShouldShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
- (void)actionButtonTapped;
- (void)didAnimatePictureInPictureStop;
- (void)willAnimatePictureInPictureStart;
@property(nonatomic) __weak id <AVPictureInPictureViewControllerDelegate> delegate;
@property(readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
