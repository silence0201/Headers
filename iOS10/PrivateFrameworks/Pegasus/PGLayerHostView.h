//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle, _UIRemoteView;

@interface PGLayerHostView : UIView
{
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

- (void).cxx_destruct;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (void)didMoveToWindow;
@property(nonatomic) struct CGAffineTransform layerHostTransform;
@property(retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
