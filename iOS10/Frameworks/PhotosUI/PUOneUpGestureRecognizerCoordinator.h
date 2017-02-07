//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, PUBrowsingSession, PUDoubleTapZoomController, PUOneUpBarsController, PUTouchingGestureRecognizer;
@protocol PUOneUpGestureRecognizerCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpGestureRecognizerCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToShouldAllowIrisGestureRecognizer;
    } _delegateFlags;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    _Bool __needsUpdateGestureRecognizers;
    id <PUOneUpGestureRecognizerCoordinatorDelegate> _delegate;
    PUBrowsingSession *_browsingSession;
    PUOneUpBarsController *_oneUpBarsController;
    PUDoubleTapZoomController *_doubleTapZoomController;
    NSHashTable *__irisGestureRecognizers;
}

@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(retain, nonatomic, setter=_setIrisGestureRecognizers:) NSHashTable *_irisGestureRecognizers; // @synthesize _irisGestureRecognizers=__irisGestureRecognizers;
@property(retain, nonatomic) PUDoubleTapZoomController *doubleTapZoomController; // @synthesize doubleTapZoomController=_doubleTapZoomController;
@property(retain, nonatomic) PUOneUpBarsController *oneUpBarsController; // @synthesize oneUpBarsController=_oneUpBarsController;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property(nonatomic) __weak id <PUOneUpGestureRecognizerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_invalidateGestureRecognizers;
@property(readonly, nonatomic) PUTouchingGestureRecognizer *touchingGestureRecognizer;
- (void)addIrisGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

